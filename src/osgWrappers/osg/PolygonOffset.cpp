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
#include <osg/Object>
#include <osg/PolygonOffset>
#include <osg/State>
#include <osg/StateAttribute>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osg::PolygonOffset)
	I_DeclaringFile("osg/PolygonOffset");
	I_BaseType(osg::StateAttribute);
	I_Constructor0(____PolygonOffset,
	               "",
	               "");
	I_Constructor2(IN, float, factor, IN, float, units,
	               ____PolygonOffset__float__float,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::PolygonOffset &, po, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____PolygonOffset__C5_PolygonOffset_R1__C5_CopyOp_R1,
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
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method1(bool, getModeUsage, IN, osg::StateAttribute::ModeUsage &, x,
	          Properties::VIRTUAL,
	          __bool__getModeUsage__StateAttribute_ModeUsage_R1,
	          "Return the modes associated with this StateAttribute. ",
	          "");
	I_Method1(void, setFactor, IN, float, factor,
	          Properties::NON_VIRTUAL,
	          __void__setFactor__float,
	          "",
	          "");
	I_Method0(float, getFactor,
	          Properties::NON_VIRTUAL,
	          __float__getFactor,
	          "",
	          "");
	I_Method1(void, setUnits, IN, float, units,
	          Properties::NON_VIRTUAL,
	          __void__setUnits__float,
	          "",
	          "");
	I_Method0(float, getUnits,
	          Properties::NON_VIRTUAL,
	          __float__getUnits,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::State &, x,
	          Properties::VIRTUAL,
	          __void__apply__State_R1,
	          "apply the OpenGL state attributes. ",
	          "The render info for the current OpenGL context is passed in to allow the StateAttribute to obtain details on the the current context and state. ");
	I_StaticMethod1(void, setFactorMultiplier, IN, float, multiplier,
	                __void__setFactorMultiplier__float_S,
	                "",
	                "");
	I_StaticMethod0(float, getFactorMultiplier,
	                __float__getFactorMultiplier_S,
	                "",
	                "");
	I_StaticMethod1(void, setUnitsMultiplier, IN, float, multiplier,
	                __void__setUnitsMultiplier__float_S,
	                "",
	                "");
	I_StaticMethod0(float, getUnitsMultiplier,
	                __float__getUnitsMultiplier_S,
	                "",
	                "");
	I_StaticMethod0(bool, areFactorAndUnitsMultipliersSet,
	                __bool__areFactorAndUnitsMultipliersSet_S,
	                "",
	                "");
	I_StaticMethod0(void, setFactorAndUnitsMultipliersUsingBestGuessForDriver,
	                __void__setFactorAndUnitsMultipliersUsingBestGuessForDriver_S,
	                "Checks with the OpenGL driver to try and pick multiplier appropriate for the hardware. ",
	                "note, requires a valid graphics context to be current. ");
	I_SimpleProperty(float, Factor, 
	                 __float__getFactor, 
	                 __void__setFactor__float);
	I_SimpleProperty(osg::StateAttribute::Type, Type, 
	                 __Type__getType, 
	                 0);
	I_SimpleProperty(float, Units, 
	                 __float__getUnits, 
	                 __void__setUnits__float);
END_REFLECTOR

