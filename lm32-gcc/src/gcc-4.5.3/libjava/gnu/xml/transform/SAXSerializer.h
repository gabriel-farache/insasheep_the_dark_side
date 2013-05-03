
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_transform_SAXSerializer__
#define __gnu_xml_transform_SAXSerializer__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace transform
      {
          class SAXSerializer;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class NamedNodeMap;
          class Node;
      }
    }
    namespace xml
    {
      namespace sax
      {
          class ContentHandler;
        namespace ext
        {
            class LexicalHandler;
        }
      }
    }
  }
}

class gnu::xml::transform::SAXSerializer : public ::java::lang::Object
{

public: // actually package-private
  SAXSerializer();
  virtual jboolean isDefined(::java::lang::String *, ::java::lang::String *);
  virtual void define(::java::lang::String *, ::java::lang::String *);
  virtual void undefine(::java::lang::String *, ::java::lang::String *);
public:
  virtual jint getLength();
  virtual ::java::lang::String * getURI(jint);
  virtual ::java::lang::String * getLocalName(jint);
  virtual ::java::lang::String * getQName(jint);
  virtual ::java::lang::String * getType(jint);
  virtual ::java::lang::String * getValue(jint);
  virtual jint getIndex(::java::lang::String *, ::java::lang::String *);
  virtual jint getIndex(::java::lang::String *);
  virtual ::java::lang::String * getType(::java::lang::String *, ::java::lang::String *);
  virtual ::java::lang::String * getType(::java::lang::String *);
  virtual ::java::lang::String * getValue(::java::lang::String *, ::java::lang::String *);
  virtual ::java::lang::String * getValue(::java::lang::String *);
public: // actually package-private
  virtual void serialize(::org::w3c::dom::Node *, ::org::xml::sax::ContentHandler *, ::org::xml::sax::ext::LexicalHandler *);
  ::org::w3c::dom::NamedNodeMap * __attribute__((aligned(__alignof__( ::java::lang::Object)))) attrs;
  ::java::util::LinkedList * namespaces;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_transform_SAXSerializer__
