// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: database.proto

#include "database.pb.h"
#include "database.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace database {

static const char* Database_method_names[] = {
  "/database.Database/GetArtistAlbums",
  "/database.Database/GetArtistsWithAlbums",
  "/database.Database/GetAlbums",
  "/database.Database/GetArtists",
  "/database.Database/GetGenres",
  "/database.Database/GetAlbumCover",
};

std::unique_ptr< Database::Stub> Database::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Database::Stub> stub(new Database::Stub(channel));
  return stub;
}

Database::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetArtistAlbums_(Database_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetArtistsWithAlbums_(Database_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetAlbums_(Database_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetArtists_(Database_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetGenres_(Database_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetAlbumCover_(Database_method_names[5], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::Status Database::Stub::GetArtistAlbums(::grpc::ClientContext* context, const ::database::ArtistRequest& request, ::database::AlbumList* response) {
  return ::grpc::internal::BlockingUnaryCall< ::database::ArtistRequest, ::database::AlbumList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetArtistAlbums_, context, request, response);
}

void Database::Stub::experimental_async::GetArtistAlbums(::grpc::ClientContext* context, const ::database::ArtistRequest* request, ::database::AlbumList* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::database::ArtistRequest, ::database::AlbumList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetArtistAlbums_, context, request, response, std::move(f));
}

void Database::Stub::experimental_async::GetArtistAlbums(::grpc::ClientContext* context, const ::database::ArtistRequest* request, ::database::AlbumList* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetArtistAlbums_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::database::AlbumList>* Database::Stub::PrepareAsyncGetArtistAlbumsRaw(::grpc::ClientContext* context, const ::database::ArtistRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::database::AlbumList, ::database::ArtistRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetArtistAlbums_, context, request);
}

::grpc::ClientAsyncResponseReader< ::database::AlbumList>* Database::Stub::AsyncGetArtistAlbumsRaw(::grpc::ClientContext* context, const ::database::ArtistRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetArtistAlbumsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Database::Stub::GetArtistsWithAlbums(::grpc::ClientContext* context, const ::common::Empty& request, ::database::ArtistAlbumMap* response) {
  return ::grpc::internal::BlockingUnaryCall< ::common::Empty, ::database::ArtistAlbumMap, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetArtistsWithAlbums_, context, request, response);
}

void Database::Stub::experimental_async::GetArtistsWithAlbums(::grpc::ClientContext* context, const ::common::Empty* request, ::database::ArtistAlbumMap* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::common::Empty, ::database::ArtistAlbumMap, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetArtistsWithAlbums_, context, request, response, std::move(f));
}

void Database::Stub::experimental_async::GetArtistsWithAlbums(::grpc::ClientContext* context, const ::common::Empty* request, ::database::ArtistAlbumMap* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetArtistsWithAlbums_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::database::ArtistAlbumMap>* Database::Stub::PrepareAsyncGetArtistsWithAlbumsRaw(::grpc::ClientContext* context, const ::common::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::database::ArtistAlbumMap, ::common::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetArtistsWithAlbums_, context, request);
}

::grpc::ClientAsyncResponseReader< ::database::ArtistAlbumMap>* Database::Stub::AsyncGetArtistsWithAlbumsRaw(::grpc::ClientContext* context, const ::common::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetArtistsWithAlbumsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Database::Stub::GetAlbums(::grpc::ClientContext* context, const ::common::Empty& request, ::database::AlbumList* response) {
  return ::grpc::internal::BlockingUnaryCall< ::common::Empty, ::database::AlbumList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetAlbums_, context, request, response);
}

void Database::Stub::experimental_async::GetAlbums(::grpc::ClientContext* context, const ::common::Empty* request, ::database::AlbumList* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::common::Empty, ::database::AlbumList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetAlbums_, context, request, response, std::move(f));
}

void Database::Stub::experimental_async::GetAlbums(::grpc::ClientContext* context, const ::common::Empty* request, ::database::AlbumList* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetAlbums_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::database::AlbumList>* Database::Stub::PrepareAsyncGetAlbumsRaw(::grpc::ClientContext* context, const ::common::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::database::AlbumList, ::common::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetAlbums_, context, request);
}

::grpc::ClientAsyncResponseReader< ::database::AlbumList>* Database::Stub::AsyncGetAlbumsRaw(::grpc::ClientContext* context, const ::common::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetAlbumsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Database::Stub::GetArtists(::grpc::ClientContext* context, const ::common::Empty& request, ::database::ArtistList* response) {
  return ::grpc::internal::BlockingUnaryCall< ::common::Empty, ::database::ArtistList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetArtists_, context, request, response);
}

void Database::Stub::experimental_async::GetArtists(::grpc::ClientContext* context, const ::common::Empty* request, ::database::ArtistList* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::common::Empty, ::database::ArtistList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetArtists_, context, request, response, std::move(f));
}

void Database::Stub::experimental_async::GetArtists(::grpc::ClientContext* context, const ::common::Empty* request, ::database::ArtistList* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetArtists_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::database::ArtistList>* Database::Stub::PrepareAsyncGetArtistsRaw(::grpc::ClientContext* context, const ::common::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::database::ArtistList, ::common::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetArtists_, context, request);
}

::grpc::ClientAsyncResponseReader< ::database::ArtistList>* Database::Stub::AsyncGetArtistsRaw(::grpc::ClientContext* context, const ::common::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetArtistsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Database::Stub::GetGenres(::grpc::ClientContext* context, const ::common::Empty& request, ::database::GenreList* response) {
  return ::grpc::internal::BlockingUnaryCall< ::common::Empty, ::database::GenreList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetGenres_, context, request, response);
}

void Database::Stub::experimental_async::GetGenres(::grpc::ClientContext* context, const ::common::Empty* request, ::database::GenreList* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::common::Empty, ::database::GenreList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetGenres_, context, request, response, std::move(f));
}

void Database::Stub::experimental_async::GetGenres(::grpc::ClientContext* context, const ::common::Empty* request, ::database::GenreList* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetGenres_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::database::GenreList>* Database::Stub::PrepareAsyncGetGenresRaw(::grpc::ClientContext* context, const ::common::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::database::GenreList, ::common::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetGenres_, context, request);
}

::grpc::ClientAsyncResponseReader< ::database::GenreList>* Database::Stub::AsyncGetGenresRaw(::grpc::ClientContext* context, const ::common::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetGenresRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientReader< ::database::ImageChunk>* Database::Stub::GetAlbumCoverRaw(::grpc::ClientContext* context, const ::database::AlbumRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::database::ImageChunk>::Create(channel_.get(), rpcmethod_GetAlbumCover_, context, request);
}

void Database::Stub::experimental_async::GetAlbumCover(::grpc::ClientContext* context, const ::database::AlbumRequest* request, ::grpc::experimental::ClientReadReactor< ::database::ImageChunk>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::database::ImageChunk>::Create(stub_->channel_.get(), stub_->rpcmethod_GetAlbumCover_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::database::ImageChunk>* Database::Stub::AsyncGetAlbumCoverRaw(::grpc::ClientContext* context, const ::database::AlbumRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::database::ImageChunk>::Create(channel_.get(), cq, rpcmethod_GetAlbumCover_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::database::ImageChunk>* Database::Stub::PrepareAsyncGetAlbumCoverRaw(::grpc::ClientContext* context, const ::database::AlbumRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::database::ImageChunk>::Create(channel_.get(), cq, rpcmethod_GetAlbumCover_, context, request, false, nullptr);
}

Database::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Database_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Database::Service, ::database::ArtistRequest, ::database::AlbumList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Database::Service* service,
             ::grpc::ServerContext* ctx,
             const ::database::ArtistRequest* req,
             ::database::AlbumList* resp) {
               return service->GetArtistAlbums(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Database_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Database::Service, ::common::Empty, ::database::ArtistAlbumMap, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Database::Service* service,
             ::grpc::ServerContext* ctx,
             const ::common::Empty* req,
             ::database::ArtistAlbumMap* resp) {
               return service->GetArtistsWithAlbums(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Database_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Database::Service, ::common::Empty, ::database::AlbumList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Database::Service* service,
             ::grpc::ServerContext* ctx,
             const ::common::Empty* req,
             ::database::AlbumList* resp) {
               return service->GetAlbums(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Database_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Database::Service, ::common::Empty, ::database::ArtistList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Database::Service* service,
             ::grpc::ServerContext* ctx,
             const ::common::Empty* req,
             ::database::ArtistList* resp) {
               return service->GetArtists(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Database_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Database::Service, ::common::Empty, ::database::GenreList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Database::Service* service,
             ::grpc::ServerContext* ctx,
             const ::common::Empty* req,
             ::database::GenreList* resp) {
               return service->GetGenres(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Database_method_names[5],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< Database::Service, ::database::AlbumRequest, ::database::ImageChunk>(
          [](Database::Service* service,
             ::grpc::ServerContext* ctx,
             const ::database::AlbumRequest* req,
             ::grpc::ServerWriter<::database::ImageChunk>* writer) {
               return service->GetAlbumCover(ctx, req, writer);
             }, this)));
}

Database::Service::~Service() {
}

::grpc::Status Database::Service::GetArtistAlbums(::grpc::ServerContext* context, const ::database::ArtistRequest* request, ::database::AlbumList* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Database::Service::GetArtistsWithAlbums(::grpc::ServerContext* context, const ::common::Empty* request, ::database::ArtistAlbumMap* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Database::Service::GetAlbums(::grpc::ServerContext* context, const ::common::Empty* request, ::database::AlbumList* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Database::Service::GetArtists(::grpc::ServerContext* context, const ::common::Empty* request, ::database::ArtistList* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Database::Service::GetGenres(::grpc::ServerContext* context, const ::common::Empty* request, ::database::GenreList* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Database::Service::GetAlbumCover(::grpc::ServerContext* context, const ::database::AlbumRequest* request, ::grpc::ServerWriter< ::database::ImageChunk>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace database

