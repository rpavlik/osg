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

#include <osg/Array>
#include <osg/CopyOp>
#include <osg/Geode>
#include <osg/Geometry>
#include <osg/KdTree>
#include <osg/Object>
#include <osg/Shape>
#include <osg/Vec3>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_VALUE_REFLECTOR(osg::KdTree::BuildOptions)
	I_DeclaringFile("osg/KdTree");
	I_Constructor0(____BuildOptions,
	               "",
	               "");
	I_PublicMemberProperty(unsigned int, _numVerticesProcessed);
	I_PublicMemberProperty(unsigned int, _targetNumTrianglesPerLeaf);
	I_PublicMemberProperty(unsigned int, _maxNumLevels);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::KdTree::KdNode)
	I_DeclaringFile("osg/KdTree");
	I_Constructor0(____KdNode,
	               "",
	               "");
	I_Constructor2(IN, osg::KdTree::value_type, f, IN, osg::KdTree::value_type, s,
	               ____KdNode__value_type__value_type,
	               "",
	               "");
	I_PublicMemberProperty(osg::BoundingBox, bb);
	I_PublicMemberProperty(osg::KdTree::value_type, first);
	I_PublicMemberProperty(osg::KdTree::value_type, second);
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< osg::KdTree::LineSegmentIntersection >, osg::KdTree::LineSegmentIntersections)

TYPE_NAME_ALIAS(int, osg::KdTree::value_type)

TYPE_NAME_ALIAS(std::vector< osg::KdTree::KdNode >, osg::KdTree::KdNodeList)

TYPE_NAME_ALIAS(std::vector< osg::KdTree::Triangle >, osg::KdTree::TriangleList)

BEGIN_OBJECT_REFLECTOR(osg::KdTree)
	I_DeclaringFile("osg/KdTree");
	I_BaseType(osg::Shape);
	I_Constructor0(____KdTree,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::KdTree &, rhs, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____KdTree__C5_KdTree_R1__C5_osg_CopyOp_R1,
	                           "",
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
	          "return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the attribute's library. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the attribute's class type. ",
	          "");
	I_Method1(void, accept, IN, osg::ShapeVisitor &, x,
	          Properties::VIRTUAL,
	          __void__accept__osg_ShapeVisitor_R1,
	          "accept a non const shape visitor which can be used on non const shape objects. ",
	          "Must be defined by derived classes. ");
	I_Method1(void, accept, IN, osg::ConstShapeVisitor &, x,
	          Properties::VIRTUAL,
	          __void__accept__osg_ConstShapeVisitor_R1,
	          "accept a const shape visitor which can be used on const shape objects. ",
	          "Must be defined by derived classes. ");
	I_Method2(bool, build, IN, osg::KdTree::BuildOptions &, buildOptions, IN, osg::Geometry *, geometry,
	          Properties::VIRTUAL,
	          __bool__build__BuildOptions_R1__osg_Geometry_P1,
	          "Build the kdtree from the specified source geometry object. ",
	          "retun true on success. ");
	I_Method3(bool, intersect, IN, const osg::Vec3 &, start, IN, const osg::Vec3 &, end, IN, osg::KdTree::LineSegmentIntersections &, intersections,
	          Properties::VIRTUAL,
	          __bool__intersect__C5_osg_Vec3_R1__C5_osg_Vec3_R1__LineSegmentIntersections_R1,
	          "compute the intersection of a line segment and the kdtree, return true if an intersection has been found. ",
	          "");
	I_Method1(int, addNode, IN, const osg::KdTree::KdNode &, node,
	          Properties::NON_VIRTUAL,
	          __int__addNode__C5_KdNode_R1,
	          "",
	          "");
	I_Method1(osg::KdTree::KdNode &, getNode, IN, int, nodeNum,
	          Properties::NON_VIRTUAL,
	          __KdNode_R1__getNode__int,
	          "",
	          "");
	I_Method1(const osg::KdTree::KdNode &, getNode, IN, int, nodeNum,
	          Properties::NON_VIRTUAL,
	          __C5_KdNode_R1__getNode__int,
	          "",
	          "");
	I_Method0(osg::KdTree::KdNodeList &, getNodes,
	          Properties::NON_VIRTUAL,
	          __KdNodeList_R1__getNodes,
	          "",
	          "");
	I_Method0(const osg::KdTree::KdNodeList &, getNodes,
	          Properties::NON_VIRTUAL,
	          __C5_KdNodeList_R1__getNodes,
	          "",
	          "");
	I_Method1(void, setVertices, IN, osg::Vec3Array *, vertices,
	          Properties::NON_VIRTUAL,
	          __void__setVertices__osg_Vec3Array_P1,
	          "",
	          "");
	I_Method0(const osg::Vec3Array *, getVertices,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3Array_P1__getVertices,
	          "",
	          "");
	I_Method1(unsigned int, addTriangle, IN, const osg::KdTree::Triangle &, tri,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__addTriangle__C5_Triangle_R1,
	          "",
	          "");
	I_Method1(osg::KdTree::Triangle &, getTriangle, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __Triangle_R1__getTriangle__unsigned_int,
	          "",
	          "");
	I_Method1(const osg::KdTree::Triangle &, getTriangle, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __C5_Triangle_R1__getTriangle__unsigned_int,
	          "",
	          "");
	I_Method0(osg::KdTree::TriangleList &, getTriangles,
	          Properties::NON_VIRTUAL,
	          __TriangleList_R1__getTriangles,
	          "",
	          "");
	I_Method0(const osg::KdTree::TriangleList &, getTriangles,
	          Properties::NON_VIRTUAL,
	          __C5_TriangleList_R1__getTriangles,
	          "",
	          "");
	I_SimpleProperty(osg::KdTree::KdNodeList &, Nodes, 
	                 __KdNodeList_R1__getNodes, 
	                 0);
	I_SimpleProperty(osg::KdTree::TriangleList &, Triangles, 
	                 __TriangleList_R1__getTriangles, 
	                 0);
	I_SimpleProperty(osg::Vec3Array *, Vertices, 
	                 0, 
	                 __void__setVertices__osg_Vec3Array_P1);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::KdTreeBuilder)
	I_DeclaringFile("osg/KdTree");
	I_BaseType(osg::NodeVisitor);
	I_Constructor0(____KdTreeBuilder,
	               "",
	               "");
	I_Constructor1(IN, const osg::KdTreeBuilder &, rhs,
	               Properties::NON_EXPLICIT,
	               ____KdTreeBuilder__C5_KdTreeBuilder_R1,
	               "",
	               "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the library name/namespapce of the visitor's. ",
	          "Should be defined by derived classes. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the visitor's class type. ",
	          "Should be defined by derived classes. ");
	I_Method0(osg::KdTreeBuilder *, clone,
	          Properties::VIRTUAL,
	          __KdTreeBuilder_P1__clone,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Geode &, geode,
	          Properties::VIRTUAL,
	          __void__apply__osg_Geode_R1,
	          "",
	          "");
	I_PublicMemberProperty(osg::KdTree::BuildOptions, _buildOptions);
	I_PublicMemberProperty(osg::ref_ptr< osg::KdTree >, _kdTreePrototype);
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< unsigned int >, osg::KdTree::LineSegmentIntersection::IndexList)

TYPE_NAME_ALIAS(std::vector< double >, osg::KdTree::LineSegmentIntersection::RatioList)

BEGIN_VALUE_REFLECTOR(osg::KdTree::LineSegmentIntersection)
	I_DeclaringFile("osg/KdTree");
	I_Constructor0(____LineSegmentIntersection,
	               "",
	               "");
	I_PublicMemberProperty(double, ratio);
	I_PublicMemberProperty(osg::Vec3d, intersectionPoint);
	I_PublicMemberProperty(osg::Vec3, intersectionNormal);
	I_PublicMemberProperty(unsigned int, p0);
	I_PublicMemberProperty(unsigned int, p1);
	I_PublicMemberProperty(unsigned int, p2);
	I_PublicMemberProperty(float, r0);
	I_PublicMemberProperty(float, r1);
	I_PublicMemberProperty(float, r2);
	I_PublicMemberProperty(unsigned int, primitiveIndex);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::KdTree::Triangle)
	I_DeclaringFile("osg/KdTree");
	I_Constructor0(____Triangle,
	               "",
	               "");
	I_Constructor3(IN, unsigned int, ip0, IN, unsigned int, ip1, IN, unsigned int, ip2,
	               ____Triangle__unsigned_int__unsigned_int__unsigned_int,
	               "",
	               "");
	I_PublicMemberProperty(unsigned int, p0);
	I_PublicMemberProperty(unsigned int, p1);
	I_PublicMemberProperty(unsigned int, p2);
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< double >)

STD_VECTOR_REFLECTOR(std::vector< osg::KdTree::KdNode >)

STD_VECTOR_REFLECTOR(std::vector< osg::KdTree::LineSegmentIntersection >)

STD_VECTOR_REFLECTOR(std::vector< osg::KdTree::Triangle >)

