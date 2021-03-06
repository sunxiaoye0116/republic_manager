/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef AgentManagerInterface_H
#define AgentManagerInterface_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "republic_types.h"

namespace edu { namespace rice { namespace republic { namespace amif {

#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class AgentManagerInterfaceIf {
 public:
  virtual ~AgentManagerInterfaceIf() {}
  virtual void request(Response& _return, const Request& rq) = 0;
  virtual void release(const Release& rl) = 0;
};

class AgentManagerInterfaceIfFactory {
 public:
  typedef AgentManagerInterfaceIf Handler;

  virtual ~AgentManagerInterfaceIfFactory() {}

  virtual AgentManagerInterfaceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(AgentManagerInterfaceIf* /* handler */) = 0;
};

class AgentManagerInterfaceIfSingletonFactory : virtual public AgentManagerInterfaceIfFactory {
 public:
  AgentManagerInterfaceIfSingletonFactory(const boost::shared_ptr<AgentManagerInterfaceIf>& iface) : iface_(iface) {}
  virtual ~AgentManagerInterfaceIfSingletonFactory() {}

  virtual AgentManagerInterfaceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(AgentManagerInterfaceIf* /* handler */) {}

 protected:
  boost::shared_ptr<AgentManagerInterfaceIf> iface_;
};

class AgentManagerInterfaceNull : virtual public AgentManagerInterfaceIf {
 public:
  virtual ~AgentManagerInterfaceNull() {}
  void request(Response& /* _return */, const Request& /* rq */) {
    return;
  }
  void release(const Release& /* rl */) {
    return;
  }
};

typedef struct _AgentManagerInterface_request_args__isset {
  _AgentManagerInterface_request_args__isset() : rq(false) {}
  bool rq :1;
} _AgentManagerInterface_request_args__isset;

class AgentManagerInterface_request_args {
 public:

  AgentManagerInterface_request_args(const AgentManagerInterface_request_args&);
  AgentManagerInterface_request_args& operator=(const AgentManagerInterface_request_args&);
  AgentManagerInterface_request_args() {
  }

  virtual ~AgentManagerInterface_request_args() throw();
  Request rq;

  _AgentManagerInterface_request_args__isset __isset;

  void __set_rq(const Request& val);

  bool operator == (const AgentManagerInterface_request_args & rhs) const
  {
    if (!(rq == rhs.rq))
      return false;
    return true;
  }
  bool operator != (const AgentManagerInterface_request_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AgentManagerInterface_request_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class AgentManagerInterface_request_pargs {
 public:


  virtual ~AgentManagerInterface_request_pargs() throw();
  const Request* rq;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _AgentManagerInterface_request_result__isset {
  _AgentManagerInterface_request_result__isset() : success(false) {}
  bool success :1;
} _AgentManagerInterface_request_result__isset;

class AgentManagerInterface_request_result {
 public:

  AgentManagerInterface_request_result(const AgentManagerInterface_request_result&);
  AgentManagerInterface_request_result& operator=(const AgentManagerInterface_request_result&);
  AgentManagerInterface_request_result() {
  }

  virtual ~AgentManagerInterface_request_result() throw();
  Response success;

  _AgentManagerInterface_request_result__isset __isset;

  void __set_success(const Response& val);

  bool operator == (const AgentManagerInterface_request_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const AgentManagerInterface_request_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AgentManagerInterface_request_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _AgentManagerInterface_request_presult__isset {
  _AgentManagerInterface_request_presult__isset() : success(false) {}
  bool success :1;
} _AgentManagerInterface_request_presult__isset;

class AgentManagerInterface_request_presult {
 public:


  virtual ~AgentManagerInterface_request_presult() throw();
  Response* success;

  _AgentManagerInterface_request_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _AgentManagerInterface_release_args__isset {
  _AgentManagerInterface_release_args__isset() : rl(false) {}
  bool rl :1;
} _AgentManagerInterface_release_args__isset;

class AgentManagerInterface_release_args {
 public:

  AgentManagerInterface_release_args(const AgentManagerInterface_release_args&);
  AgentManagerInterface_release_args& operator=(const AgentManagerInterface_release_args&);
  AgentManagerInterface_release_args() {
  }

  virtual ~AgentManagerInterface_release_args() throw();
  Release rl;

  _AgentManagerInterface_release_args__isset __isset;

  void __set_rl(const Release& val);

  bool operator == (const AgentManagerInterface_release_args & rhs) const
  {
    if (!(rl == rhs.rl))
      return false;
    return true;
  }
  bool operator != (const AgentManagerInterface_release_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AgentManagerInterface_release_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class AgentManagerInterface_release_pargs {
 public:


  virtual ~AgentManagerInterface_release_pargs() throw();
  const Release* rl;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class AgentManagerInterfaceClient : virtual public AgentManagerInterfaceIf {
 public:
  AgentManagerInterfaceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  AgentManagerInterfaceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void request(Response& _return, const Request& rq);
  void send_request(const Request& rq);
  void recv_request(Response& _return);
  void release(const Release& rl);
  void send_release(const Release& rl);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class AgentManagerInterfaceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<AgentManagerInterfaceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (AgentManagerInterfaceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_request(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_release(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  AgentManagerInterfaceProcessor(boost::shared_ptr<AgentManagerInterfaceIf> iface) :
    iface_(iface) {
    processMap_["request"] = &AgentManagerInterfaceProcessor::process_request;
    processMap_["release"] = &AgentManagerInterfaceProcessor::process_release;
  }

  virtual ~AgentManagerInterfaceProcessor() {}
};

class AgentManagerInterfaceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  AgentManagerInterfaceProcessorFactory(const ::boost::shared_ptr< AgentManagerInterfaceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< AgentManagerInterfaceIfFactory > handlerFactory_;
};

class AgentManagerInterfaceMultiface : virtual public AgentManagerInterfaceIf {
 public:
  AgentManagerInterfaceMultiface(std::vector<boost::shared_ptr<AgentManagerInterfaceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~AgentManagerInterfaceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<AgentManagerInterfaceIf> > ifaces_;
  AgentManagerInterfaceMultiface() {}
  void add(boost::shared_ptr<AgentManagerInterfaceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void request(Response& _return, const Request& rq) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->request(_return, rq);
    }
    ifaces_[i]->request(_return, rq);
    return;
  }

  void release(const Release& rl) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->release(rl);
    }
    ifaces_[i]->release(rl);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class AgentManagerInterfaceConcurrentClient : virtual public AgentManagerInterfaceIf {
 public:
  AgentManagerInterfaceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  AgentManagerInterfaceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void request(Response& _return, const Request& rq);
  int32_t send_request(const Request& rq);
  void recv_request(Response& _return, const int32_t seqid);
  void release(const Release& rl);
  void send_release(const Release& rl);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _WIN32
  #pragma warning( pop )
#endif

}}}} // namespace

#endif
