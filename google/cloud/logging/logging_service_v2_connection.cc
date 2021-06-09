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
// source: google/logging/v2/logging.proto

#include "google/cloud/logging/logging_service_v2_connection.h"
#include "google/cloud/logging/internal/logging_service_v2_option_defaults.h"
#include "google/cloud/logging/internal/logging_service_v2_stub_factory.h"
#include "google/cloud/logging/logging_service_v2_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace logging {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

LoggingServiceV2Connection::~LoggingServiceV2Connection() = default;

Status LoggingServiceV2Connection::DeleteLog(
    google::logging::v2::DeleteLogRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::logging::v2::WriteLogEntriesResponse>
LoggingServiceV2Connection::WriteLogEntries(
    google::logging::v2::WriteLogEntriesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::logging::v2::LogEntry>
LoggingServiceV2Connection::ListLogEntries(
    google::logging::v2::ListLogEntriesRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::logging::v2::LogEntry>>(
      std::move(request),
      [](google::logging::v2::ListLogEntriesRequest const&) {
        return StatusOr<google::logging::v2::ListLogEntriesResponse>{};
      },
      [](google::logging::v2::ListLogEntriesResponse const&) {
        return std::vector<google::logging::v2::LogEntry>();
      });
}

StreamRange<google::api::MonitoredResourceDescriptor>
LoggingServiceV2Connection::ListMonitoredResourceDescriptors(
    google::logging::v2::ListMonitoredResourceDescriptorsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::api::MonitoredResourceDescriptor>>(
      std::move(request),
      [](google::logging::v2::ListMonitoredResourceDescriptorsRequest const&) {
        return StatusOr<
            google::logging::v2::ListMonitoredResourceDescriptorsResponse>{};
      },
      [](google::logging::v2::ListMonitoredResourceDescriptorsResponse const&) {
        return std::vector<google::api::MonitoredResourceDescriptor>();
      });
}

StreamRange<std::string> LoggingServiceV2Connection::ListLogs(
    google::logging::v2::ListLogsRequest request) {
  return google::cloud::internal::MakePaginationRange<StreamRange<std::string>>(
      std::move(request),
      [](google::logging::v2::ListLogsRequest const&) {
        return StatusOr<google::logging::v2::ListLogsResponse>{};
      },
      [](google::logging::v2::ListLogsResponse const&) {
        return std::vector<std::string>();
      });
}

namespace {
class LoggingServiceV2ConnectionImpl : public LoggingServiceV2Connection {
 public:
  LoggingServiceV2ConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<logging_internal::LoggingServiceV2Stub> stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<LoggingServiceV2RetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<LoggingServiceV2BackoffPolicyOption>()->clone()),
        idempotency_policy_(
            options.get<LoggingServiceV2ConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~LoggingServiceV2ConnectionImpl() override = default;

  Status DeleteLog(
      google::logging::v2::DeleteLogRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteLog(request),
        [this](grpc::ClientContext& context,
               google::logging::v2::DeleteLogRequest const& request) {
          return stub_->DeleteLog(context, request);
        },
        request, __func__);
  }

  StatusOr<google::logging::v2::WriteLogEntriesResponse> WriteLogEntries(
      google::logging::v2::WriteLogEntriesRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->WriteLogEntries(request),
        [this](grpc::ClientContext& context,
               google::logging::v2::WriteLogEntriesRequest const& request) {
          return stub_->WriteLogEntries(context, request);
        },
        request, __func__);
  }

  StreamRange<google::logging::v2::LogEntry> ListLogEntries(
      google::logging::v2::ListLogEntriesRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<LoggingServiceV2RetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListLogEntries(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::logging::v2::LogEntry>>(
        std::move(request),
        [stub, retry, backoff, idempotency,
         function_name](google::logging::v2::ListLogEntriesRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](
                  grpc::ClientContext& context,
                  google::logging::v2::ListLogEntriesRequest const& request) {
                return stub->ListLogEntries(context, request);
              },
              r, function_name);
        },
        [](google::logging::v2::ListLogEntriesResponse r) {
          std::vector<google::logging::v2::LogEntry> result(r.entries().size());
          auto& messages = *r.mutable_entries();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StreamRange<google::api::MonitoredResourceDescriptor>
  ListMonitoredResourceDescriptors(
      google::logging::v2::ListMonitoredResourceDescriptorsRequest request)
      override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<LoggingServiceV2RetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency =
        idempotency_policy_->ListMonitoredResourceDescriptors(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::api::MonitoredResourceDescriptor>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::logging::v2::ListMonitoredResourceDescriptorsRequest const&
                r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](
                  grpc::ClientContext& context,
                  google::logging::v2::
                      ListMonitoredResourceDescriptorsRequest const& request) {
                return stub->ListMonitoredResourceDescriptors(context, request);
              },
              r, function_name);
        },
        [](google::logging::v2::ListMonitoredResourceDescriptorsResponse r) {
          std::vector<google::api::MonitoredResourceDescriptor> result(
              r.resource_descriptors().size());
          auto& messages = *r.mutable_resource_descriptors();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StreamRange<std::string> ListLogs(
      google::logging::v2::ListLogsRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<LoggingServiceV2RetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListLogs(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<std::string>>(
        std::move(request),
        [stub, retry, backoff, idempotency,
         function_name](google::logging::v2::ListLogsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::logging::v2::ListLogsRequest const& request) {
                return stub->ListLogs(context, request);
              },
              r, function_name);
        },
        [](google::logging::v2::ListLogsResponse r) {
          std::vector<std::string> result(r.log_names().size());
          auto& messages = *r.mutable_log_names();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<logging_internal::LoggingServiceV2Stub> stub_;
  std::unique_ptr<LoggingServiceV2RetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<LoggingServiceV2ConnectionIdempotencyPolicy>
      idempotency_policy_;
};
}  // namespace

std::shared_ptr<LoggingServiceV2Connection> MakeLoggingServiceV2Connection(
    Options options) {
  options =
      logging_internal::LoggingServiceV2DefaultOptions(std::move(options));
  auto background = options.get<GrpcBackgroundThreadsFactoryOption>()();
  return std::make_shared<LoggingServiceV2ConnectionImpl>(
      std::move(background),
      logging_internal::CreateDefaultLoggingServiceV2Stub(options), options);
}

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace logging
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace logging_internal {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

std::shared_ptr<logging::LoggingServiceV2Connection>
MakeLoggingServiceV2Connection(std::shared_ptr<LoggingServiceV2Stub> stub,
                               Options options) {
  options = LoggingServiceV2DefaultOptions(std::move(options));
  return std::make_shared<logging::LoggingServiceV2ConnectionImpl>(
      options.get<GrpcBackgroundThreadsFactoryOption>()(), std::move(stub),
      std::move(options));
}

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace logging_internal
}  // namespace cloud
}  // namespace google
