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
// source: google/cloud/clouddms/v1/clouddms.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_INTERNAL_DATA_MIGRATION_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_INTERNAL_DATA_MIGRATION_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/clouddms/v1/clouddms.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace datamigration_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DataMigrationServiceStub {
 public:
  virtual ~DataMigrationServiceStub() = 0;

  virtual StatusOr<google::cloud::clouddms::v1::ListMigrationJobsResponse>
  ListMigrationJobs(
      grpc::ClientContext& context,
      google::cloud::clouddms::v1::ListMigrationJobsRequest const& request) = 0;

  virtual StatusOr<google::cloud::clouddms::v1::MigrationJob> GetMigrationJob(
      grpc::ClientContext& context,
      google::cloud::clouddms::v1::GetMigrationJobRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateMigrationJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::CreateMigrationJobRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateMigrationJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::UpdateMigrationJobRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteMigrationJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::DeleteMigrationJobRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncStartMigrationJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::StartMigrationJobRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncStopMigrationJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::StopMigrationJobRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncResumeMigrationJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::ResumeMigrationJobRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncPromoteMigrationJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::PromoteMigrationJobRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncVerifyMigrationJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::VerifyMigrationJobRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncRestartMigrationJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::RestartMigrationJobRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::clouddms::v1::SshScript> GenerateSshScript(
      grpc::ClientContext& context,
      google::cloud::clouddms::v1::GenerateSshScriptRequest const& request) = 0;

  virtual StatusOr<google::cloud::clouddms::v1::ListConnectionProfilesResponse>
  ListConnectionProfiles(
      grpc::ClientContext& context,
      google::cloud::clouddms::v1::ListConnectionProfilesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::clouddms::v1::ConnectionProfile>
  GetConnectionProfile(
      grpc::ClientContext& context,
      google::cloud::clouddms::v1::GetConnectionProfileRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateConnectionProfile(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::CreateConnectionProfileRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateConnectionProfile(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::UpdateConnectionProfileRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteConnectionProfile(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::DeleteConnectionProfileRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultDataMigrationServiceStub : public DataMigrationServiceStub {
 public:
  DefaultDataMigrationServiceStub(
      std::unique_ptr<
          google::cloud::clouddms::v1::DataMigrationService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::cloud::clouddms::v1::ListMigrationJobsResponse>
  ListMigrationJobs(grpc::ClientContext& client_context,
                    google::cloud::clouddms::v1::ListMigrationJobsRequest const&
                        request) override;

  StatusOr<google::cloud::clouddms::v1::MigrationJob> GetMigrationJob(
      grpc::ClientContext& client_context,
      google::cloud::clouddms::v1::GetMigrationJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateMigrationJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::CreateMigrationJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateMigrationJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::UpdateMigrationJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteMigrationJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::DeleteMigrationJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartMigrationJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::StartMigrationJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStopMigrationJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::StopMigrationJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncResumeMigrationJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::ResumeMigrationJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncPromoteMigrationJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::PromoteMigrationJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncVerifyMigrationJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::VerifyMigrationJobRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRestartMigrationJob(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::RestartMigrationJobRequest const& request)
      override;

  StatusOr<google::cloud::clouddms::v1::SshScript> GenerateSshScript(
      grpc::ClientContext& client_context,
      google::cloud::clouddms::v1::GenerateSshScriptRequest const& request)
      override;

  StatusOr<google::cloud::clouddms::v1::ListConnectionProfilesResponse>
  ListConnectionProfiles(
      grpc::ClientContext& client_context,
      google::cloud::clouddms::v1::ListConnectionProfilesRequest const& request)
      override;

  StatusOr<google::cloud::clouddms::v1::ConnectionProfile> GetConnectionProfile(
      grpc::ClientContext& client_context,
      google::cloud::clouddms::v1::GetConnectionProfileRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateConnectionProfile(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::CreateConnectionProfileRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateConnectionProfile(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::UpdateConnectionProfileRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteConnectionProfile(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::clouddms::v1::DeleteConnectionProfileRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<
      google::cloud::clouddms::v1::DataMigrationService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datamigration_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_INTERNAL_DATA_MIGRATION_STUB_H