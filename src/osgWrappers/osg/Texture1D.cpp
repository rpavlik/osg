// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Image>
#include <osg/Object>
#include <osg/State>
#include <osg/StateAttribute>
#include <osg/Texture1D>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::Texture1D::SubloadCallback)
	I_DeclaringFile("osg/Texture1D");
	I_BaseType(osg::Referenced);
	I_Constructor0(____SubloadCallback,
	               "",
	               "");
	I_Method2(void, load, IN, const osg::Texture1D &, texture, IN, osg::State &, state,
	          Properties::PURE_VIRTUAL,
	          __void__load__C5_Texture1D_R1__State_R1,
	          "",
	          "");
	I_Method2(void, subload, IN, const osg::Texture1D &, texture, IN, osg::State &, state,
	          Properties::PURE_VIRTUAL,
	          __void__subload__C5_Texture1D_R1__State_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Texture1D)
	I_DeclaringFile("osg/Texture1D");
	I_BaseType(osg::Texture);
	I_Constructor0(____Texture1D,
	               "",
	               "");
	I_Constructor1(IN, osg::Image *, image,
	               Properties::NON_EXPLICIT,
	               ____Texture1D__Image_P1,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::Texture1D &, text, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Texture1D__C5_Texture1D_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "Return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "Return the name of the attribute's library. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "Return the name of the attribute's class type. ",
	          "");
	I_Method0(osg::StateAttribute::Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "Return the Type identifier of the attribute's class type. ",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, rhs,
	          Properties::VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "Return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method0(GLenum, getTextureTarget,
	          Properties::VIRTUAL,
	          __GLenum__getTextureTarget,
	          "",
	          "");
	I_Method1(void, setImage, IN, osg::Image *, image,
	          Properties::NON_VIRTUAL,
	          __void__setImage__Image_P1,
	          "Sets the texture image. ",
	          "");
	I_Method0(osg::Image *, getImage,
	          Properties::NON_VIRTUAL,
	          __Image_P1__getImage,
	          "Gets the texture image. ",
	          "");
	I_Method0(const osg::Image *, getImage,
	          Properties::NON_VIRTUAL,
	          __C5_Image_P1__getImage,
	          "Gets the const texture image. ",
	          "");
	I_Method1(unsigned int &, getModifiedCount, IN, unsigned int, contextID,
	          Properties::NON_VIRTUAL,
	          __unsigned_int_R1__getModifiedCount__unsigned_int,
	          "",
	          "");
	I_Method2(void, setImage, IN, unsigned, int, IN, osg::Image *, image,
	          Properties::VIRTUAL,
	          __void__setImage__unsigned__Image_P1,
	          "Sets the texture image, ignoring face. ",
	          "");
	I_Method1(osg::Image *, getImage, IN, unsigned, int,
	          Properties::VIRTUAL,
	          __Image_P1__getImage__unsigned,
	          "Gets the texture image, ignoring face. ",
	          "");
	I_Method1(const osg::Image *, getImage, IN, unsigned, int,
	          Properties::VIRTUAL,
	          __C5_Image_P1__getImage__unsigned,
	          "Gets the const texture image, ignoring face. ",
	          "");
	I_Method0(unsigned int, getNumImages,
	          Properties::VIRTUAL,
	          __unsigned_int__getNumImages,
	          "Gets the number of images that can be assigned to the Texture. ",
	          "");
	I_Method1(void, setTextureWidth, IN, int, width,
	          Properties::NON_VIRTUAL,
	          __void__setTextureWidth__int,
	          "Sets the texture width. ",
	          "If width is zero, calculate the value from the source image width. ");
	I_Method0(int, getTextureWidth,
	          Properties::VIRTUAL,
	          __int__getTextureWidth,
	          "Gets the texture width. ",
	          "");
	I_Method0(int, getTextureHeight,
	          Properties::VIRTUAL,
	          __int__getTextureHeight,
	          "",
	          "");
	I_Method0(int, getTextureDepth,
	          Properties::VIRTUAL,
	          __int__getTextureDepth,
	          "",
	          "");
	I_Method1(void, setSubloadCallback, IN, osg::Texture1D::SubloadCallback *, cb,
	          Properties::NON_VIRTUAL,
	          __void__setSubloadCallback__SubloadCallback_P1,
	          "",
	          "");
	I_Method0(osg::Texture1D::SubloadCallback *, getSubloadCallback,
	          Properties::NON_VIRTUAL,
	          __SubloadCallback_P1__getSubloadCallback,
	          "",
	          "");
	I_Method0(const osg::Texture1D::SubloadCallback *, getSubloadCallback,
	          Properties::NON_VIRTUAL,
	          __C5_SubloadCallback_P1__getSubloadCallback,
	          "",
	          "");
	I_Method1(void, setNumMipmapLevels, IN, unsigned int, num,
	          Properties::NON_VIRTUAL,
	          __void__setNumMipmapLevels__unsigned_int,
	          "Helper function. ",
	          "Sets the number of mipmap levels created for this texture. Should only be called within an osg::Texture::apply(), or during a custom OpenGL texture load. ");
	I_Method0(unsigned int, getNumMipmapLevels,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumMipmapLevels,
	          "Gets the number of mipmap levels created. ",
	          "");
	I_Method4(void, copyTexImage1D, IN, osg::State &, state, IN, int, x, IN, int, y, IN, int, width,
	          Properties::NON_VIRTUAL,
	          __void__copyTexImage1D__State_R1__int__int__int,
	          "Copies pixels into a 1D texture image, as per glCopyTexImage1D. ",
	          "Creates an OpenGL texture object from the current OpenGL background framebuffer contents at position x, y with width width. width must be a power of two. ");
	I_Method5(void, copyTexSubImage1D, IN, osg::State &, state, IN, int, xoffset, IN, int, x, IN, int, y, IN, int, width,
	          Properties::NON_VIRTUAL,
	          __void__copyTexSubImage1D__State_R1__int__int__int__int,
	          "Copies a one-dimensional texture subimage, as per glCopyTexSubImage1D. ",
	          "Updates a portion of an existing OpenGL texture object from the current OpenGL background framebuffer contents at position x, y with width width. ");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::VIRTUAL,
	          __void__apply__State_R1,
	          "Bind the texture object. ",
	          "If the texture object hasn't already been compiled, create the texture mipmap levels. ");
	I_ProtectedMethod0(void, computeInternalFormat,
	                   Properties::VIRTUAL,
	                   Properties::CONST,
	                   __void__computeInternalFormat,
	                   "",
	                   "");
	I_ProtectedMethod1(void, allocateMipmap, IN, osg::State &, state,
	                   Properties::VIRTUAL,
	                   Properties::CONST,
	                   __void__allocateMipmap__State_R1,
	                   "Allocate mipmap levels of the texture by subsequent calling of glTexImage* function. ",
	                   "");
	I_ProtectedMethod5(void, applyTexImage1D, IN, GLenum, target, IN, osg::Image *, image, IN, osg::State &, state, IN, GLsizei &, width, IN, GLsizei &, numMipmapLevels,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __void__applyTexImage1D__GLenum__Image_P1__State_R1__GLsizei_R1__GLsizei_R1,
	                   "Helper method. ",
	                   "Create the texture without setting or using a texture binding. ");
	I_SimpleProperty(osg::Image *, Image, 
	                 __Image_P1__getImage, 
	                 __void__setImage__Image_P1);
	I_SimpleProperty(unsigned int, NumMipmapLevels, 
	                 0, 
	                 __void__setNumMipmapLevels__unsigned_int);
	I_SimpleProperty(osg::Texture1D::SubloadCallback *, SubloadCallback, 
	                 __SubloadCallback_P1__getSubloadCallback, 
	                 __void__setSubloadCallback__SubloadCallback_P1);
	I_SimpleProperty(int, TextureDepth, 
	                 __int__getTextureDepth, 
	                 0);
	I_SimpleProperty(int, TextureHeight, 
	                 __int__getTextureHeight, 
	                 0);
	I_SimpleProperty(GLenum, TextureTarget, 
	                 __GLenum__getTextureTarget, 
	                 0);
	I_SimpleProperty(int, TextureWidth, 
	                 __int__getTextureWidth, 
	                 __void__setTextureWidth__int);
	I_SimpleProperty(osg::StateAttribute::Type, Type, 
	                 __Type__getType, 
	                 0);
END_REFLECTOR

