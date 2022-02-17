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
// source: google/cloud/datacatalog/v1/datacatalog.proto

#include "google/cloud/datacatalog/internal/data_catalog_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/datacatalog/v1/datacatalog.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataCatalogStub::~DataCatalogStub() = default;

StatusOr<google::cloud::datacatalog::v1::SearchCatalogResponse>
DefaultDataCatalogStub::SearchCatalog(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::SearchCatalogRequest const& request) {
  google::cloud::datacatalog::v1::SearchCatalogResponse response;
  auto status = grpc_stub_->SearchCatalog(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DefaultDataCatalogStub::CreateEntryGroup(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::CreateEntryGroupRequest const& request) {
  google::cloud::datacatalog::v1::EntryGroup response;
  auto status =
      grpc_stub_->CreateEntryGroup(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DefaultDataCatalogStub::GetEntryGroup(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::GetEntryGroupRequest const& request) {
  google::cloud::datacatalog::v1::EntryGroup response;
  auto status = grpc_stub_->GetEntryGroup(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DefaultDataCatalogStub::UpdateEntryGroup(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::UpdateEntryGroupRequest const& request) {
  google::cloud::datacatalog::v1::EntryGroup response;
  auto status =
      grpc_stub_->UpdateEntryGroup(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultDataCatalogStub::DeleteEntryGroup(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::DeleteEntryGroupRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteEntryGroup(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::datacatalog::v1::ListEntryGroupsResponse>
DefaultDataCatalogStub::ListEntryGroups(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::ListEntryGroupsRequest const& request) {
  google::cloud::datacatalog::v1::ListEntryGroupsResponse response;
  auto status =
      grpc_stub_->ListEntryGroups(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DefaultDataCatalogStub::CreateEntry(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::CreateEntryRequest const& request) {
  google::cloud::datacatalog::v1::Entry response;
  auto status = grpc_stub_->CreateEntry(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DefaultDataCatalogStub::UpdateEntry(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::UpdateEntryRequest const& request) {
  google::cloud::datacatalog::v1::Entry response;
  auto status = grpc_stub_->UpdateEntry(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultDataCatalogStub::DeleteEntry(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::DeleteEntryRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteEntry(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DefaultDataCatalogStub::GetEntry(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::GetEntryRequest const& request) {
  google::cloud::datacatalog::v1::Entry response;
  auto status = grpc_stub_->GetEntry(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DefaultDataCatalogStub::LookupEntry(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::LookupEntryRequest const& request) {
  google::cloud::datacatalog::v1::Entry response;
  auto status = grpc_stub_->LookupEntry(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::ListEntriesResponse>
DefaultDataCatalogStub::ListEntries(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::ListEntriesRequest const& request) {
  google::cloud::datacatalog::v1::ListEntriesResponse response;
  auto status = grpc_stub_->ListEntries(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DefaultDataCatalogStub::CreateTagTemplate(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::CreateTagTemplateRequest const& request) {
  google::cloud::datacatalog::v1::TagTemplate response;
  auto status =
      grpc_stub_->CreateTagTemplate(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DefaultDataCatalogStub::GetTagTemplate(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::GetTagTemplateRequest const& request) {
  google::cloud::datacatalog::v1::TagTemplate response;
  auto status = grpc_stub_->GetTagTemplate(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DefaultDataCatalogStub::UpdateTagTemplate(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::UpdateTagTemplateRequest const& request) {
  google::cloud::datacatalog::v1::TagTemplate response;
  auto status =
      grpc_stub_->UpdateTagTemplate(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultDataCatalogStub::DeleteTagTemplate(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::DeleteTagTemplateRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteTagTemplate(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DefaultDataCatalogStub::CreateTagTemplateField(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::CreateTagTemplateFieldRequest const&
        request) {
  google::cloud::datacatalog::v1::TagTemplateField response;
  auto status =
      grpc_stub_->CreateTagTemplateField(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DefaultDataCatalogStub::UpdateTagTemplateField(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::UpdateTagTemplateFieldRequest const&
        request) {
  google::cloud::datacatalog::v1::TagTemplateField response;
  auto status =
      grpc_stub_->UpdateTagTemplateField(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DefaultDataCatalogStub::RenameTagTemplateField(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::RenameTagTemplateFieldRequest const&
        request) {
  google::cloud::datacatalog::v1::TagTemplateField response;
  auto status =
      grpc_stub_->RenameTagTemplateField(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DefaultDataCatalogStub::RenameTagTemplateFieldEnumValue(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::
        RenameTagTemplateFieldEnumValueRequest const& request) {
  google::cloud::datacatalog::v1::TagTemplateField response;
  auto status = grpc_stub_->RenameTagTemplateFieldEnumValue(&client_context,
                                                            request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultDataCatalogStub::DeleteTagTemplateField(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::DeleteTagTemplateFieldRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteTagTemplateField(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::datacatalog::v1::Tag> DefaultDataCatalogStub::CreateTag(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::CreateTagRequest const& request) {
  google::cloud::datacatalog::v1::Tag response;
  auto status = grpc_stub_->CreateTag(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::Tag> DefaultDataCatalogStub::UpdateTag(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::UpdateTagRequest const& request) {
  google::cloud::datacatalog::v1::Tag response;
  auto status = grpc_stub_->UpdateTag(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultDataCatalogStub::DeleteTag(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::DeleteTagRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteTag(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::datacatalog::v1::ListTagsResponse>
DefaultDataCatalogStub::ListTags(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::v1::ListTagsRequest const& request) {
  google::cloud::datacatalog::v1::ListTagsResponse response;
  auto status = grpc_stub_->ListTags(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultDataCatalogStub::SetIamPolicy(
    grpc::ClientContext& client_context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->SetIamPolicy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultDataCatalogStub::GetIamPolicy(
    grpc::ClientContext& client_context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->GetIamPolicy(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultDataCatalogStub::TestIamPermissions(
    grpc::ClientContext& client_context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      grpc_stub_->TestIamPermissions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_internal
}  // namespace cloud
}  // namespace google