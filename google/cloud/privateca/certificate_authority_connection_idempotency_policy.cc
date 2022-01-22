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
// source: google/cloud/security/privateca/v1/service.proto

#include "google/cloud/privateca/certificate_authority_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace privateca {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

CertificateAuthorityServiceConnectionIdempotencyPolicy::
    ~CertificateAuthorityServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultCertificateAuthorityServiceConnectionIdempotencyPolicy
    : public CertificateAuthorityServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultCertificateAuthorityServiceConnectionIdempotencyPolicy() override =
      default;

  /// Create a new copy of this object.
  std::unique_ptr<CertificateAuthorityServiceConnectionIdempotencyPolicy>
  clone() const override {
    return absl::make_unique<
        DefaultCertificateAuthorityServiceConnectionIdempotencyPolicy>(*this);
  }

  Idempotency CreateCertificate(
      google::cloud::security::privateca::v1::CreateCertificateRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetCertificate(
      google::cloud::security::privateca::v1::GetCertificateRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListCertificates(
      google::cloud::security::privateca::v1::ListCertificatesRequest)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency RevokeCertificate(
      google::cloud::security::privateca::v1::RevokeCertificateRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateCertificate(
      google::cloud::security::privateca::v1::UpdateCertificateRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ActivateCertificateAuthority(
      google::cloud::security::privateca::v1::
          ActivateCertificateAuthorityRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateCertificateAuthority(
      google::cloud::security::privateca::v1::
          CreateCertificateAuthorityRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DisableCertificateAuthority(
      google::cloud::security::privateca::v1::
          DisableCertificateAuthorityRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency EnableCertificateAuthority(
      google::cloud::security::privateca::v1::
          EnableCertificateAuthorityRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency FetchCertificateAuthorityCsr(
      google::cloud::security::privateca::v1::
          FetchCertificateAuthorityCsrRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetCertificateAuthority(
      google::cloud::security::privateca::v1::
          GetCertificateAuthorityRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListCertificateAuthorities(
      google::cloud::security::privateca::v1::ListCertificateAuthoritiesRequest)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency UndeleteCertificateAuthority(
      google::cloud::security::privateca::v1::
          UndeleteCertificateAuthorityRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteCertificateAuthority(
      google::cloud::security::privateca::v1::
          DeleteCertificateAuthorityRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateCertificateAuthority(
      google::cloud::security::privateca::v1::
          UpdateCertificateAuthorityRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateCaPool(
      google::cloud::security::privateca::v1::CreateCaPoolRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateCaPool(
      google::cloud::security::privateca::v1::UpdateCaPoolRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetCaPool(
      google::cloud::security::privateca::v1::GetCaPoolRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListCaPools(
      google::cloud::security::privateca::v1::ListCaPoolsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency DeleteCaPool(
      google::cloud::security::privateca::v1::DeleteCaPoolRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency FetchCaCerts(
      google::cloud::security::privateca::v1::FetchCaCertsRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetCertificateRevocationList(
      google::cloud::security::privateca::v1::
          GetCertificateRevocationListRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListCertificateRevocationLists(
      google::cloud::security::privateca::v1::
          ListCertificateRevocationListsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency UpdateCertificateRevocationList(
      google::cloud::security::privateca::v1::
          UpdateCertificateRevocationListRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateCertificateTemplate(
      google::cloud::security::privateca::v1::
          CreateCertificateTemplateRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteCertificateTemplate(
      google::cloud::security::privateca::v1::
          DeleteCertificateTemplateRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetCertificateTemplate(
      google::cloud::security::privateca::v1::
          GetCertificateTemplateRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListCertificateTemplates(
      google::cloud::security::privateca::v1::ListCertificateTemplatesRequest)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency UpdateCertificateTemplate(
      google::cloud::security::privateca::v1::
          UpdateCertificateTemplateRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<CertificateAuthorityServiceConnectionIdempotencyPolicy>
MakeDefaultCertificateAuthorityServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<
      DefaultCertificateAuthorityServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privateca
}  // namespace cloud
}  // namespace google