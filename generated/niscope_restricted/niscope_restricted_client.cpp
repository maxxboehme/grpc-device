
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-SCOPE-RESTRICTED.
//---------------------------------------------------------------------
#include "niscope_restricted_client.h"

#include <grpcpp/grpcpp.h>

#include <niscope_restricted.grpc.pb.h>

#include <cstdint>
#include <memory>
#include <stdexcept>
#include <vector>

namespace niscope_restricted_grpc::experimental::client {

GetStartTimestampInformationResponse
get_start_timestamp_information(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetStartTimestampInformationRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetStartTimestampInformationResponse{};

  raise_if_error(
      stub->GetStartTimestampInformation(&context, request, &response),
      context);

  return response;
}


} // namespace niscope_restricted_grpc::experimental::client
