
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_java2d_ImagePaint$ImagePaintContext__
#define __gnu_java_awt_java2d_ImagePaint$ImagePaintContext__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace java2d
        {
            class ImagePaint;
            class ImagePaint$ImagePaintContext;
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      namespace image
      {
          class ColorModel;
          class Raster;
          class WritableRaster;
      }
    }
  }
}

class gnu::java::awt::java2d::ImagePaint$ImagePaintContext : public ::java::lang::Object
{

  ImagePaint$ImagePaintContext(::gnu::java::awt::java2d::ImagePaint *);
public:
  virtual void dispose();
  virtual ::java::awt::image::ColorModel * getColorModel();
  virtual ::java::awt::image::Raster * getRaster(jint, jint, jint, jint);
private:
  void ensureRasterSize(jint, jint);
public: // actually package-private
  ImagePaint$ImagePaintContext(::gnu::java::awt::java2d::ImagePaint *, ::gnu::java::awt::java2d::ImagePaint$ImagePaintContext *);
private:
  ::java::awt::image::WritableRaster * __attribute__((aligned(__alignof__( ::java::lang::Object)))) target;
public: // actually package-private
  ::gnu::java::awt::java2d::ImagePaint * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_java2d_ImagePaint$ImagePaintContext__