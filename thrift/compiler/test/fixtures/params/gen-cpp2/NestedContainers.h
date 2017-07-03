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



#include "thrift/compiler/test/fixtures/params/gen-cpp2/module_types.h"

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

class NestedContainersSvAsyncIf {
 public:
  virtual ~NestedContainersSvAsyncIf() {}
  virtual void async_tm_mapList(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::map<int32_t, std::vector<int32_t>>> foo) = 0;
  virtual void async_mapList(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::map<int32_t, std::vector<int32_t>>> foo) = delete;
  virtual folly::Future<folly::Unit> future_mapList(std::unique_ptr<std::map<int32_t, std::vector<int32_t>>> foo) = 0;
  virtual void async_tm_mapSet(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::map<int32_t, std::set<int32_t>>> foo) = 0;
  virtual void async_mapSet(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::map<int32_t, std::set<int32_t>>> foo) = delete;
  virtual folly::Future<folly::Unit> future_mapSet(std::unique_ptr<std::map<int32_t, std::set<int32_t>>> foo) = 0;
  virtual void async_tm_listMap(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::vector<std::map<int32_t, int32_t>>> foo) = 0;
  virtual void async_listMap(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::vector<std::map<int32_t, int32_t>>> foo) = delete;
  virtual folly::Future<folly::Unit> future_listMap(std::unique_ptr<std::vector<std::map<int32_t, int32_t>>> foo) = 0;
  virtual void async_tm_listSet(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::vector<std::set<int32_t>>> foo) = 0;
  virtual void async_listSet(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::vector<std::set<int32_t>>> foo) = delete;
  virtual folly::Future<folly::Unit> future_listSet(std::unique_ptr<std::vector<std::set<int32_t>>> foo) = 0;
  virtual void async_tm_turtles(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>> foo) = 0;
  virtual void async_turtles(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>> foo) = delete;
  virtual folly::Future<folly::Unit> future_turtles(std::unique_ptr<std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>> foo) = 0;
};

class NestedContainersAsyncProcessor;

class NestedContainersSvIf : public NestedContainersSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef NestedContainersAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  virtual void mapList(std::unique_ptr<std::map<int32_t, std::vector<int32_t>>> /*foo*/);
  folly::Future<folly::Unit> future_mapList(std::unique_ptr<std::map<int32_t, std::vector<int32_t>>> foo) override;
  void async_tm_mapList(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::map<int32_t, std::vector<int32_t>>> foo) override;
  virtual void mapSet(std::unique_ptr<std::map<int32_t, std::set<int32_t>>> /*foo*/);
  folly::Future<folly::Unit> future_mapSet(std::unique_ptr<std::map<int32_t, std::set<int32_t>>> foo) override;
  void async_tm_mapSet(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::map<int32_t, std::set<int32_t>>> foo) override;
  virtual void listMap(std::unique_ptr<std::vector<std::map<int32_t, int32_t>>> /*foo*/);
  folly::Future<folly::Unit> future_listMap(std::unique_ptr<std::vector<std::map<int32_t, int32_t>>> foo) override;
  void async_tm_listMap(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::vector<std::map<int32_t, int32_t>>> foo) override;
  virtual void listSet(std::unique_ptr<std::vector<std::set<int32_t>>> /*foo*/);
  folly::Future<folly::Unit> future_listSet(std::unique_ptr<std::vector<std::set<int32_t>>> foo) override;
  void async_tm_listSet(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::vector<std::set<int32_t>>> foo) override;
  virtual void turtles(std::unique_ptr<std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>> /*foo*/);
  folly::Future<folly::Unit> future_turtles(std::unique_ptr<std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>> foo) override;
  void async_tm_turtles(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>> foo) override;
};

class NestedContainersSvNull : public NestedContainersSvIf {
 public:
  void mapList(std::unique_ptr<std::map<int32_t, std::vector<int32_t>>> /*foo*/) override;
  void mapSet(std::unique_ptr<std::map<int32_t, std::set<int32_t>>> /*foo*/) override;
  void listMap(std::unique_ptr<std::vector<std::map<int32_t, int32_t>>> /*foo*/) override;
  void listSet(std::unique_ptr<std::vector<std::set<int32_t>>> /*foo*/) override;
  void turtles(std::unique_ptr<std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>> /*foo*/) override;
};

class NestedContainersAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor = void;
 protected:
  NestedContainersSvIf* iface_;
  folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) override;
 public:
  void process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
  static std::unordered_map<std::string, int16_t> cacheKeyMap_;
 public:
  using BinaryProtocolProcessFunc = ProcessFunc<NestedContainersAsyncProcessor, apache::thrift::BinaryProtocolReader>;
  using BinaryProtocolProcessMap = ProcessMap<BinaryProtocolProcessFunc>;
  static const NestedContainersAsyncProcessor::BinaryProtocolProcessMap& getBinaryProtocolProcessMap();
 private:
  static const NestedContainersAsyncProcessor::BinaryProtocolProcessMap binaryProcessMap_;
 public:
  using CompactProtocolProcessFunc = ProcessFunc<NestedContainersAsyncProcessor, apache::thrift::CompactProtocolReader>;
  using CompactProtocolProcessMap = ProcessMap<CompactProtocolProcessFunc>;
  static const NestedContainersAsyncProcessor::CompactProtocolProcessMap& getCompactProtocolProcessMap();
 private:
  static const NestedContainersAsyncProcessor::CompactProtocolProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_mapList(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_mapList(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_mapList(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_mapList(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_mapList(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_mapSet(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_mapSet(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_mapSet(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_mapSet(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_mapSet(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_listMap(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_listMap(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_listMap(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_listMap(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_listMap(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_listSet(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_listSet(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_listSet(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_listSet(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_listSet(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_turtles(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_turtles(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_turtles(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_turtles(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_turtles(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  NestedContainersAsyncProcessor(NestedContainersSvIf* iface) :
      iface_(iface) {}

  virtual ~NestedContainersAsyncProcessor() {}
};

class NestedContainersAsyncClient : public apache::thrift::TClientBase {
 public:
  virtual const char* getServiceName();
  typedef std::unique_ptr<apache::thrift::RequestChannel, folly::DelayedDestruction::Destructor> channel_ptr;

  virtual ~NestedContainersAsyncClient() {}

  NestedContainersAsyncClient(std::shared_ptr<apache::thrift::RequestChannel> channel) :
      channel_(channel) {
    connectionContext_.reset(new apache::thrift::Cpp2ConnContext);
  }

  apache::thrift::RequestChannel*  getChannel() {
    return this->channel_.get();
  }

  apache::thrift::HeaderChannel*  getHeaderChannel() {
    return dynamic_cast<apache::thrift::HeaderChannel*>(this->channel_.get());
  }
  virtual void mapList(std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<int32_t, std::vector<int32_t>>& foo);
  virtual void mapList(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<int32_t, std::vector<int32_t>>& foo);
 private:
  virtual void mapListImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<int32_t, std::vector<int32_t>>& foo);
 public:
  virtual void sync_mapList(const std::map<int32_t, std::vector<int32_t>>& foo);
  virtual void sync_mapList(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::vector<int32_t>>& foo);
  virtual folly::Future<folly::Unit> future_mapList(const std::map<int32_t, std::vector<int32_t>>& foo);
  virtual folly::Future<folly::Unit> future_mapList(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::vector<int32_t>>& foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_mapList(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::vector<int32_t>>& foo);
  virtual void mapList(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const std::map<int32_t, std::vector<int32_t>>& foo);
  static folly::exception_wrapper recv_wrapped_mapList(::apache::thrift::ClientReceiveState& state);
  static void recv_mapList(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_mapList(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_mapList(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void mapListT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<int32_t, std::vector<int32_t>>& foo);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_mapListT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_mapListT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void mapSet(std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<int32_t, std::set<int32_t>>& foo);
  virtual void mapSet(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<int32_t, std::set<int32_t>>& foo);
 private:
  virtual void mapSetImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<int32_t, std::set<int32_t>>& foo);
 public:
  virtual void sync_mapSet(const std::map<int32_t, std::set<int32_t>>& foo);
  virtual void sync_mapSet(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::set<int32_t>>& foo);
  virtual folly::Future<folly::Unit> future_mapSet(const std::map<int32_t, std::set<int32_t>>& foo);
  virtual folly::Future<folly::Unit> future_mapSet(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::set<int32_t>>& foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_mapSet(apache::thrift::RpcOptions& rpcOptions, const std::map<int32_t, std::set<int32_t>>& foo);
  virtual void mapSet(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const std::map<int32_t, std::set<int32_t>>& foo);
  static folly::exception_wrapper recv_wrapped_mapSet(::apache::thrift::ClientReceiveState& state);
  static void recv_mapSet(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_mapSet(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_mapSet(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void mapSetT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<int32_t, std::set<int32_t>>& foo);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_mapSetT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_mapSetT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void listMap(std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::map<int32_t, int32_t>>& foo);
  virtual void listMap(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::map<int32_t, int32_t>>& foo);
 private:
  virtual void listMapImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::map<int32_t, int32_t>>& foo);
 public:
  virtual void sync_listMap(const std::vector<std::map<int32_t, int32_t>>& foo);
  virtual void sync_listMap(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::map<int32_t, int32_t>>& foo);
  virtual folly::Future<folly::Unit> future_listMap(const std::vector<std::map<int32_t, int32_t>>& foo);
  virtual folly::Future<folly::Unit> future_listMap(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::map<int32_t, int32_t>>& foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_listMap(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::map<int32_t, int32_t>>& foo);
  virtual void listMap(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const std::vector<std::map<int32_t, int32_t>>& foo);
  static folly::exception_wrapper recv_wrapped_listMap(::apache::thrift::ClientReceiveState& state);
  static void recv_listMap(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_listMap(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_listMap(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void listMapT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::map<int32_t, int32_t>>& foo);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_listMapT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_listMapT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void listSet(std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::set<int32_t>>& foo);
  virtual void listSet(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::set<int32_t>>& foo);
 private:
  virtual void listSetImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::set<int32_t>>& foo);
 public:
  virtual void sync_listSet(const std::vector<std::set<int32_t>>& foo);
  virtual void sync_listSet(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::set<int32_t>>& foo);
  virtual folly::Future<folly::Unit> future_listSet(const std::vector<std::set<int32_t>>& foo);
  virtual folly::Future<folly::Unit> future_listSet(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::set<int32_t>>& foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_listSet(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::set<int32_t>>& foo);
  virtual void listSet(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const std::vector<std::set<int32_t>>& foo);
  static folly::exception_wrapper recv_wrapped_listSet(::apache::thrift::ClientReceiveState& state);
  static void recv_listSet(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_listSet(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_listSet(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void listSetT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::set<int32_t>>& foo);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_listSetT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_listSetT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void turtles(std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
  virtual void turtles(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
 private:
  virtual void turtlesImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
 public:
  virtual void sync_turtles(const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
  virtual void sync_turtles(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
  virtual folly::Future<folly::Unit> future_turtles(const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
  virtual folly::Future<folly::Unit> future_turtles(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_turtles(apache::thrift::RpcOptions& rpcOptions, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
  virtual void turtles(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
  static folly::exception_wrapper recv_wrapped_turtles(::apache::thrift::ClientReceiveState& state);
  static void recv_turtles(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_turtles(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_turtles(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void turtlesT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector<std::vector<std::map<int32_t, std::map<int32_t, std::set<int32_t>>>>>& foo);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_turtlesT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_turtlesT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
 protected:
  std::unique_ptr<apache::thrift::Cpp2ConnContext> connectionContext_;
  std::shared_ptr<apache::thrift::RequestChannel> channel_;
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
