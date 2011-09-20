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

#include <osg/ClearNode>
#include <osg/CopyOp>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/Vec4>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osg::ClearNode)
	I_DeclaringFile("osg/ClearNode");
	I_BaseType(osg::Group);
	I_Constructor0(____ClearNode,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::ClearNode &, cs, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____ClearNode__C5_ClearNode_R1__C5_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "clone an object of the same type as the node. ",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "return a clone of a node, with Object* return type. ",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the node's class type. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the node's library. ",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "Visitor Pattern : calls the apply method of a NodeVisitor with this node's type. ",
	          "");
	I_Method1(void, setRequiresClear, IN, bool, requiresClear,
	          Properties::NON_VIRTUAL,
	          __void__setRequiresClear__bool,
	          "Enable/disable clearing via glClear. ",
	          "");
	I_Method0(bool, getRequiresClear,
	          Properties::NON_VIRTUAL,
	          __bool__getRequiresClear,
	          "Gets whether clearing is enabled or disabled. ",
	          "");
	I_Method1(void, setClearColor, IN, const osg::Vec4 &, color,
	          Properties::NON_VIRTUAL,
	          __void__setClearColor__C5_Vec4_R1,
	          "Sets the clear color. ",
	          "");
	I_Method0(const osg::Vec4 &, getClearColor,
	          Properties::NON_VIRTUAL,
	          __C5_Vec4_R1__getClearColor,
	          "Returns the clear color. ",
	          "");
	I_Method1(void, setClearMask, IN, GLbitfield, mask,
	          Properties::NON_VIRTUAL,
	          __void__setClearMask__GLbitfield,
	          "Set the clear mask used in glClear(..). ",
	          "Defaults to GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT. ");
	I_Method0(GLbitfield, getClearMask,
	          Properties::NON_VIRTUAL,
	          __GLbitfield__getClearMask,
	          "Get the clear mask. ",
	          "");
	I_SimpleProperty(const osg::Vec4 &, ClearColor, 
	                 __C5_Vec4_R1__getClearColor, 
	                 __void__setClearColor__C5_Vec4_R1);
	I_SimpleProperty(GLbitfield, ClearMask, 
	                 __GLbitfield__getClearMask, 
	                 __void__setClearMask__GLbitfield);
	I_SimpleProperty(bool, RequiresClear, 
	                 __bool__getRequiresClear, 
	                 __void__setRequiresClear__bool);
END_REFLECTOR

