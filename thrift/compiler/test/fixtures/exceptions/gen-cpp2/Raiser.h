/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp2/async/HeaderChannel.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <folly/futures/Future.h>



#include "thrift/compiler/test/fixtures/exceptions/gen-cpp2/module_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {

class RaiserSvAsyncIf {
 public:
  virtual ~RaiserSvAsyncIf() {}
  virtual void async_tm_doBland(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual void async_doBland(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = delete;
  virtual folly::Future<folly::Unit> future_doBland() = 0;
  virtual void async_tm_doRaise(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual void async_doRaise(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = delete;
  virtual folly::Future<folly::Unit> future_doRaise() = 0;
  virtual void async_tm_get200(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback) = 0;
  virtual void async_get200(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback) = delete;
  virtual folly::Future<std::unique_ptr<std::string>> future_get200() = 0;
  virtual void async_tm_get500(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback) = 0;
  virtual void async_get500(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback) = delete;
  virtual folly::Future<std::unique_ptr<std::string>> future_get500() = 0;
};

class RaiserAsyncProcessor;

class RaiserSvIf : public RaiserSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef RaiserAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  virtual void doBland();
  folly::Future<folly::Unit> future_doBland() override;
  void async_tm_doBland(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) override;
  virtual void doRaise();
  folly::Future<folly::Unit> future_doRaise() override;
  void async_tm_doRaise(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) override;
  virtual void get200(std::string& /*_return*/);
  folly::Future<std::unique_ptr<std::string>> future_get200() override;
  void async_tm_get200(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback) override;
  virtual void get500(std::string& /*_return*/);
  folly::Future<std::unique_ptr<std::string>> future_get500() override;
  void async_tm_get500(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback) override;
};

class RaiserSvNull : public RaiserSvIf {
 public:
  void doBland() override;
  void doRaise() override;
  void get200(std::string& /*_return*/) override;
  void get500(std::string& /*_return*/) override;
};

class RaiserAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor = void;
 protected:
  RaiserSvIf* iface_;
  folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) override;
 public:
  void process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
  static std::unordered_map<std::string, int16_t> cacheKeyMap_;
 public:
  using BinaryProtocolProcessFunc = ProcessFunc<RaiserAsyncProcessor, apache::thrift::BinaryProtocolReader>;
  using BinaryProtocolProcessMap = ProcessMap<BinaryProtocolProcessFunc>;
  static const RaiserAsyncProcessor::BinaryProtocolProcessMap& getBinaryProtocolProcessMap();
 private:
  static const RaiserAsyncProcessor::BinaryProtocolProcessMap binaryProcessMap_;
 public:
  using CompactProtocolProcessFunc = ProcessFunc<RaiserAsyncProcessor, apache::thrift::CompactProtocolReader>;
  using CompactProtocolProcessMap = ProcessMap<CompactProtocolProcessFunc>;
  static const RaiserAsyncProcessor::CompactProtocolProcessMap& getCompactProtocolProcessMap();
 private:
  static const RaiserAsyncProcessor::CompactProtocolProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_doBland(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_doBland(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_doBland(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_doBland(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_doBland(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_doRaise(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_doRaise(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_doRaise(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_doRaise(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_doRaise(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_get200(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_get200(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_get200(int32_t protoSeqId, apache::thrift::ContextStack* ctx, std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_get200(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_get200(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_get500(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_get500(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_get500(int32_t protoSeqId, apache::thrift::ContextStack* ctx, std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_get500(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_get500(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  RaiserAsyncProcessor(RaiserSvIf* iface) :
      iface_(iface) {}

  virtual ~RaiserAsyncProcessor() {}
};

class RaiserAsyncClient : public apache::thrift::TClientBase {
 public:
  virtual const char* getServiceName();
  typedef std::unique_ptr<apache::thrift::RequestChannel, folly::DelayedDestruction::Destructor> channel_ptr;

  virtual ~RaiserAsyncClient() {}

  RaiserAsyncClient(std::shared_ptr<apache::thrift::RequestChannel> channel) :
      channel_(channel) {
    connectionContext_.reset(new apache::thrift::Cpp2ConnContext);
  }

  apache::thrift::RequestChannel*  getChannel() {
    return this->channel_.get();
  }

  apache::thrift::HeaderChannel*  getHeaderChannel() {
    return dynamic_cast<apache::thrift::HeaderChannel*>(this->channel_.get());
  }
  virtual void doBland(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void doBland(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void doBlandImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void sync_doBland();
  virtual void sync_doBland(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<folly::Unit> future_doBland();
  virtual folly::Future<folly::Unit> future_doBland(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_doBland(apache::thrift::RpcOptions& rpcOptions);
  virtual void doBland(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_doBland(::apache::thrift::ClientReceiveState& state);
  static void recv_doBland(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_doBland(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_doBland(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void doBlandT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_doBlandT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_doBlandT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void doRaise(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void doRaise(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void doRaiseImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void sync_doRaise();
  virtual void sync_doRaise(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<folly::Unit> future_doRaise();
  virtual folly::Future<folly::Unit> future_doRaise(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_doRaise(apache::thrift::RpcOptions& rpcOptions);
  virtual void doRaise(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_doRaise(::apache::thrift::ClientReceiveState& state);
  static void recv_doRaise(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_doRaise(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_doRaise(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void doRaiseT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_doRaiseT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_doRaiseT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void get200(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void get200(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void get200Impl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void sync_get200(std::string& _return);
  virtual void sync_get200(apache::thrift::RpcOptions& rpcOptions, std::string& _return);
  virtual folly::Future<std::string> future_get200();
  virtual folly::Future<std::string> future_get200(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<std::string, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_get200(apache::thrift::RpcOptions& rpcOptions);
  virtual void get200(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_get200(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_get200(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_get200(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_get200(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void get200T(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_get200T(Protocol_* prot, std::string& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_get200T(Protocol_* prot, std::string& _return, ::apache::thrift::ClientReceiveState& state);
  virtual void get500(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void get500(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void get500Impl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void sync_get500(std::string& _return);
  virtual void sync_get500(apache::thrift::RpcOptions& rpcOptions, std::string& _return);
  virtual folly::Future<std::string> future_get500();
  virtual folly::Future<std::string> future_get500(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<std::string, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_get500(apache::thrift::RpcOptions& rpcOptions);
  virtual void get500(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_get500(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_get500(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_get500(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_get500(std::string& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void get500T(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_get500T(Protocol_* prot, std::string& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_get500T(Protocol_* prot, std::string& _return, ::apache::thrift::ClientReceiveState& state);
 protected:
  std::unique_ptr<apache::thrift::Cpp2ConnContext> connectionContext_;
  std::shared_ptr<apache::thrift::RequestChannel> channel_;
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
