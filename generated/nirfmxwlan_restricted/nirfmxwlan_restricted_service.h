
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-RFMXWLAN-RESTRICTED Metadata
//---------------------------------------------------------------------
#ifndef NIRFMXWLAN_RESTRICTED_GRPC_SERVICE_H
#define NIRFMXWLAN_RESTRICTED_GRPC_SERVICE_H

#include <nirfmxwlan_restricted.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/converters.h>
#include <server/feature_toggles.h>
#include <server/session_resource_repository.h>
#include <server/shared_library.h>
#include <server/exceptions.h>

#include "nirfmxwlan_restricted_library_interface.h"

namespace nirfmxwlan_restricted_grpc {

struct NiRFmxWLANRestrictedFeatureToggles
{
  using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;
  NiRFmxWLANRestrictedFeatureToggles(const nidevice_grpc::FeatureToggles& feature_toggles = {});

  bool is_enabled;
};

class NiRFmxWLANRestrictedService final : public NiRFmxWLANRestricted::Service {
public:
  using ResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>;

  NiRFmxWLANRestrictedService(
    NiRFmxWLANRestrictedLibraryInterface* library,
    ResourceRepositorySharedPtr resource_repository,
    const NiRFmxWLANRestrictedFeatureToggles& feature_toggles = {});
  virtual ~NiRFmxWLANRestrictedService();
  
  ::grpc::Status GetChannelList(::grpc::ServerContext* context, const GetChannelListRequest* request, GetChannelListResponse* response) override;
  ::grpc::Status OFDMModAccFetchCommonPilotErrorTraceIndB(::grpc::ServerContext* context, const OFDMModAccFetchCommonPilotErrorTraceIndBRequest* request, OFDMModAccFetchCommonPilotErrorTraceIndBResponse* response) override;
  ::grpc::Status OFDMModAccNoiseCalibrate(::grpc::ServerContext* context, const OFDMModAccNoiseCalibrateRequest* request, OFDMModAccNoiseCalibrateResponse* response) override;
private:
  NiRFmxWLANRestrictedLibraryInterface* library_;
  ResourceRepositorySharedPtr session_repository_;
  ::grpc::Status ConvertApiErrorStatusForNiRFmxInstrHandle(::grpc::ServerContext* context, int32_t status, niRFmxInstrHandle instrumentHandle);

  NiRFmxWLANRestrictedFeatureToggles feature_toggles_;
};

} // namespace nirfmxwlan_restricted_grpc

#endif  // NIRFMXWLAN_RESTRICTED_GRPC_SERVICE_H