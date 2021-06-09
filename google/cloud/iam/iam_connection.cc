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
// source: google/iam/admin/v1/iam.proto

#include "google/cloud/iam/iam_connection.h"
#include "google/cloud/iam/iam_options.h"
#include "google/cloud/iam/internal/iam_option_defaults.h"
#include "google/cloud/iam/internal/iam_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace iam {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

IAMConnection::~IAMConnection() = default;

StreamRange<google::iam::admin::v1::ServiceAccount>
IAMConnection::ListServiceAccounts(
    google::iam::admin::v1::ListServiceAccountsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::iam::admin::v1::ServiceAccount>>(
      std::move(request),
      [](google::iam::admin::v1::ListServiceAccountsRequest const&) {
        return StatusOr<google::iam::admin::v1::ListServiceAccountsResponse>{};
      },
      [](google::iam::admin::v1::ListServiceAccountsResponse const&) {
        return std::vector<google::iam::admin::v1::ServiceAccount>();
      });
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMConnection::GetServiceAccount(
    google::iam::admin::v1::GetServiceAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMConnection::CreateServiceAccount(
    google::iam::admin::v1::CreateServiceAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMConnection::PatchServiceAccount(
    google::iam::admin::v1::PatchServiceAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status IAMConnection::DeleteServiceAccount(
    google::iam::admin::v1::DeleteServiceAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::UndeleteServiceAccountResponse>
IAMConnection::UndeleteServiceAccount(
    google::iam::admin::v1::UndeleteServiceAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status IAMConnection::EnableServiceAccount(
    google::iam::admin::v1::EnableServiceAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status IAMConnection::DisableServiceAccount(
    google::iam::admin::v1::DisableServiceAccountRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::ListServiceAccountKeysResponse>
IAMConnection::ListServiceAccountKeys(
    google::iam::admin::v1::ListServiceAccountKeysRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMConnection::GetServiceAccountKey(
    google::iam::admin::v1::GetServiceAccountKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMConnection::CreateServiceAccountKey(
    google::iam::admin::v1::CreateServiceAccountKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMConnection::UploadServiceAccountKey(
    google::iam::admin::v1::UploadServiceAccountKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status IAMConnection::DeleteServiceAccountKey(
    google::iam::admin::v1::DeleteServiceAccountKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> IAMConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> IAMConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IAMConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::iam::admin::v1::Role> IAMConnection::QueryGrantableRoles(
    google::iam::admin::v1::QueryGrantableRolesRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::iam::admin::v1::Role>>(
      std::move(request),
      [](google::iam::admin::v1::QueryGrantableRolesRequest const&) {
        return StatusOr<google::iam::admin::v1::QueryGrantableRolesResponse>{};
      },
      [](google::iam::admin::v1::QueryGrantableRolesResponse const&) {
        return std::vector<google::iam::admin::v1::Role>();
      });
}

StreamRange<google::iam::admin::v1::Role> IAMConnection::ListRoles(
    google::iam::admin::v1::ListRolesRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::iam::admin::v1::Role>>(
      std::move(request),
      [](google::iam::admin::v1::ListRolesRequest const&) {
        return StatusOr<google::iam::admin::v1::ListRolesResponse>{};
      },
      [](google::iam::admin::v1::ListRolesResponse const&) {
        return std::vector<google::iam::admin::v1::Role>();
      });
}

StatusOr<google::iam::admin::v1::Role> IAMConnection::GetRole(
    google::iam::admin::v1::GetRoleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::Role> IAMConnection::CreateRole(
    google::iam::admin::v1::CreateRoleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::Role> IAMConnection::UpdateRole(
    google::iam::admin::v1::UpdateRoleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::Role> IAMConnection::DeleteRole(
    google::iam::admin::v1::DeleteRoleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::Role> IAMConnection::UndeleteRole(
    google::iam::admin::v1::UndeleteRoleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::iam::admin::v1::Permission>
IAMConnection::QueryTestablePermissions(
    google::iam::admin::v1::QueryTestablePermissionsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::iam::admin::v1::Permission>>(
      std::move(request),
      [](google::iam::admin::v1::QueryTestablePermissionsRequest const&) {
        return StatusOr<
            google::iam::admin::v1::QueryTestablePermissionsResponse>{};
      },
      [](google::iam::admin::v1::QueryTestablePermissionsResponse const&) {
        return std::vector<google::iam::admin::v1::Permission>();
      });
}

StatusOr<google::iam::admin::v1::QueryAuditableServicesResponse>
IAMConnection::QueryAuditableServices(
    google::iam::admin::v1::QueryAuditableServicesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::admin::v1::LintPolicyResponse> IAMConnection::LintPolicy(
    google::iam::admin::v1::LintPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

namespace {
class IAMConnectionImpl : public IAMConnection {
 public:
  IAMConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<iam_internal::IAMStub> stub, Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(options.get<IAMRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<IAMBackoffPolicyOption>()->clone()),
        idempotency_policy_(
            options.get<IAMConnectionIdempotencyPolicyOption>()->clone()) {}

  ~IAMConnectionImpl() override = default;

  StreamRange<google::iam::admin::v1::ServiceAccount> ListServiceAccounts(
      google::iam::admin::v1::ListServiceAccountsRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry =
        std::shared_ptr<IAMRetryPolicy const>(retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListServiceAccounts(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::iam::admin::v1::ServiceAccount>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::iam::admin::v1::ListServiceAccountsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::iam::admin::v1::ListServiceAccountsRequest const&
                         request) {
                return stub->ListServiceAccounts(context, request);
              },
              r, function_name);
        },
        [](google::iam::admin::v1::ListServiceAccountsResponse r) {
          std::vector<google::iam::admin::v1::ServiceAccount> result(
              r.accounts().size());
          auto& messages = *r.mutable_accounts();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::iam::admin::v1::ServiceAccount> GetServiceAccount(
      google::iam::admin::v1::GetServiceAccountRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetServiceAccount(request),
        [this](
            grpc::ClientContext& context,
            google::iam::admin::v1::GetServiceAccountRequest const& request) {
          return stub_->GetServiceAccount(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::admin::v1::ServiceAccount> CreateServiceAccount(
      google::iam::admin::v1::CreateServiceAccountRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateServiceAccount(request),
        [this](grpc::ClientContext& context,
               google::iam::admin::v1::CreateServiceAccountRequest const&
                   request) {
          return stub_->CreateServiceAccount(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::admin::v1::ServiceAccount> PatchServiceAccount(
      google::iam::admin::v1::PatchServiceAccountRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->PatchServiceAccount(request),
        [this](
            grpc::ClientContext& context,
            google::iam::admin::v1::PatchServiceAccountRequest const& request) {
          return stub_->PatchServiceAccount(context, request);
        },
        request, __func__);
  }

  Status DeleteServiceAccount(
      google::iam::admin::v1::DeleteServiceAccountRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteServiceAccount(request),
        [this](grpc::ClientContext& context,
               google::iam::admin::v1::DeleteServiceAccountRequest const&
                   request) {
          return stub_->DeleteServiceAccount(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::admin::v1::UndeleteServiceAccountResponse>
  UndeleteServiceAccount(
      google::iam::admin::v1::UndeleteServiceAccountRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UndeleteServiceAccount(request),
        [this](grpc::ClientContext& context,
               google::iam::admin::v1::UndeleteServiceAccountRequest const&
                   request) {
          return stub_->UndeleteServiceAccount(context, request);
        },
        request, __func__);
  }

  Status EnableServiceAccount(
      google::iam::admin::v1::EnableServiceAccountRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->EnableServiceAccount(request),
        [this](grpc::ClientContext& context,
               google::iam::admin::v1::EnableServiceAccountRequest const&
                   request) {
          return stub_->EnableServiceAccount(context, request);
        },
        request, __func__);
  }

  Status DisableServiceAccount(
      google::iam::admin::v1::DisableServiceAccountRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DisableServiceAccount(request),
        [this](grpc::ClientContext& context,
               google::iam::admin::v1::DisableServiceAccountRequest const&
                   request) {
          return stub_->DisableServiceAccount(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::admin::v1::ListServiceAccountKeysResponse>
  ListServiceAccountKeys(
      google::iam::admin::v1::ListServiceAccountKeysRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->ListServiceAccountKeys(request),
        [this](grpc::ClientContext& context,
               google::iam::admin::v1::ListServiceAccountKeysRequest const&
                   request) {
          return stub_->ListServiceAccountKeys(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::admin::v1::ServiceAccountKey> GetServiceAccountKey(
      google::iam::admin::v1::GetServiceAccountKeyRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetServiceAccountKey(request),
        [this](grpc::ClientContext& context,
               google::iam::admin::v1::GetServiceAccountKeyRequest const&
                   request) {
          return stub_->GetServiceAccountKey(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::admin::v1::ServiceAccountKey> CreateServiceAccountKey(
      google::iam::admin::v1::CreateServiceAccountKeyRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateServiceAccountKey(request),
        [this](grpc::ClientContext& context,
               google::iam::admin::v1::CreateServiceAccountKeyRequest const&
                   request) {
          return stub_->CreateServiceAccountKey(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::admin::v1::ServiceAccountKey> UploadServiceAccountKey(
      google::iam::admin::v1::UploadServiceAccountKeyRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UploadServiceAccountKey(request),
        [this](grpc::ClientContext& context,
               google::iam::admin::v1::UploadServiceAccountKeyRequest const&
                   request) {
          return stub_->UploadServiceAccountKey(context, request);
        },
        request, __func__);
  }

  Status DeleteServiceAccountKey(
      google::iam::admin::v1::DeleteServiceAccountKeyRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteServiceAccountKey(request),
        [this](grpc::ClientContext& context,
               google::iam::admin::v1::DeleteServiceAccountKeyRequest const&
                   request) {
          return stub_->DeleteServiceAccountKey(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
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

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
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

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
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

  StreamRange<google::iam::admin::v1::Role> QueryGrantableRoles(
      google::iam::admin::v1::QueryGrantableRolesRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry =
        std::shared_ptr<IAMRetryPolicy const>(retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->QueryGrantableRoles(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::iam::admin::v1::Role>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::iam::admin::v1::QueryGrantableRolesRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::iam::admin::v1::QueryGrantableRolesRequest const&
                         request) {
                return stub->QueryGrantableRoles(context, request);
              },
              r, function_name);
        },
        [](google::iam::admin::v1::QueryGrantableRolesResponse r) {
          std::vector<google::iam::admin::v1::Role> result(r.roles().size());
          auto& messages = *r.mutable_roles();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StreamRange<google::iam::admin::v1::Role> ListRoles(
      google::iam::admin::v1::ListRolesRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry =
        std::shared_ptr<IAMRetryPolicy const>(retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListRoles(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::iam::admin::v1::Role>>(
        std::move(request),
        [stub, retry, backoff, idempotency,
         function_name](google::iam::admin::v1::ListRolesRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::iam::admin::v1::ListRolesRequest const& request) {
                return stub->ListRoles(context, request);
              },
              r, function_name);
        },
        [](google::iam::admin::v1::ListRolesResponse r) {
          std::vector<google::iam::admin::v1::Role> result(r.roles().size());
          auto& messages = *r.mutable_roles();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::iam::admin::v1::Role> GetRole(
      google::iam::admin::v1::GetRoleRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetRole(request),
        [this](grpc::ClientContext& context,
               google::iam::admin::v1::GetRoleRequest const& request) {
          return stub_->GetRole(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::admin::v1::Role> CreateRole(
      google::iam::admin::v1::CreateRoleRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateRole(request),
        [this](grpc::ClientContext& context,
               google::iam::admin::v1::CreateRoleRequest const& request) {
          return stub_->CreateRole(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::admin::v1::Role> UpdateRole(
      google::iam::admin::v1::UpdateRoleRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UpdateRole(request),
        [this](grpc::ClientContext& context,
               google::iam::admin::v1::UpdateRoleRequest const& request) {
          return stub_->UpdateRole(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::admin::v1::Role> DeleteRole(
      google::iam::admin::v1::DeleteRoleRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteRole(request),
        [this](grpc::ClientContext& context,
               google::iam::admin::v1::DeleteRoleRequest const& request) {
          return stub_->DeleteRole(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::admin::v1::Role> UndeleteRole(
      google::iam::admin::v1::UndeleteRoleRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UndeleteRole(request),
        [this](grpc::ClientContext& context,
               google::iam::admin::v1::UndeleteRoleRequest const& request) {
          return stub_->UndeleteRole(context, request);
        },
        request, __func__);
  }

  StreamRange<google::iam::admin::v1::Permission> QueryTestablePermissions(
      google::iam::admin::v1::QueryTestablePermissionsRequest request)
      override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry =
        std::shared_ptr<IAMRetryPolicy const>(retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->QueryTestablePermissions(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::iam::admin::v1::Permission>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::iam::admin::v1::QueryTestablePermissionsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](
                  grpc::ClientContext& context,
                  google::iam::admin::v1::QueryTestablePermissionsRequest const&
                      request) {
                return stub->QueryTestablePermissions(context, request);
              },
              r, function_name);
        },
        [](google::iam::admin::v1::QueryTestablePermissionsResponse r) {
          std::vector<google::iam::admin::v1::Permission> result(
              r.permissions().size());
          auto& messages = *r.mutable_permissions();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::iam::admin::v1::QueryAuditableServicesResponse>
  QueryAuditableServices(
      google::iam::admin::v1::QueryAuditableServicesRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->QueryAuditableServices(request),
        [this](grpc::ClientContext& context,
               google::iam::admin::v1::QueryAuditableServicesRequest const&
                   request) {
          return stub_->QueryAuditableServices(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::admin::v1::LintPolicyResponse> LintPolicy(
      google::iam::admin::v1::LintPolicyRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->LintPolicy(request),
        [this](grpc::ClientContext& context,
               google::iam::admin::v1::LintPolicyRequest const& request) {
          return stub_->LintPolicy(context, request);
        },
        request, __func__);
  }

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<iam_internal::IAMStub> stub_;
  std::unique_ptr<IAMRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<IAMConnectionIdempotencyPolicy> idempotency_policy_;
};
}  // namespace

std::shared_ptr<IAMConnection> MakeIAMConnection(Options options) {
  options = iam_internal::IAMDefaultOptions(std::move(options));
  auto background = options.get<GrpcBackgroundThreadsFactoryOption>()();
  return std::make_shared<IAMConnectionImpl>(
      std::move(background), iam_internal::CreateDefaultIAMStub(options),
      options);
}

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace iam
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace iam_internal {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

std::shared_ptr<iam::IAMConnection> MakeIAMConnection(
    std::shared_ptr<IAMStub> stub, Options options) {
  options = IAMDefaultOptions(std::move(options));
  return std::make_shared<iam::IAMConnectionImpl>(
      options.get<GrpcBackgroundThreadsFactoryOption>()(), std::move(stub),
      std::move(options));
}

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace iam_internal
}  // namespace cloud
}  // namespace google
