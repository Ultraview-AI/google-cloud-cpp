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
// source: google/monitoring/v3/alert_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_ALERT_POLICY_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_ALERT_POLICY_LOGGING_DECORATOR_H

#include "google/cloud/monitoring/internal/alert_policy_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace monitoring_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AlertPolicyServiceLogging : public AlertPolicyServiceStub {
 public:
  ~AlertPolicyServiceLogging() override = default;
  AlertPolicyServiceLogging(std::shared_ptr<AlertPolicyServiceStub> child,
                            TracingOptions tracing_options,
                            std::set<std::string> components);

  StatusOr<google::monitoring::v3::ListAlertPoliciesResponse> ListAlertPolicies(
      grpc::ClientContext& context,
      google::monitoring::v3::ListAlertPoliciesRequest const& request) override;

  StatusOr<google::monitoring::v3::AlertPolicy> GetAlertPolicy(
      grpc::ClientContext& context,
      google::monitoring::v3::GetAlertPolicyRequest const& request) override;

  StatusOr<google::monitoring::v3::AlertPolicy> CreateAlertPolicy(
      grpc::ClientContext& context,
      google::monitoring::v3::CreateAlertPolicyRequest const& request) override;

  Status DeleteAlertPolicy(
      grpc::ClientContext& context,
      google::monitoring::v3::DeleteAlertPolicyRequest const& request) override;

  StatusOr<google::monitoring::v3::AlertPolicy> UpdateAlertPolicy(
      grpc::ClientContext& context,
      google::monitoring::v3::UpdateAlertPolicyRequest const& request) override;

 private:
  std::shared_ptr<AlertPolicyServiceStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // AlertPolicyServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_INTERNAL_ALERT_POLICY_LOGGING_DECORATOR_H