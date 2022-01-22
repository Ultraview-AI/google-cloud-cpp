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
// source: google/cloud/notebooks/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_NOTEBOOK_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_NOTEBOOK_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/notebooks/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace notebooks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NotebookServiceConnectionIdempotencyPolicy {
 public:
  virtual ~NotebookServiceConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<NotebookServiceConnectionIdempotencyPolicy> clone()
      const = 0;

  virtual google::cloud::Idempotency ListInstances(
      google::cloud::notebooks::v1::ListInstancesRequest request) = 0;

  virtual google::cloud::Idempotency GetInstance(
      google::cloud::notebooks::v1::GetInstanceRequest const& request) = 0;

  virtual google::cloud::Idempotency CreateInstance(
      google::cloud::notebooks::v1::CreateInstanceRequest const& request) = 0;

  virtual google::cloud::Idempotency RegisterInstance(
      google::cloud::notebooks::v1::RegisterInstanceRequest const& request) = 0;

  virtual google::cloud::Idempotency SetInstanceAccelerator(
      google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&
          request) = 0;

  virtual google::cloud::Idempotency SetInstanceMachineType(
      google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&
          request) = 0;

  virtual google::cloud::Idempotency UpdateInstanceConfig(
      google::cloud::notebooks::v1::UpdateInstanceConfigRequest const&
          request) = 0;

  virtual google::cloud::Idempotency UpdateShieldedInstanceConfig(
      google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&
          request) = 0;

  virtual google::cloud::Idempotency SetInstanceLabels(
      google::cloud::notebooks::v1::SetInstanceLabelsRequest const&
          request) = 0;

  virtual google::cloud::Idempotency DeleteInstance(
      google::cloud::notebooks::v1::DeleteInstanceRequest const& request) = 0;

  virtual google::cloud::Idempotency StartInstance(
      google::cloud::notebooks::v1::StartInstanceRequest const& request) = 0;

  virtual google::cloud::Idempotency StopInstance(
      google::cloud::notebooks::v1::StopInstanceRequest const& request) = 0;

  virtual google::cloud::Idempotency ResetInstance(
      google::cloud::notebooks::v1::ResetInstanceRequest const& request) = 0;

  virtual google::cloud::Idempotency ReportInstanceInfo(
      google::cloud::notebooks::v1::ReportInstanceInfoRequest const&
          request) = 0;

  virtual google::cloud::Idempotency IsInstanceUpgradeable(
      google::cloud::notebooks::v1::IsInstanceUpgradeableRequest const&
          request) = 0;

  virtual google::cloud::Idempotency GetInstanceHealth(
      google::cloud::notebooks::v1::GetInstanceHealthRequest const&
          request) = 0;

  virtual google::cloud::Idempotency UpgradeInstance(
      google::cloud::notebooks::v1::UpgradeInstanceRequest const& request) = 0;

  virtual google::cloud::Idempotency RollbackInstance(
      google::cloud::notebooks::v1::RollbackInstanceRequest const& request) = 0;

  virtual google::cloud::Idempotency UpgradeInstanceInternal(
      google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&
          request) = 0;

  virtual google::cloud::Idempotency ListEnvironments(
      google::cloud::notebooks::v1::ListEnvironmentsRequest request) = 0;

  virtual google::cloud::Idempotency GetEnvironment(
      google::cloud::notebooks::v1::GetEnvironmentRequest const& request) = 0;

  virtual google::cloud::Idempotency CreateEnvironment(
      google::cloud::notebooks::v1::CreateEnvironmentRequest const&
          request) = 0;

  virtual google::cloud::Idempotency DeleteEnvironment(
      google::cloud::notebooks::v1::DeleteEnvironmentRequest const&
          request) = 0;

  virtual google::cloud::Idempotency ListSchedules(
      google::cloud::notebooks::v1::ListSchedulesRequest request) = 0;

  virtual google::cloud::Idempotency GetSchedule(
      google::cloud::notebooks::v1::GetScheduleRequest const& request) = 0;

  virtual google::cloud::Idempotency DeleteSchedule(
      google::cloud::notebooks::v1::DeleteScheduleRequest const& request) = 0;

  virtual google::cloud::Idempotency CreateSchedule(
      google::cloud::notebooks::v1::CreateScheduleRequest const& request) = 0;

  virtual google::cloud::Idempotency TriggerSchedule(
      google::cloud::notebooks::v1::TriggerScheduleRequest const& request) = 0;

  virtual google::cloud::Idempotency ListExecutions(
      google::cloud::notebooks::v1::ListExecutionsRequest request) = 0;

  virtual google::cloud::Idempotency GetExecution(
      google::cloud::notebooks::v1::GetExecutionRequest const& request) = 0;

  virtual google::cloud::Idempotency DeleteExecution(
      google::cloud::notebooks::v1::DeleteExecutionRequest const& request) = 0;

  virtual google::cloud::Idempotency CreateExecution(
      google::cloud::notebooks::v1::CreateExecutionRequest const& request) = 0;
};

std::unique_ptr<NotebookServiceConnectionIdempotencyPolicy>
MakeDefaultNotebookServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_NOTEBOOK_CONNECTION_IDEMPOTENCY_POLICY_H