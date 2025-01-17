// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_OAUTH2_ACCESS_TOKEN_CREDENTIALS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_OAUTH2_ACCESS_TOKEN_CREDENTIALS_H

#include "google/cloud/internal/credentials_impl.h"
#include "google/cloud/internal/oauth2_credentials.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace oauth2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A `Credentials` type representing a Bearer Token OAuth 2.0 credentials.
 */
class AccessTokenCredentials : public oauth2_internal::Credentials {
 public:
  explicit AccessTokenCredentials(
      google::cloud::internal::AccessToken const& access_token);

  StatusOr<std::pair<std::string, std::string>> AuthorizationHeader() override;

 private:
  std::pair<std::string, std::string> header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace oauth2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_OAUTH2_ACCESS_TOKEN_CREDENTIALS_H
