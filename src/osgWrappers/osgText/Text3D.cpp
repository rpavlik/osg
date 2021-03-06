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

#include <osg/BoundingBox>
#include <osg/CopyOp>
#include <osg/Drawable>
#include <osg/Object>
#include <osg/PrimitiveSet>
#include <osg/RenderInfo>
#include <osg/State>
#include <osgText/Font3D>
#include <osgText/Text3D>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgText::Text3D::RenderMode)
	I_DeclaringFile("osgText/Text3D");
	I_EnumLabel(osgText::Text3D::PER_FACE);
	I_EnumLabel(osgText::Text3D::PER_GLYPH);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgText::Text3D)
	I_DeclaringFile("osgText/Text3D");
	I_BaseType(osgText::TextBase);
	I_Constructor0(____Text3D,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgText::Text3D &, text, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Text3D__C5_Text3D_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method0(float, getCharacterDepth,
	          Properties::NON_VIRTUAL,
	          __float__getCharacterDepth,
	          "Get the Charactere Depth of text. ",
	          "");
	I_Method1(void, setCharacterDepth, IN, float, characterDepth,
	          Properties::NON_VIRTUAL,
	          __void__setCharacterDepth__float,
	          "Set the Charactere Depth of text. ",
	          "");
	I_Method0(osgText::Text3D::RenderMode, getRenderMode,
	          Properties::NON_VIRTUAL,
	          __RenderMode__getRenderMode,
	          "Get the render mode used to render the text. ",
	          "");
	I_Method1(void, setRenderMode, IN, osgText::Text3D::RenderMode, renderMode,
	          Properties::NON_VIRTUAL,
	          __void__setRenderMode__RenderMode,
	          "Set the render mode used to render the text. ",
	          "");
	I_MethodWithDefaults1(void, setFont, IN, osgText::Font3D *, font, 0,
	                      Properties::NON_VIRTUAL,
	                      __void__setFont__Font3D_P1,
	                      "Get the wall StateSet. ",
	                      "Get or create the wall StateSet Set the wall StateSet Get the back StateSet Get or create the back StateSet Set the back StateSet Set the Font to use to render the text. setFont(0) sets the use of the default font. ");
	I_Method1(void, setFont, IN, osg::ref_ptr< osgText::Font3D >, font,
	          Properties::NON_VIRTUAL,
	          __void__setFont__osg_ref_ptrT1_Font3D_,
	          "Set the Font to use to render the text. ",
	          "");
	I_Method1(void, setFont, IN, const std::string &, fontfile,
	          Properties::NON_VIRTUAL,
	          __void__setFont__C5_std_string_R1,
	          "Set the font, loaded from the specified front file, to use to render the text, setFont(\"\") sets the use of the default font. ",
	          "See the osgText::readFontFile function for how the font file will be located. ");
	I_Method0(const osgText::Font3D *, getFont,
	          Properties::NON_VIRTUAL,
	          __C5_Font3D_P1__getFont,
	          "Get the font. ",
	          "Return 0 if default is being used. ");
	I_Method1(void, drawImplementation, IN, osg::RenderInfo &, renderInfo,
	          Properties::VIRTUAL,
	          __void__drawImplementation__osg_RenderInfo_R1,
	          "Draw the text. ",
	          "");
	I_Method1(bool, supports, IN, const osg::Drawable::AttributeFunctor &, x,
	          Properties::VIRTUAL,
	          __bool__supports__C5_osg_Drawable_AttributeFunctor_R1,
	          "return false, osgText::Text does not support accept(AttributeFunctor&). ",
	          "");
	I_Method1(bool, supports, IN, const osg::Drawable::ConstAttributeFunctor &, x,
	          Properties::VIRTUAL,
	          __bool__supports__C5_osg_Drawable_ConstAttributeFunctor_R1,
	          "return true, osgText::Text does support accept(ConstAttributeFunctor&). ",
	          "");
	I_Method1(bool, supports, IN, const osg::PrimitiveFunctor &, x,
	          Properties::VIRTUAL,
	          __bool__supports__C5_osg_PrimitiveFunctor_R1,
	          "accept an ConstAttributeFunctor and call its methods to tell it about the interal attributes that this Drawable has. ",
	          "return true, osgText::Text does support accept(PrimitiveFunctor&) . ");
	I_Method1(void, setThreadSafeRefUnref, IN, bool, threadSafe,
	          Properties::VIRTUAL,
	          __void__setThreadSafeRefUnref__bool,
	          "accept a PrimtiveFunctor and call its methods to tell it about the interal primtives that this Drawable has. ",
	          "Set whether to use a mutex to ensure ref() and unref() are thread safe. ");
	I_Method1(void, resizeGLObjectBuffers, IN, unsigned int, maxSize,
	          Properties::VIRTUAL,
	          __void__resizeGLObjectBuffers__unsigned_int,
	          "Resize any per context GLObject buffers to specified size. ",
	          "");
	I_MethodWithDefaults1(void, releaseGLObjects, IN, osg::State *, state, 0,
	                      Properties::VIRTUAL,
	                      __void__releaseGLObjects__osg_State_P1,
	                      "If State is non-zero, this function releases OpenGL objects for the specified graphics context. ",
	                      "Otherwise, releases OpenGL objexts for all graphics contexts. ");
	I_Method0(osg::BoundingBox, computeBound,
	          Properties::VIRTUAL,
	          __osg_BoundingBox__computeBound,
	          "Compute the bounding box around Drawables's geometry. ",
	          "");
	I_ProtectedMethod1(void, renderPerGlyph, IN, osg::State &, state,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __void__renderPerGlyph__osg_State_R1,
	                   "",
	                   "");
	I_ProtectedMethod1(void, renderPerFace, IN, osg::State &, state,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __void__renderPerFace__osg_State_R1,
	                   "",
	                   "");
	I_ProtectedMethod3(osgText::String::iterator, computeLastCharacterOnLine, IN, osg::Vec2 &, cursor, IN, osgText::String::iterator, first, IN, osgText::String::iterator, last,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __String_iterator__computeLastCharacterOnLine__osg_Vec2_R1__String_iterator__String_iterator,
	                   "",
	                   "");
	I_ProtectedMethod0(void, computeGlyphRepresentation,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__computeGlyphRepresentation,
	                   "",
	                   "");
	I_ProtectedMethod1(void, computePositions, IN, unsigned int, contextID,
	                   Properties::VIRTUAL,
	                   Properties::CONST,
	                   __void__computePositions__unsigned_int,
	                   "",
	                   "");
	I_SimpleProperty(float, CharacterDepth, 
	                 __float__getCharacterDepth, 
	                 __void__setCharacterDepth__float);
	I_SimpleProperty(osg::ref_ptr< osgText::Font3D >, Font, 
	                 0, 
	                 __void__setFont__osg_ref_ptrT1_Font3D_);
	I_SimpleProperty(osgText::Text3D::RenderMode, RenderMode, 
	                 __RenderMode__getRenderMode, 
	                 __void__setRenderMode__RenderMode);
	I_SimpleProperty(bool, ThreadSafeRefUnref, 
	                 0, 
	                 __void__setThreadSafeRefUnref__bool);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgText::Font3D >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgText::Font3D *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgText::Font3D > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgText::Font3D *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgText::Font3D *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgText::Font3D > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgText::Font3D *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

