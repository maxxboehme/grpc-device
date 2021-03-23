#include <niscope/niscope_library.h>
#include <niscope/niscope_service.h>
#include <niswitch/niswitch_library.h>
#include <niswitch/niswitch_service.h>

#include "server_configuration_parser.h"
#include "server_security_configuration.h"
#include "session_utilities_service.h"
#include "syscfg_library.h"

static void RunServer(const std::string& config_file_path)
{
  grpc::EnableDefaultHealthCheckService(true);
  grpc::reflection::InitProtoReflectionServerBuilderPlugin();

  std::string server_address, server_cert, server_key, root_cert;

  try {
    grpc::nidevice::ServerConfigurationParser server_config_parser = config_file_path.empty()
        ? grpc::nidevice::ServerConfigurationParser()
        : grpc::nidevice::ServerConfigurationParser(config_file_path);
    server_address = server_config_parser.parse_address();
    server_cert = server_config_parser.parse_server_cert();
    server_key = server_config_parser.parse_server_key();
    root_cert = server_config_parser.parse_root_cert();
  }
  catch (const std::exception& ex) {
    std::cerr << "\nERROR:\n\n"
              << ex.what() << "\n\nExiting.\n";
    exit(EXIT_FAILURE);
  }

  grpc::ServerBuilder builder;
  int listeningPort = 0;
  grpc::nidevice::ServerSecurityConfiguration server_security_config(server_cert, server_key, root_cert);
  builder.AddListeningPort(server_address, server_security_config.get_credentials(), &listeningPort);
  // Register services available on the server.
  grpc::nidevice::SessionRepository session_repository;
  grpc::nidevice::SysCfgLibrary syscfg_library;
  grpc::nidevice::DeviceEnumerator device_enumerator(&syscfg_library);
  grpc::nidevice::SessionUtilitiesService core_service(&session_repository, &device_enumerator);
  builder.RegisterService(&core_service);

  grpc::niscope::NiScopeLibrary niscope_library;
  grpc::niscope::NiScopeService niscope_service(&niscope_library, &session_repository);
  builder.RegisterService(&niscope_service);

  grpc::niswitch::NiSwitchLibrary niswitch_library;
  grpc::niswitch::NiSwitchService niswitch_service(&niswitch_library, &session_repository);
  builder.RegisterService(&niswitch_service);

  // Assemble the server.
  auto server = builder.BuildAndStart();

  if (!server) {
    std::cerr << "Server failed to start on " << server_address << std::endl;
    exit(EXIT_FAILURE);
  }

  std::cout << "Server listening on port " << listeningPort << ". ";

  const char* security_description = server_security_config.is_insecure_credentials()
      ? "insecure credentials"
      : "secure credentials";
  const char* tls_description = "";
  auto credentials_options = server_security_config.try_get_options();
  if (credentials_options != nullptr) {
    tls_description = credentials_options->client_certificate_request == GRPC_SSL_DONT_REQUEST_CLIENT_CERTIFICATE
        ? " (Server-Side TLS)"
        : " (Mutual TLS)";
  }
  std::cout << "Security is configured with " << security_description << tls_description << "." << std::endl;
  // This call will block until another thread shuts down the server.
  server->Wait();
  // This code is currently unreachable, but if the call to wait exits, we need to clean up the service here.
  session_repository.reset_server();
  device_enumerator.clear_syscfg_session();
}

int main(int argc, char** argv)
{
  if (argc > 2) {
    std::cerr << "\nUsage: "
              << "ni_grpc_device_server <config-file-path>\n\n";
    exit(EXIT_FAILURE);
  }
  std::string config_file_path;
  if (argc == 2) {
    config_file_path = argv[1];
  }
  RunServer(config_file_path);
  return 0;
}