// Copyright 2021 Google LLC
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
// source: generator/integration_tests/test.proto

#include "generator/integration_tests/golden/golden_thing_admin_connection.h"
#include "generator/integration_tests/golden/golden_thing_admin_options.h"
#include "generator/integration_tests/golden/internal/golden_thing_admin_option_defaults.h"
#include "generator/integration_tests/golden/internal/golden_thing_admin_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/polling_loop.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace golden {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

GoldenThingAdminConnection::~GoldenThingAdminConnection() = default;

StreamRange<google::test::admin::database::v1::Database> GoldenThingAdminConnection::ListDatabases(
    google::test::admin::database::v1::ListDatabasesRequest request) {
  return google::cloud::internal::MakePaginationRange<StreamRange<
    google::test::admin::database::v1::Database>>(
    std::move(request),
    [](google::test::admin::database::v1::ListDatabasesRequest const&) {
      return StatusOr<google::test::admin::database::v1::ListDatabasesResponse>{};
    },
    [](google::test::admin::database::v1::ListDatabasesResponse const&) {
      return std::vector<google::test::admin::database::v1::Database>();
    });
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminConnection::CreateDatabase(
    google::test::admin::database::v1::CreateDatabaseRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::test::admin::database::v1::Database>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::test::admin::database::v1::Database>
GoldenThingAdminConnection::GetDatabase(
    google::test::admin::database::v1::GetDatabaseRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::test::admin::database::v1::UpdateDatabaseDdlMetadata>>
GoldenThingAdminConnection::UpdateDatabaseDdl(
    google::test::admin::database::v1::UpdateDatabaseDdlRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::test::admin::database::v1::UpdateDatabaseDdlMetadata>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

Status
GoldenThingAdminConnection::DropDatabase(
    google::test::admin::database::v1::DropDatabaseRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::test::admin::database::v1::GetDatabaseDdlResponse>
GoldenThingAdminConnection::GetDatabaseDdl(
    google::test::admin::database::v1::GetDatabaseDdlRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy>
GoldenThingAdminConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy>
GoldenThingAdminConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
GoldenThingAdminConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::test::admin::database::v1::Backup>>
GoldenThingAdminConnection::CreateBackup(
    google::test::admin::database::v1::CreateBackupRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::test::admin::database::v1::Backup>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::test::admin::database::v1::Backup>
GoldenThingAdminConnection::GetBackup(
    google::test::admin::database::v1::GetBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::test::admin::database::v1::Backup>
GoldenThingAdminConnection::UpdateBackup(
    google::test::admin::database::v1::UpdateBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status
GoldenThingAdminConnection::DeleteBackup(
    google::test::admin::database::v1::DeleteBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::test::admin::database::v1::Backup> GoldenThingAdminConnection::ListBackups(
    google::test::admin::database::v1::ListBackupsRequest request) {
  return google::cloud::internal::MakePaginationRange<StreamRange<
    google::test::admin::database::v1::Backup>>(
    std::move(request),
    [](google::test::admin::database::v1::ListBackupsRequest const&) {
      return StatusOr<google::test::admin::database::v1::ListBackupsResponse>{};
    },
    [](google::test::admin::database::v1::ListBackupsResponse const&) {
      return std::vector<google::test::admin::database::v1::Backup>();
    });
}

future<StatusOr<google::test::admin::database::v1::Database>>
GoldenThingAdminConnection::RestoreDatabase(
    google::test::admin::database::v1::RestoreDatabaseRequest const&) {
  return google::cloud::make_ready_future<
    StatusOr<google::test::admin::database::v1::Database>>(
    Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::longrunning::Operation> GoldenThingAdminConnection::ListDatabaseOperations(
    google::test::admin::database::v1::ListDatabaseOperationsRequest request) {
  return google::cloud::internal::MakePaginationRange<StreamRange<
    google::longrunning::Operation>>(
    std::move(request),
    [](google::test::admin::database::v1::ListDatabaseOperationsRequest const&) {
      return StatusOr<google::test::admin::database::v1::ListDatabaseOperationsResponse>{};
    },
    [](google::test::admin::database::v1::ListDatabaseOperationsResponse const&) {
      return std::vector<google::longrunning::Operation>();
    });
}

StreamRange<google::longrunning::Operation> GoldenThingAdminConnection::ListBackupOperations(
    google::test::admin::database::v1::ListBackupOperationsRequest request) {
  return google::cloud::internal::MakePaginationRange<StreamRange<
    google::longrunning::Operation>>(
    std::move(request),
    [](google::test::admin::database::v1::ListBackupOperationsRequest const&) {
      return StatusOr<google::test::admin::database::v1::ListBackupOperationsResponse>{};
    },
    [](google::test::admin::database::v1::ListBackupOperationsResponse const&) {
      return std::vector<google::longrunning::Operation>();
    });
}

namespace {
class GoldenThingAdminConnectionImpl : public GoldenThingAdminConnection {
 public:
  GoldenThingAdminConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<golden_internal::GoldenThingAdminStub> stub,
      Options const& options)
      : background_(std::move(background)), stub_(std::move(stub)),
        retry_policy_prototype_(options.get<GoldenThingAdminRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(options.get<GoldenThingAdminBackoffPolicyOption>()->clone()),
        polling_policy_prototype_(options.get<GoldenThingAdminPollingPolicyOption>()->clone()),
        idempotency_policy_(options.get<GoldenThingAdminConnectionIdempotencyPolicyOption>()->clone()) {}

  ~GoldenThingAdminConnectionImpl() override = default;

  StreamRange<google::test::admin::database::v1::Database> ListDatabases(
      google::test::admin::database::v1::ListDatabasesRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry =
        std::shared_ptr<GoldenThingAdminRetryPolicy const>(retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListDatabases(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<StreamRange<
        google::test::admin::database::v1::Database>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name]
          (google::test::admin::database::v1::ListDatabasesRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::test::admin::database::v1::ListDatabasesRequest const& request) {
                return stub->ListDatabases(context, request);
              },
              r, function_name);
        },
        [](google::test::admin::database::v1::ListDatabasesResponse r) {
          std::vector<google::test::admin::database::v1::Database> result(r.databases().size());
          auto& messages = *r.mutable_databases();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  future<StatusOr<google::test::admin::database::v1::Database>>
  CreateDatabase(
      google::test::admin::database::v1::CreateDatabaseRequest const& request) override {
    auto operation = google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateDatabase(request),
        [this](grpc::ClientContext& context,
               google::test::admin::database::v1::CreateDatabaseRequest const& request) {
          return stub_->CreateDatabase(context, request);
        },
        request, __func__);
    if (!operation) {
      return google::cloud::make_ready_future(
          StatusOr<google::test::admin::database::v1::Database>(operation.status()));
    }

    return AwaitCreateDatabase(*std::move(operation));
}

  StatusOr<google::test::admin::database::v1::Database>
  GetDatabase(
      google::test::admin::database::v1::GetDatabaseRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetDatabase(request),
        [this](grpc::ClientContext& context,
            google::test::admin::database::v1::GetDatabaseRequest const& request) {
          return stub_->GetDatabase(context, request);
        },
        request, __func__);
}

  future<StatusOr<google::test::admin::database::v1::UpdateDatabaseDdlMetadata>>
  UpdateDatabaseDdl(
      google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request) override {
    auto operation = google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UpdateDatabaseDdl(request),
        [this](grpc::ClientContext& context,
               google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request) {
          return stub_->UpdateDatabaseDdl(context, request);
        },
        request, __func__);
    if (!operation) {
      return google::cloud::make_ready_future(
          StatusOr<google::test::admin::database::v1::UpdateDatabaseDdlMetadata>(operation.status()));
    }

    return AwaitUpdateDatabaseDdl(*std::move(operation));
}

  Status
  DropDatabase(
      google::test::admin::database::v1::DropDatabaseRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DropDatabase(request),
        [this](grpc::ClientContext& context,
            google::test::admin::database::v1::DropDatabaseRequest const& request) {
          return stub_->DropDatabase(context, request);
        },
        request, __func__);
}

  StatusOr<google::test::admin::database::v1::GetDatabaseDdlResponse>
  GetDatabaseDdl(
      google::test::admin::database::v1::GetDatabaseDdlRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetDatabaseDdl(request),
        [this](grpc::ClientContext& context,
            google::test::admin::database::v1::GetDatabaseDdlRequest const& request) {
          return stub_->GetDatabaseDdl(context, request);
        },
        request, __func__);
}

  StatusOr<google::iam::v1::Policy>
  SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->SetIamPolicy(request),
        [this](grpc::ClientContext& context,
            google::iam::v1::SetIamPolicyRequest const& request) {
          return stub_->SetIamPolicy(context, request);
        },
        request, __func__);
}

  StatusOr<google::iam::v1::Policy>
  GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetIamPolicy(request),
        [this](grpc::ClientContext& context,
            google::iam::v1::GetIamPolicyRequest const& request) {
          return stub_->GetIamPolicy(context, request);
        },
        request, __func__);
}

  StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->TestIamPermissions(request),
        [this](grpc::ClientContext& context,
            google::iam::v1::TestIamPermissionsRequest const& request) {
          return stub_->TestIamPermissions(context, request);
        },
        request, __func__);
}

  future<StatusOr<google::test::admin::database::v1::Backup>>
  CreateBackup(
      google::test::admin::database::v1::CreateBackupRequest const& request) override {
    auto operation = google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateBackup(request),
        [this](grpc::ClientContext& context,
               google::test::admin::database::v1::CreateBackupRequest const& request) {
          return stub_->CreateBackup(context, request);
        },
        request, __func__);
    if (!operation) {
      return google::cloud::make_ready_future(
          StatusOr<google::test::admin::database::v1::Backup>(operation.status()));
    }

    return AwaitCreateBackup(*std::move(operation));
}

  StatusOr<google::test::admin::database::v1::Backup>
  GetBackup(
      google::test::admin::database::v1::GetBackupRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetBackup(request),
        [this](grpc::ClientContext& context,
            google::test::admin::database::v1::GetBackupRequest const& request) {
          return stub_->GetBackup(context, request);
        },
        request, __func__);
}

  StatusOr<google::test::admin::database::v1::Backup>
  UpdateBackup(
      google::test::admin::database::v1::UpdateBackupRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UpdateBackup(request),
        [this](grpc::ClientContext& context,
            google::test::admin::database::v1::UpdateBackupRequest const& request) {
          return stub_->UpdateBackup(context, request);
        },
        request, __func__);
}

  Status
  DeleteBackup(
      google::test::admin::database::v1::DeleteBackupRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteBackup(request),
        [this](grpc::ClientContext& context,
            google::test::admin::database::v1::DeleteBackupRequest const& request) {
          return stub_->DeleteBackup(context, request);
        },
        request, __func__);
}

  StreamRange<google::test::admin::database::v1::Backup> ListBackups(
      google::test::admin::database::v1::ListBackupsRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry =
        std::shared_ptr<GoldenThingAdminRetryPolicy const>(retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListBackups(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<StreamRange<
        google::test::admin::database::v1::Backup>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name]
          (google::test::admin::database::v1::ListBackupsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::test::admin::database::v1::ListBackupsRequest const& request) {
                return stub->ListBackups(context, request);
              },
              r, function_name);
        },
        [](google::test::admin::database::v1::ListBackupsResponse r) {
          std::vector<google::test::admin::database::v1::Backup> result(r.backups().size());
          auto& messages = *r.mutable_backups();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  future<StatusOr<google::test::admin::database::v1::Database>>
  RestoreDatabase(
      google::test::admin::database::v1::RestoreDatabaseRequest const& request) override {
    auto operation = google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->RestoreDatabase(request),
        [this](grpc::ClientContext& context,
               google::test::admin::database::v1::RestoreDatabaseRequest const& request) {
          return stub_->RestoreDatabase(context, request);
        },
        request, __func__);
    if (!operation) {
      return google::cloud::make_ready_future(
          StatusOr<google::test::admin::database::v1::Database>(operation.status()));
    }

    return AwaitRestoreDatabase(*std::move(operation));
}

  StreamRange<google::longrunning::Operation> ListDatabaseOperations(
      google::test::admin::database::v1::ListDatabaseOperationsRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry =
        std::shared_ptr<GoldenThingAdminRetryPolicy const>(retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListDatabaseOperations(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<StreamRange<
        google::longrunning::Operation>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name]
          (google::test::admin::database::v1::ListDatabaseOperationsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::test::admin::database::v1::ListDatabaseOperationsRequest const& request) {
                return stub->ListDatabaseOperations(context, request);
              },
              r, function_name);
        },
        [](google::test::admin::database::v1::ListDatabaseOperationsResponse r) {
          std::vector<google::longrunning::Operation> result(r.operations().size());
          auto& messages = *r.mutable_operations();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StreamRange<google::longrunning::Operation> ListBackupOperations(
      google::test::admin::database::v1::ListBackupOperationsRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry =
        std::shared_ptr<GoldenThingAdminRetryPolicy const>(retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListBackupOperations(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<StreamRange<
        google::longrunning::Operation>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name]
          (google::test::admin::database::v1::ListBackupOperationsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::test::admin::database::v1::ListBackupOperationsRequest const& request) {
                return stub->ListBackupOperations(context, request);
              },
              r, function_name);
        },
        [](google::test::admin::database::v1::ListBackupOperationsResponse r) {
          std::vector<google::longrunning::Operation> result(r.operations().size());
          auto& messages = *r.mutable_operations();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

 private:
  template <typename MethodResponse, template<typename> class Extractor,
    typename Stub>
  future<StatusOr<MethodResponse>>
  AwaitLongrunningOperation(google::longrunning::Operation operation) {  // NOLINT
    using ResponseExtractor = Extractor<MethodResponse>;
    std::weak_ptr<Stub> cancel_stub(stub_);
    promise<typename ResponseExtractor::ReturnType> pr(
        [cancel_stub, operation]() {
          grpc::ClientContext context;
          context.set_deadline(std::chrono::system_clock::now() +
            std::chrono::seconds(60));
          google::longrunning::CancelOperationRequest request;
          request.set_name(operation.name());
          if (auto ptr = cancel_stub.lock()) {
            ptr->CancelOperation(context, request);
          }
    });
    auto f = pr.get_future();
    std::thread t(
        [](std::shared_ptr<Stub> stub,
           google::longrunning::Operation operation,
           std::unique_ptr<PollingPolicy> polling_policy,
           google::cloud::promise<typename ResponseExtractor::ReturnType> promise,
           char const* location) mutable {
          auto result = google::cloud::internal::PollingLoop<ResponseExtractor>(
              std::move(polling_policy),
              [stub](grpc::ClientContext& context,
                     google::longrunning::GetOperationRequest const& request) {
                return stub->GetOperation(context, request);
              },
              std::move(operation), location);
          stub.reset();
          promise.set_value(std::move(result));
        },
        stub_, std::move(operation), polling_policy_prototype_->clone(),
        std::move(pr), __func__);
    t.detach();
    return f;
  }

  future<StatusOr<google::test::admin::database::v1::Database>>
  AwaitCreateDatabase(
      google::longrunning::Operation operation) {
    return AwaitLongrunningOperation<
        google::test::admin::database::v1::Database,
        google::cloud::internal::PollingLoopResponseExtractor,
        golden_internal::GoldenThingAdminStub>(std::move(operation));
  }

  future<StatusOr<google::test::admin::database::v1::UpdateDatabaseDdlMetadata>>
  AwaitUpdateDatabaseDdl(
      google::longrunning::Operation operation) {
    return AwaitLongrunningOperation<
        google::test::admin::database::v1::UpdateDatabaseDdlMetadata,
        google::cloud::internal::PollingLoopMetadataExtractor,
        golden_internal::GoldenThingAdminStub>(std::move(operation));
  }

  future<StatusOr<google::test::admin::database::v1::Backup>>
  AwaitCreateBackup(
      google::longrunning::Operation operation) {
    return AwaitLongrunningOperation<
        google::test::admin::database::v1::Backup,
        google::cloud::internal::PollingLoopResponseExtractor,
        golden_internal::GoldenThingAdminStub>(std::move(operation));
  }

  future<StatusOr<google::test::admin::database::v1::Database>>
  AwaitRestoreDatabase(
      google::longrunning::Operation operation) {
    return AwaitLongrunningOperation<
        google::test::admin::database::v1::Database,
        google::cloud::internal::PollingLoopResponseExtractor,
        golden_internal::GoldenThingAdminStub>(std::move(operation));
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<golden_internal::GoldenThingAdminStub> stub_;
  std::unique_ptr<GoldenThingAdminRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;
  std::unique_ptr<GoldenThingAdminConnectionIdempotencyPolicy> idempotency_policy_;
};
}  // namespace

std::shared_ptr<GoldenThingAdminConnection> MakeGoldenThingAdminConnection(
    Options options) {
  options = golden_internal::GoldenThingAdminDefaultOptions(
      std::move(options));
  auto background = options.get<GrpcBackgroundThreadsFactoryOption>()();
  return std::make_shared<GoldenThingAdminConnectionImpl>(
      std::move(background),
      golden_internal::CreateDefaultGoldenThingAdminStub(options),
      options);
}

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace golden
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace golden_internal {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

std::shared_ptr<golden::GoldenThingAdminConnection>
MakeGoldenThingAdminConnection(
    std::shared_ptr<GoldenThingAdminStub> stub, Options options) {
  options = GoldenThingAdminDefaultOptions(std::move(options));
  return std::make_shared<golden::GoldenThingAdminConnectionImpl>(
      options.get<GrpcBackgroundThreadsFactoryOption>()(),
      std::move(stub), std::move(options));
}

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace golden_internal
}  // namespace cloud
}  // namespace google

