// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/securitycenter/v1/securitycenter_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_SECURITY_CENTER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_SECURITY_CENTER_CONNECTION_H

#include "google/cloud/securitycenter/internal/security_center_retry_traits.h"
#include "google/cloud/securitycenter/internal/security_center_stub.h"
#include "google/cloud/securitycenter/security_center_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace securitycenter {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using SecurityCenterRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        securitycenter_internal::SecurityCenterRetryTraits>;

using SecurityCenterLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        securitycenter_internal::SecurityCenterRetryTraits>;

using SecurityCenterLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        securitycenter_internal::SecurityCenterRetryTraits>;

class SecurityCenterConnection {
 public:
  virtual ~SecurityCenterConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<
      StatusOr<google::cloud::securitycenter::v1::BulkMuteFindingsResponse>>
  BulkMuteFindings(
      google::cloud::securitycenter::v1::BulkMuteFindingsRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v1::Source> CreateSource(
      google::cloud::securitycenter::v1::CreateSourceRequest const& request);

  virtual StatusOr<google::cloud::securitycenter::v1::Finding> CreateFinding(
      google::cloud::securitycenter::v1::CreateFindingRequest const& request);

  virtual StatusOr<google::cloud::securitycenter::v1::MuteConfig>
  CreateMuteConfig(
      google::cloud::securitycenter::v1::CreateMuteConfigRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
  CreateNotificationConfig(
      google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&
          request);

  virtual Status DeleteMuteConfig(
      google::cloud::securitycenter::v1::DeleteMuteConfigRequest const&
          request);

  virtual Status DeleteNotificationConfig(
      google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&
          request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::cloud::securitycenter::v1::MuteConfig> GetMuteConfig(
      google::cloud::securitycenter::v1::GetMuteConfigRequest const& request);

  virtual StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
  GetNotificationConfig(
      google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
  GetOrganizationSettings(
      google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v1::Source> GetSource(
      google::cloud::securitycenter::v1::GetSourceRequest const& request);

  virtual StreamRange<google::cloud::securitycenter::v1::GroupResult>
  GroupAssets(google::cloud::securitycenter::v1::GroupAssetsRequest request);

  virtual StreamRange<google::cloud::securitycenter::v1::GroupResult>
  GroupFindings(
      google::cloud::securitycenter::v1::GroupFindingsRequest request);

  virtual StreamRange<
      google::cloud::securitycenter::v1::ListAssetsResponse::ListAssetsResult>
  ListAssets(google::cloud::securitycenter::v1::ListAssetsRequest request);

  virtual StreamRange<google::cloud::securitycenter::v1::ListFindingsResponse::
                          ListFindingsResult>
  ListFindings(google::cloud::securitycenter::v1::ListFindingsRequest request);

  virtual StreamRange<google::cloud::securitycenter::v1::MuteConfig>
  ListMuteConfigs(
      google::cloud::securitycenter::v1::ListMuteConfigsRequest request);

  virtual StreamRange<google::cloud::securitycenter::v1::NotificationConfig>
  ListNotificationConfigs(
      google::cloud::securitycenter::v1::ListNotificationConfigsRequest
          request);

  virtual StreamRange<google::cloud::securitycenter::v1::Source> ListSources(
      google::cloud::securitycenter::v1::ListSourcesRequest request);

  virtual future<
      StatusOr<google::cloud::securitycenter::v1::RunAssetDiscoveryResponse>>
  RunAssetDiscovery(
      google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v1::Finding> SetFindingState(
      google::cloud::securitycenter::v1::SetFindingStateRequest const& request);

  virtual StatusOr<google::cloud::securitycenter::v1::Finding> SetMute(
      google::cloud::securitycenter::v1::SetMuteRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual StatusOr<google::cloud::securitycenter::v1::ExternalSystem>
  UpdateExternalSystem(
      google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v1::Finding> UpdateFinding(
      google::cloud::securitycenter::v1::UpdateFindingRequest const& request);

  virtual StatusOr<google::cloud::securitycenter::v1::MuteConfig>
  UpdateMuteConfig(
      google::cloud::securitycenter::v1::UpdateMuteConfigRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
  UpdateNotificationConfig(
      google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&
          request);

  virtual StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
  UpdateOrganizationSettings(
      google::cloud::securitycenter::v1::
          UpdateOrganizationSettingsRequest const& request);

  virtual StatusOr<google::cloud::securitycenter::v1::Source> UpdateSource(
      google::cloud::securitycenter::v1::UpdateSourceRequest const& request);

  virtual StatusOr<google::cloud::securitycenter::v1::SecurityMarks>
  UpdateSecurityMarks(
      google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
          request);
};

std::shared_ptr<SecurityCenterConnection> MakeSecurityCenterConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace securitycenter_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<securitycenter::SecurityCenterConnection>
MakeSecurityCenterConnection(std::shared_ptr<SecurityCenterStub> stub,
                             Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_SECURITY_CENTER_CONNECTION_H