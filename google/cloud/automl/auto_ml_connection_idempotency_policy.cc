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
// source: google/cloud/automl/v1/service.proto

#include "google/cloud/automl/auto_ml_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace automl {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

AutoMlConnectionIdempotencyPolicy::~AutoMlConnectionIdempotencyPolicy() =
    default;

namespace {
class DefaultAutoMlConnectionIdempotencyPolicy
    : public AutoMlConnectionIdempotencyPolicy {
 public:
  ~DefaultAutoMlConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<AutoMlConnectionIdempotencyPolicy> clone() const override {
    return absl::make_unique<DefaultAutoMlConnectionIdempotencyPolicy>(*this);
  }

  Idempotency CreateDataset(
      google::cloud::automl::v1::CreateDatasetRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetDataset(
      google::cloud::automl::v1::GetDatasetRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListDatasets(
      google::cloud::automl::v1::ListDatasetsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency UpdateDataset(
      google::cloud::automl::v1::UpdateDatasetRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteDataset(
      google::cloud::automl::v1::DeleteDatasetRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ImportData(
      google::cloud::automl::v1::ImportDataRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ExportData(
      google::cloud::automl::v1::ExportDataRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetAnnotationSpec(
      google::cloud::automl::v1::GetAnnotationSpecRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateModel(
      google::cloud::automl::v1::CreateModelRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetModel(
      google::cloud::automl::v1::GetModelRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListModels(
      google::cloud::automl::v1::ListModelsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency DeleteModel(
      google::cloud::automl::v1::DeleteModelRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateModel(
      google::cloud::automl::v1::UpdateModelRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeployModel(
      google::cloud::automl::v1::DeployModelRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UndeployModel(
      google::cloud::automl::v1::UndeployModelRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ExportModel(
      google::cloud::automl::v1::ExportModelRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetModelEvaluation(
      google::cloud::automl::v1::GetModelEvaluationRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListModelEvaluations(
      google::cloud::automl::v1::ListModelEvaluationsRequest) override {
    return Idempotency::kIdempotent;
  }
};
}  // namespace

std::unique_ptr<AutoMlConnectionIdempotencyPolicy>
MakeDefaultAutoMlConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultAutoMlConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl
}  // namespace cloud
}  // namespace google