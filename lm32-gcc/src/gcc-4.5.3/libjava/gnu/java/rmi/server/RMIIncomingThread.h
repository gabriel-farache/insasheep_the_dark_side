
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_rmi_server_RMIIncomingThread__
#define __gnu_java_rmi_server_RMIIncomingThread__

#pragma interface

#include <java/lang/Thread.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace rmi
      {
        namespace server
        {
            class RMIIncomingThread;
        }
      }
    }
  }
}

class gnu::java::rmi::server::RMIIncomingThread : public ::java::lang::Thread
{

public:
  RMIIncomingThread(::java::lang::Runnable *, ::java::lang::String *);
  virtual ::java::lang::String * toString();
  virtual ::java::lang::String * getClientHost();
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Thread)))) clientHost;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_rmi_server_RMIIncomingThread__
