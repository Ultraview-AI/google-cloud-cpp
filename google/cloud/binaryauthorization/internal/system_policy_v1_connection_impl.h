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
// source: google/cloud/binaryauthorization/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_INTERNAL_SYSTEM_POLICY_V1_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_INTERNAL_SYSTEM_POLICY_V1_CONNECTION_IMPL_H

#include "google/cloud/binaryauthorization/internal/system_policy_v1_retry_traits.h"
#include "google/cloud/binaryauthorization/internal/system_policy_v1_stub.h"
#include "google/cloud/binaryauthorization/system_policy_v1_connection.h"
#include "google/cloud/binaryauthorization/system_policy_v1_connection_idempotency_policy.h"
#include "google/cloud/binaryauthorization/system_policy_v1_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace binaryauthorization_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SystemPolicyV1ConnectionImpl
    : public binaryauthorization::SystemPolicyV1Connection {
 public:
  ~SystemPolicyV1ConnectionImpl() override = default;

  SystemPolicyV1ConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<binaryauthorization_internal::SystemPolicyV1Stub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::binaryauthorization::v1::Policy> GetSystemPolicy(
      google::cloud::binaryauthorization::v1::GetSystemPolicyRequest const&
          request) override;

 private:
  std::unique_ptr<binaryauthorization::SystemPolicyV1RetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<binaryauthorization::SystemPolicyV1RetryPolicyOption>()) {
      return options
          .get<binaryauthorization::SystemPolicyV1RetryPolicyOption>()
          ->clone();
    }
    return options_.get<binaryauthorization::SystemPolicyV1RetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<binaryauthorization::SystemPolicyV1BackoffPolicyOption>()) {
      return options
          .get<binaryauthorization::SystemPolicyV1BackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<binaryauthorization::SystemPolicyV1BackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<
      binaryauthorization::SystemPolicyV1ConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<binaryauthorization::
                        SystemPolicyV1ConnectionIdempotencyPolicyOption>()) {
      return options
          .get<binaryauthorization::
                   SystemPolicyV1ConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<binaryauthorization::
                 SystemPolicyV1ConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<binaryauthorization_internal::SystemPolicyV1Stub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_INTERNAL_SYSTEM_POLICY_V1_CONNECTION_IMPL_H