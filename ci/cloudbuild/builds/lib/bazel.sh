#!/bin/bash
#
# Copyright 2021 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# This bash library has various helper functions for our bazel-based builds.

# Make our include guard clean against set -o nounset.
test -n "${CI_CLOUDBUILD_BUILDS_LIB_BAZEL_SH__:-}" || declare -i CI_CLOUDBUILD_BUILDS_LIB_BAZEL_SH__=0
if ((CI_CLOUDBUILD_BUILDS_LIB_BAZEL_SH__++ != 0)); then
  return 0
fi # include guard

# Outputs a list of args that should be given to all bazel invocations. To read
# this into an array use `mapfile -t my_array < <(bazel::common_args)`
function bazel::common_args() {
  local args=("--test_output=errors" "--verbose_failures=true" "--keep_going")
  if [[ -n "${BAZEL_REMOTE_CACHE:-}" ]]; then
    args+=("--remote_cache=${BAZEL_REMOTE_CACHE}")
    args+=("--google_default_credentials")
    # See https://docs.bazel.build/versions/master/remote-caching.html#known-issues
    # and https://github.com/bazelbuild/bazel/issues/3360
    args+=("--experimental_guard_against_concurrent_changes")
  fi
  printf "%s\n" "${args[@]}"
}