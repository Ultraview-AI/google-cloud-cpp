// Copyright 2018 Google LLC
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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_OAUTH2_AUTHORIZED_USER_CREDENTIALS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_OAUTH2_AUTHORIZED_USER_CREDENTIALS_H

#include "google/cloud/credentials.h"
#include "google/cloud/internal/oauth2_credential_constants.h"
#include "google/cloud/internal/oauth2_credentials.h"
#include "google/cloud/internal/oauth2_refreshing_credentials_wrapper.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/options.h"
#include "google/cloud/status.h"
#include "google/cloud/version.h"
#include <chrono>
#include <iostream>
#include <mutex>
#include <string>

namespace google {
namespace cloud {
namespace oauth2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// Object to hold information used to instantiate an AuthorizedUserCredentials.
struct AuthorizedUserCredentialsInfo {
  std::string client_id;
  std::string client_secret;
  std::string refresh_token;
  std::string token_uri;
};

/// Parses a user credentials JSON string into an AuthorizedUserCredentialsInfo.
StatusOr<AuthorizedUserCredentialsInfo> ParseAuthorizedUserCredentials(
    std::string const& content, std::string const& source,
    std::string const& default_token_uri = GoogleOAuthRefreshEndpoint());

/// Parses a refresh response JSON string into an authorization header. The
/// header and the current time (for the expiration) form a TemporaryToken.
StatusOr<RefreshingCredentialsWrapper::TemporaryToken>
ParseAuthorizedUserRefreshResponse(rest_internal::RestResponse& response,
                                   std::chrono::system_clock::time_point now);

/**
 * Wrapper class for Google OAuth 2.0 user account credentials.
 *
 * Takes a service account email address or alias (e.g. "default") and uses the
 * Google Compute Engine instance's metadata server to obtain service account
 * metadata and OAuth 2.0 access tokens as needed. Instances of this class
 * should usually be created via the convenience methods declared in
 * google/cloud/credentials.h.
 *
 * An HTTP Authorization header, with an access token as its value,
 * can be obtained by calling the AuthorizationHeader() method; if the current
 * access token is invalid or nearing expiration, this will class will first
 * obtain a new access token before returning the Authorization header string.
 *
 * @see https://developers.google.com/identity/protocols/OAuth2 for an overview
 * of using user credentials with Google's OAuth 2.0 system.
 */
class AuthorizedUserCredentials : public Credentials {
 public:
  using CurrentTimeFn =
      std::function<std::chrono::time_point<std::chrono::system_clock>()>;

  /**
   * Creates an instance of AuthorizedUserCredentials.
   *
   * @param rest_client_fn a dependency injection point. It makes it possible to
   *     mock internal REST types. This should generally not be overridden
   *     except for testing.
   * @param current_time_fn a dependency injection point to fetch the current
   *     time. This should generally not be overridden except for testing.
   */
  explicit AuthorizedUserCredentials(
      AuthorizedUserCredentialsInfo info, Options options = {},
      std::unique_ptr<rest_internal::RestClient> rest_client = nullptr,
      CurrentTimeFn current_time_fn = std::chrono::system_clock::now);

  /**
   * Returns a key value pair for an "Authorization" header.
   */
  StatusOr<std::pair<std::string, std::string>> AuthorizationHeader() override;

 private:
  StatusOr<RefreshingCredentialsWrapper::TemporaryToken> Refresh();

  AuthorizedUserCredentialsInfo info_;
  Options options_;
  CurrentTimeFn current_time_fn_;
  std::unique_ptr<rest_internal::RestClient> rest_client_;
  mutable std::mutex mu_;
  RefreshingCredentialsWrapper refreshing_creds_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace oauth2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_OAUTH2_AUTHORIZED_USER_CREDENTIALS_H