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
// source: google/cloud/channel/v1/service.proto

#include "google/cloud/channel/cloud_channel_client.h"
#include "google/cloud/channel/internal/cloud_channel_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace channel {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudChannelServiceClient::CloudChannelServiceClient(
    std::shared_ptr<CloudChannelServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(opts), channel_internal::CloudChannelServiceDefaultOptions(
                               connection_->options()))) {}
CloudChannelServiceClient::~CloudChannelServiceClient() = default;

StreamRange<google::cloud::channel::v1::Customer>
CloudChannelServiceClient::ListCustomers(
    google::cloud::channel::v1::ListCustomersRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListCustomers(std::move(request));
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceClient::GetCustomer(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::channel::v1::GetCustomerRequest request;
  request.set_name(name);
  return connection_->GetCustomer(request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceClient::GetCustomer(
    google::cloud::channel::v1::GetCustomerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetCustomer(request);
}

StatusOr<google::cloud::channel::v1::CheckCloudIdentityAccountsExistResponse>
CloudChannelServiceClient::CheckCloudIdentityAccountsExist(
    google::cloud::channel::v1::CheckCloudIdentityAccountsExistRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CheckCloudIdentityAccountsExist(request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceClient::CreateCustomer(
    google::cloud::channel::v1::CreateCustomerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateCustomer(request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceClient::UpdateCustomer(
    google::cloud::channel::v1::UpdateCustomerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateCustomer(request);
}

Status CloudChannelServiceClient::DeleteCustomer(std::string const& name,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::channel::v1::DeleteCustomerRequest request;
  request.set_name(name);
  return connection_->DeleteCustomer(request);
}

Status CloudChannelServiceClient::DeleteCustomer(
    google::cloud::channel::v1::DeleteCustomerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteCustomer(request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceClient::ImportCustomer(
    google::cloud::channel::v1::ImportCustomerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportCustomer(request);
}

future<StatusOr<google::cloud::channel::v1::Customer>>
CloudChannelServiceClient::ProvisionCloudIdentity(
    google::cloud::channel::v1::ProvisionCloudIdentityRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ProvisionCloudIdentity(request);
}

StreamRange<google::cloud::channel::v1::Entitlement>
CloudChannelServiceClient::ListEntitlements(
    google::cloud::channel::v1::ListEntitlementsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListEntitlements(std::move(request));
}

StreamRange<google::cloud::channel::v1::TransferableSku>
CloudChannelServiceClient::ListTransferableSkus(
    google::cloud::channel::v1::ListTransferableSkusRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTransferableSkus(std::move(request));
}

StreamRange<google::cloud::channel::v1::TransferableOffer>
CloudChannelServiceClient::ListTransferableOffers(
    google::cloud::channel::v1::ListTransferableOffersRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTransferableOffers(std::move(request));
}

StatusOr<google::cloud::channel::v1::Entitlement>
CloudChannelServiceClient::GetEntitlement(
    google::cloud::channel::v1::GetEntitlementRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetEntitlement(request);
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceClient::CreateEntitlement(
    google::cloud::channel::v1::CreateEntitlementRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEntitlement(request);
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceClient::ChangeParameters(
    google::cloud::channel::v1::ChangeParametersRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ChangeParameters(request);
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceClient::ChangeRenewalSettings(
    google::cloud::channel::v1::ChangeRenewalSettingsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ChangeRenewalSettings(request);
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceClient::ChangeOffer(
    google::cloud::channel::v1::ChangeOfferRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ChangeOffer(request);
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceClient::StartPaidService(
    google::cloud::channel::v1::StartPaidServiceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StartPaidService(request);
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceClient::SuspendEntitlement(
    google::cloud::channel::v1::SuspendEntitlementRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SuspendEntitlement(request);
}

future<StatusOr<google::cloud::channel::v1::OperationMetadata>>
CloudChannelServiceClient::CancelEntitlement(
    google::cloud::channel::v1::CancelEntitlementRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelEntitlement(request);
}

future<StatusOr<google::cloud::channel::v1::Entitlement>>
CloudChannelServiceClient::ActivateEntitlement(
    google::cloud::channel::v1::ActivateEntitlementRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ActivateEntitlement(request);
}

future<StatusOr<google::cloud::channel::v1::TransferEntitlementsResponse>>
CloudChannelServiceClient::TransferEntitlements(
    google::cloud::channel::v1::TransferEntitlementsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TransferEntitlements(request);
}

future<StatusOr<google::cloud::channel::v1::OperationMetadata>>
CloudChannelServiceClient::TransferEntitlementsToGoogle(
    google::cloud::channel::v1::TransferEntitlementsToGoogleRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TransferEntitlementsToGoogle(request);
}

StreamRange<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceClient::ListChannelPartnerLinks(
    google::cloud::channel::v1::ListChannelPartnerLinksRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListChannelPartnerLinks(std::move(request));
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceClient::GetChannelPartnerLink(
    google::cloud::channel::v1::GetChannelPartnerLinkRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetChannelPartnerLink(request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceClient::CreateChannelPartnerLink(
    google::cloud::channel::v1::CreateChannelPartnerLinkRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateChannelPartnerLink(request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceClient::UpdateChannelPartnerLink(
    google::cloud::channel::v1::UpdateChannelPartnerLinkRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateChannelPartnerLink(request);
}

StatusOr<google::cloud::channel::v1::Offer>
CloudChannelServiceClient::LookupOffer(
    google::cloud::channel::v1::LookupOfferRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->LookupOffer(request);
}

StreamRange<google::cloud::channel::v1::Product>
CloudChannelServiceClient::ListProducts(
    google::cloud::channel::v1::ListProductsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListProducts(std::move(request));
}

StreamRange<google::cloud::channel::v1::Sku>
CloudChannelServiceClient::ListSkus(
    google::cloud::channel::v1::ListSkusRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSkus(std::move(request));
}

StreamRange<google::cloud::channel::v1::Offer>
CloudChannelServiceClient::ListOffers(
    google::cloud::channel::v1::ListOffersRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOffers(std::move(request));
}

StreamRange<google::cloud::channel::v1::PurchasableSku>
CloudChannelServiceClient::ListPurchasableSkus(
    google::cloud::channel::v1::ListPurchasableSkusRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListPurchasableSkus(std::move(request));
}

StreamRange<google::cloud::channel::v1::PurchasableOffer>
CloudChannelServiceClient::ListPurchasableOffers(
    google::cloud::channel::v1::ListPurchasableOffersRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListPurchasableOffers(std::move(request));
}

StatusOr<google::cloud::channel::v1::RegisterSubscriberResponse>
CloudChannelServiceClient::RegisterSubscriber(
    google::cloud::channel::v1::RegisterSubscriberRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RegisterSubscriber(request);
}

StatusOr<google::cloud::channel::v1::UnregisterSubscriberResponse>
CloudChannelServiceClient::UnregisterSubscriber(
    google::cloud::channel::v1::UnregisterSubscriberRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UnregisterSubscriber(request);
}

StreamRange<std::string> CloudChannelServiceClient::ListSubscribers(
    google::cloud::channel::v1::ListSubscribersRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSubscribers(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel
}  // namespace cloud
}  // namespace google