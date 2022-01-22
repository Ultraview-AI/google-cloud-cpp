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
// source: google/appengine/v1/appengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_MOCKS_MOCK_APPLICATIONS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_MOCKS_MOCK_APPLICATIONS_CONNECTION_H

#include "google/cloud/appengine/applications_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace appengine_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MockApplicationsConnection : public appengine::ApplicationsConnection {
 public:
  MOCK_METHOD(StatusOr<google::appengine::v1::Application>, GetApplication,
              (google::appengine::v1::GetApplicationRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::appengine::v1::Application>>,
              CreateApplication,
              (google::appengine::v1::CreateApplicationRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::appengine::v1::Application>>,
              UpdateApplication,
              (google::appengine::v1::UpdateApplicationRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::appengine::v1::Application>>,
              RepairApplication,
              (google::appengine::v1::RepairApplicationRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_MOCKS_MOCK_APPLICATIONS_CONNECTION_H