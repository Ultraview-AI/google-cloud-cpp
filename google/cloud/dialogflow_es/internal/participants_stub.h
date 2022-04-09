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
// source: google/cloud/dialogflow/v2/participant.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_PARTICIPANTS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_PARTICIPANTS_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/v2/participant.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ParticipantsStub {
 public:
  virtual ~ParticipantsStub() = 0;

  virtual StatusOr<google::cloud::dialogflow::v2::Participant>
  CreateParticipant(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::CreateParticipantRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::dialogflow::v2::Participant> GetParticipant(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::GetParticipantRequest const& request) = 0;

  virtual StatusOr<google::cloud::dialogflow::v2::ListParticipantsResponse>
  ListParticipants(grpc::ClientContext& context,
                   google::cloud::dialogflow::v2::ListParticipantsRequest const&
                       request) = 0;

  virtual StatusOr<google::cloud::dialogflow::v2::Participant>
  UpdateParticipant(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::UpdateParticipantRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::dialogflow::v2::AnalyzeContentResponse>
  AnalyzeContent(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::AnalyzeContentRequest const& request) = 0;

  virtual StatusOr<google::cloud::dialogflow::v2::SuggestArticlesResponse>
  SuggestArticles(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::SuggestArticlesRequest const& request) = 0;

  virtual StatusOr<google::cloud::dialogflow::v2::SuggestFaqAnswersResponse>
  SuggestFaqAnswers(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::SuggestFaqAnswersRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::dialogflow::v2::SuggestSmartRepliesResponse>
  SuggestSmartReplies(
      grpc::ClientContext& context,
      google::cloud::dialogflow::v2::SuggestSmartRepliesRequest const&
          request) = 0;
};

class DefaultParticipantsStub : public ParticipantsStub {
 public:
  explicit DefaultParticipantsStub(
      std::unique_ptr<
          google::cloud::dialogflow::v2::Participants::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::dialogflow::v2::Participant> CreateParticipant(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::v2::CreateParticipantRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Participant> GetParticipant(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::v2::GetParticipantRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::ListParticipantsResponse>
  ListParticipants(grpc::ClientContext& client_context,
                   google::cloud::dialogflow::v2::ListParticipantsRequest const&
                       request) override;

  StatusOr<google::cloud::dialogflow::v2::Participant> UpdateParticipant(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::v2::UpdateParticipantRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::AnalyzeContentResponse>
  AnalyzeContent(grpc::ClientContext& client_context,
                 google::cloud::dialogflow::v2::AnalyzeContentRequest const&
                     request) override;

  StatusOr<google::cloud::dialogflow::v2::SuggestArticlesResponse>
  SuggestArticles(grpc::ClientContext& client_context,
                  google::cloud::dialogflow::v2::SuggestArticlesRequest const&
                      request) override;

  StatusOr<google::cloud::dialogflow::v2::SuggestFaqAnswersResponse>
  SuggestFaqAnswers(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::v2::SuggestFaqAnswersRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::SuggestSmartRepliesResponse>
  SuggestSmartReplies(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::v2::SuggestSmartRepliesRequest const& request)
      override;

 private:
  std::unique_ptr<google::cloud::dialogflow::v2::Participants::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_PARTICIPANTS_STUB_H