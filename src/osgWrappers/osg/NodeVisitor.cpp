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

#include <osg/Billboard>
#include <osg/Camera>
#include <osg/CameraView>
#include <osg/ClearNode>
#include <osg/ClipNode>
#include <osg/CoordinateSystemNode>
#include <osg/FrameStamp>
#include <osg/Geode>
#include <osg/Group>
#include <osg/Image>
#include <osg/LOD>
#include <osg/LightSource>
#include <osg/MatrixTransform>
#include <osg/Node>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/OccluderNode>
#include <osg/OcclusionQueryNode>
#include <osg/PagedLOD>
#include <osg/PositionAttitudeTransform>
#include <osg/Projection>
#include <osg/ProxyNode>
#include <osg/Referenced>
#include <osg/Sequence>
#include <osg/Switch>
#include <osg/TexGenNode>
#include <osg/Transform>
#include <osg/Vec3>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::NodeVisitor::DatabaseRequestHandler)
	I_DeclaringFile("osg/NodeVisitor");
	I_BaseType(osg::Referenced);
	I_Constructor0(____DatabaseRequestHandler,
	               "",
	               "");
	I_Method5(void, requestNodeFile, IN, const std::string &, fileName, IN, osg::Group *, group, IN, float, priority, IN, const osg::FrameStamp *, framestamp, IN, osg::ref_ptr< osg::Referenced > &, databaseRequest,
	          Properties::PURE_VIRTUAL,
	          __void__requestNodeFile__C5_std_string_R1__osg_Group_P1__float__C5_FrameStamp_P1__osg_ref_ptrT1_osg_Referenced__R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::NodeVisitor::ImageRequestHandler)
	I_DeclaringFile("osg/NodeVisitor");
	I_BaseType(osg::Referenced);
	I_Constructor0(____ImageRequestHandler,
	               "",
	               "");
	I_Method0(double, getPreLoadTime,
	          Properties::PURE_VIRTUAL,
	          __double__getPreLoadTime,
	          "",
	          "");
	I_Method1(osg::Image *, readImageFile, IN, const std::string &, fileName,
	          Properties::PURE_VIRTUAL,
	          __osg_Image_P1__readImageFile__C5_std_string_R1,
	          "",
	          "");
	I_Method5(void, requestImageFile, IN, const std::string &, fileName, IN, osg::Object *, attachmentPoint, IN, int, attachmentIndex, IN, double, timeToMergeBy, IN, const osg::FrameStamp *, framestamp,
	          Properties::PURE_VIRTUAL,
	          __void__requestImageFile__C5_std_string_R1__osg_Object_P1__int__double__C5_FrameStamp_P1,
	          "",
	          "");
	I_SimpleProperty(double, PreLoadTime, 
	                 __double__getPreLoadTime, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::NodeAcceptOp)
	I_DeclaringFile("osg/NodeVisitor");
	I_Constructor1(IN, osg::NodeVisitor &, nv,
	               Properties::NON_EXPLICIT,
	               ____NodeAcceptOp__NodeVisitor_R1,
	               "",
	               "");
	I_Constructor1(IN, const osg::NodeAcceptOp &, naop,
	               Properties::NON_EXPLICIT,
	               ____NodeAcceptOp__C5_NodeAcceptOp_R1,
	               "",
	               "");
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::NodeVisitor::TraversalMode)
	I_DeclaringFile("osg/NodeVisitor");
	I_EnumLabel(osg::NodeVisitor::TRAVERSE_NONE);
	I_EnumLabel(osg::NodeVisitor::TRAVERSE_PARENTS);
	I_EnumLabel(osg::NodeVisitor::TRAVERSE_ALL_CHILDREN);
	I_EnumLabel(osg::NodeVisitor::TRAVERSE_ACTIVE_CHILDREN);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::NodeVisitor::VisitorType)
	I_DeclaringFile("osg/NodeVisitor");
	I_EnumLabel(osg::NodeVisitor::NODE_VISITOR);
	I_EnumLabel(osg::NodeVisitor::UPDATE_VISITOR);
	I_EnumLabel(osg::NodeVisitor::EVENT_VISITOR);
	I_EnumLabel(osg::NodeVisitor::COLLECT_OCCLUDER_VISITOR);
	I_EnumLabel(osg::NodeVisitor::CULL_VISITOR);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::NodeVisitor)
	I_DeclaringFile("osg/NodeVisitor");
	I_VirtualBaseType(osg::Referenced);
	I_ConstructorWithDefaults1(IN, osg::NodeVisitor::TraversalMode, tm, osg::NodeVisitor::TRAVERSE_NONE,
	                           Properties::NON_EXPLICIT,
	                           ____NodeVisitor__TraversalMode,
	                           "",
	                           "");
	I_ConstructorWithDefaults2(IN, osg::NodeVisitor::VisitorType, type, , IN, osg::NodeVisitor::TraversalMode, tm, osg::NodeVisitor::TRAVERSE_NONE,
	                           ____NodeVisitor__VisitorType__TraversalMode,
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
	I_Method0(void, reset,
	          Properties::VIRTUAL,
	          __void__reset,
	          "Method to call to reset visitor. ",
	          "Useful if your visitor accumulates state during a traversal, and you plan to reuse the visitor. To flush that state for the next traversal: call reset() prior to each traversal. ");
	I_Method1(void, setVisitorType, IN, osg::NodeVisitor::VisitorType, type,
	          Properties::NON_VIRTUAL,
	          __void__setVisitorType__VisitorType,
	          "Set the VisitorType, used to distinguish different visitors during traversal of the scene, typically used in the Node::traverse() method to select which behaviour to use for different types of traversal/visitors. ",
	          "");
	I_Method0(osg::NodeVisitor::VisitorType, getVisitorType,
	          Properties::NON_VIRTUAL,
	          __VisitorType__getVisitorType,
	          "Get the VisitorType. ",
	          "");
	I_Method1(void, setTraversalNumber, IN, int, fn,
	          Properties::NON_VIRTUAL,
	          __void__setTraversalNumber__int,
	          "Set the traversal number. ",
	          "Typically used to denote the frame count. ");
	I_Method0(int, getTraversalNumber,
	          Properties::NON_VIRTUAL,
	          __int__getTraversalNumber,
	          "Get the traversal number. ",
	          "Typically used to denote the frame count. ");
	I_Method1(void, setFrameStamp, IN, osg::FrameStamp *, fs,
	          Properties::NON_VIRTUAL,
	          __void__setFrameStamp__FrameStamp_P1,
	          "Set the FrameStamp that this traversal is associated with. ",
	          "");
	I_Method0(const osg::FrameStamp *, getFrameStamp,
	          Properties::NON_VIRTUAL,
	          __C5_FrameStamp_P1__getFrameStamp,
	          "Get the FrameStamp that this traversal is associated with. ",
	          "");
	I_Method1(void, setTraversalMask, IN, osg::Node::NodeMask, mask,
	          Properties::NON_VIRTUAL,
	          __void__setTraversalMask__Node_NodeMask,
	          "Set the TraversalMask of this NodeVisitor. ",
	          "The TraversalMask is used by the NodeVisitor::validNodeMask() method to determine whether to operate on a node and its subgraph. validNodeMask() is called automatically in the Node::accept() method before any call to NodeVisitor::apply(), apply() is only ever called if validNodeMask returns true. Note, if NodeVisitor::_traversalMask is 0 then all operations will be switched off for all nodes. Whereas setting both _traversalMask and _nodeMaskOverride to 0xffffffff will allow a visitor to work on all nodes regardless of their own Node::_nodeMask state. ");
	I_Method0(osg::Node::NodeMask, getTraversalMask,
	          Properties::NON_VIRTUAL,
	          __Node_NodeMask__getTraversalMask,
	          "Get the TraversalMask. ",
	          "");
	I_Method1(void, setNodeMaskOverride, IN, osg::Node::NodeMask, mask,
	          Properties::NON_VIRTUAL,
	          __void__setNodeMaskOverride__Node_NodeMask,
	          "Set the NodeMaskOverride mask. ",
	          "Used in validNodeMask() to determine whether to operate on a node or its subgraph, by OR'ing NodeVisitor::_nodeMaskOverride with the Node's own Node::_nodeMask. Typically used to force on nodes which may have been switched off by their own Node::_nodeMask. ");
	I_Method0(osg::Node::NodeMask, getNodeMaskOverride,
	          Properties::NON_VIRTUAL,
	          __Node_NodeMask__getNodeMaskOverride,
	          "Get the NodeMaskOverride mask. ",
	          "");
	I_Method1(bool, validNodeMask, IN, const osg::Node &, node,
	          Properties::NON_VIRTUAL,
	          __bool__validNodeMask__C5_osg_Node_R1,
	          "Method to called by Node and its subclass' Node::accept() method, if the result is true it is used to cull operations of nodes and their subgraphs. ",
	          "Return true if the result of a bit wise and of the NodeVisitor::_traversalMask with the bit or between NodeVistor::_nodeMaskOverride and the Node::_nodeMask. default values for _traversalMask is 0xffffffff, _nodeMaskOverride is 0x0, and osg::Node::_nodeMask is 0xffffffff. ");
	I_Method1(void, setTraversalMode, IN, osg::NodeVisitor::TraversalMode, mode,
	          Properties::NON_VIRTUAL,
	          __void__setTraversalMode__TraversalMode,
	          "Set the traversal mode for Node::traverse() to use when deciding which children of a node to traverse. ",
	          "If a NodeVisitor has been attached via setTraverseVisitor() and the new mode is not TRAVERSE_VISITOR then the attached visitor is detached. Default mode is TRAVERSE_NONE. ");
	I_Method0(osg::NodeVisitor::TraversalMode, getTraversalMode,
	          Properties::NON_VIRTUAL,
	          __TraversalMode__getTraversalMode,
	          "Get the traversal mode. ",
	          "");
	I_Method1(void, setUserData, IN, osg::Referenced *, obj,
	          Properties::NON_VIRTUAL,
	          __void__setUserData__Referenced_P1,
	          "Set user data, data must be subclassed from Referenced to allow automatic memory handling. ",
	          "If your own data isn't directly subclassed from Referenced then create an adapter object which points to your own objects and handles the memory addressing. ");
	I_Method0(osg::Referenced *, getUserData,
	          Properties::NON_VIRTUAL,
	          __Referenced_P1__getUserData,
	          "Get user data. ",
	          "");
	I_Method0(const osg::Referenced *, getUserData,
	          Properties::NON_VIRTUAL,
	          __C5_Referenced_P1__getUserData,
	          "Get const user data. ",
	          "");
	I_Method1(void, traverse, IN, osg::Node &, node,
	          Properties::NON_VIRTUAL,
	          __void__traverse__Node_R1,
	          "Method for handling traversal of a nodes. ",
	          "If you intend to use the visitor for actively traversing the scene graph then make sure the accept() methods call this method unless they handle traversal directly. ");
	I_Method1(void, pushOntoNodePath, IN, osg::Node *, node,
	          Properties::NON_VIRTUAL,
	          __void__pushOntoNodePath__Node_P1,
	          "Method called by osg::Node::accept() method before a call to the NodeVisitor::apply(..). ",
	          "The back of the list will, therefore, be the current node being visited inside the apply(..), and the rest of the list will be the parental sequence of nodes from the top most node applied down the graph to the current node. Note, the user does not typically call pushNodeOnPath() as it will be called automatically by the Node::accept() method. ");
	I_Method0(void, popFromNodePath,
	          Properties::NON_VIRTUAL,
	          __void__popFromNodePath,
	          "Method called by osg::Node::accept() method after a call to NodeVisitor::apply(..). ",
	          "Note, the user does not typically call popFromNodePath() as it will be called automatically by the Node::accept() method. ");
	I_Method0(osg::NodePath &, getNodePath,
	          Properties::NON_VIRTUAL,
	          __NodePath_R1__getNodePath,
	          "Get the non const NodePath from the top most node applied down to the current Node being visited. ",
	          "");
	I_Method0(const osg::NodePath &, getNodePath,
	          Properties::NON_VIRTUAL,
	          __C5_NodePath_R1__getNodePath,
	          "Get the const NodePath from the top most node applied down to the current Node being visited. ",
	          "");
	I_Method0(osg::Vec3, getEyePoint,
	          Properties::VIRTUAL,
	          __osg_Vec3__getEyePoint,
	          "Get the eye point in local coordinates. ",
	          "Note, not all NodeVisitor implement this method, it is mainly cull visitors which will implement. ");
	I_Method0(osg::Vec3, getViewPoint,
	          Properties::VIRTUAL,
	          __osg_Vec3__getViewPoint,
	          "Get the view point in local coordinates. ",
	          "Note, not all NodeVisitor implement this method, it is mainly cull visitors which will implement. ");
	I_Method2(float, getDistanceToEyePoint, IN, const osg::Vec3 &, x, IN, bool, x,
	          Properties::VIRTUAL,
	          __float__getDistanceToEyePoint__C5_Vec3_R1__bool,
	          "Get the distance from a point to the eye point, distance value in local coordinate system. ",
	          "Note, not all NodeVisitor implement this method, it is mainly cull visitors which will implement. If the getDistanceFromEyePoint(pos) is not implemented then a default value of 0.0 is returned. ");
	I_Method2(float, getDistanceFromEyePoint, IN, const osg::Vec3 &, x, IN, bool, x,
	          Properties::VIRTUAL,
	          __float__getDistanceFromEyePoint__C5_Vec3_R1__bool,
	          "Get the distance of a point from the eye point, distance value in the eye coordinate system. ",
	          "Note, not all NodeVisitor implement this method, it is mainly cull visitors which will implement. If the getDistanceFromEyePoint(pos) is not implemented than a default value of 0.0 is returned. ");
	I_Method2(float, getDistanceToViewPoint, IN, const osg::Vec3 &, x, IN, bool, x,
	          Properties::VIRTUAL,
	          __float__getDistanceToViewPoint__C5_Vec3_R1__bool,
	          "Get the distance from a point to the view point, distance value in local coordinate system. ",
	          "Note, not all NodeVisitor implement this method, it is mainly cull visitors which will implement. If the getDistanceToViewPoint(pos) is not implemented then a default value of 0.0 is returned. ");
	I_Method1(void, apply, IN, osg::Node &, node,
	          Properties::VIRTUAL,
	          __void__apply__Node_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Geode &, node,
	          Properties::VIRTUAL,
	          __void__apply__Geode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Billboard &, node,
	          Properties::VIRTUAL,
	          __void__apply__Billboard_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Group &, node,
	          Properties::VIRTUAL,
	          __void__apply__Group_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::ProxyNode &, node,
	          Properties::VIRTUAL,
	          __void__apply__ProxyNode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Projection &, node,
	          Properties::VIRTUAL,
	          __void__apply__Projection_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::CoordinateSystemNode &, node,
	          Properties::VIRTUAL,
	          __void__apply__CoordinateSystemNode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::ClipNode &, node,
	          Properties::VIRTUAL,
	          __void__apply__ClipNode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::TexGenNode &, node,
	          Properties::VIRTUAL,
	          __void__apply__TexGenNode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::LightSource &, node,
	          Properties::VIRTUAL,
	          __void__apply__LightSource_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Transform &, node,
	          Properties::VIRTUAL,
	          __void__apply__Transform_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Camera &, node,
	          Properties::VIRTUAL,
	          __void__apply__Camera_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::CameraView &, node,
	          Properties::VIRTUAL,
	          __void__apply__CameraView_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::MatrixTransform &, node,
	          Properties::VIRTUAL,
	          __void__apply__MatrixTransform_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::PositionAttitudeTransform &, node,
	          Properties::VIRTUAL,
	          __void__apply__PositionAttitudeTransform_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Switch &, node,
	          Properties::VIRTUAL,
	          __void__apply__Switch_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Sequence &, node,
	          Properties::VIRTUAL,
	          __void__apply__Sequence_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::LOD &, node,
	          Properties::VIRTUAL,
	          __void__apply__LOD_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::PagedLOD &, node,
	          Properties::VIRTUAL,
	          __void__apply__PagedLOD_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::ClearNode &, node,
	          Properties::VIRTUAL,
	          __void__apply__ClearNode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::OccluderNode &, node,
	          Properties::VIRTUAL,
	          __void__apply__OccluderNode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::OcclusionQueryNode &, node,
	          Properties::VIRTUAL,
	          __void__apply__OcclusionQueryNode_R1,
	          "",
	          "");
	I_Method1(void, setDatabaseRequestHandler, IN, osg::NodeVisitor::DatabaseRequestHandler *, handler,
	          Properties::NON_VIRTUAL,
	          __void__setDatabaseRequestHandler__DatabaseRequestHandler_P1,
	          "Set the handler for database requests. ",
	          "");
	I_Method0(osg::NodeVisitor::DatabaseRequestHandler *, getDatabaseRequestHandler,
	          Properties::NON_VIRTUAL,
	          __DatabaseRequestHandler_P1__getDatabaseRequestHandler,
	          "Get the handler for database requests. ",
	          "");
	I_Method0(const osg::NodeVisitor::DatabaseRequestHandler *, getDatabaseRequestHandler,
	          Properties::NON_VIRTUAL,
	          __C5_DatabaseRequestHandler_P1__getDatabaseRequestHandler,
	          "Get the const handler for database requests. ",
	          "");
	I_Method1(void, setImageRequestHandler, IN, osg::NodeVisitor::ImageRequestHandler *, handler,
	          Properties::NON_VIRTUAL,
	          __void__setImageRequestHandler__ImageRequestHandler_P1,
	          "Set the handler for image requests. ",
	          "");
	I_Method0(osg::NodeVisitor::ImageRequestHandler *, getImageRequestHandler,
	          Properties::NON_VIRTUAL,
	          __ImageRequestHandler_P1__getImageRequestHandler,
	          "Get the handler for image requests. ",
	          "");
	I_Method0(const osg::NodeVisitor::ImageRequestHandler *, getImageRequestHandler,
	          Properties::NON_VIRTUAL,
	          __C5_ImageRequestHandler_P1__getImageRequestHandler,
	          "Get the const handler for image requests. ",
	          "");
	I_SimpleProperty(osg::NodeVisitor::DatabaseRequestHandler *, DatabaseRequestHandler, 
	                 __DatabaseRequestHandler_P1__getDatabaseRequestHandler, 
	                 __void__setDatabaseRequestHandler__DatabaseRequestHandler_P1);
	I_SimpleProperty(osg::Vec3, EyePoint, 
	                 __osg_Vec3__getEyePoint, 
	                 0);
	I_SimpleProperty(osg::FrameStamp *, FrameStamp, 
	                 0, 
	                 __void__setFrameStamp__FrameStamp_P1);
	I_SimpleProperty(osg::NodeVisitor::ImageRequestHandler *, ImageRequestHandler, 
	                 __ImageRequestHandler_P1__getImageRequestHandler, 
	                 __void__setImageRequestHandler__ImageRequestHandler_P1);
	I_SimpleProperty(osg::Node::NodeMask, NodeMaskOverride, 
	                 __Node_NodeMask__getNodeMaskOverride, 
	                 __void__setNodeMaskOverride__Node_NodeMask);
	I_SimpleProperty(osg::NodePath &, NodePath, 
	                 __NodePath_R1__getNodePath, 
	                 0);
	I_SimpleProperty(osg::Node::NodeMask, TraversalMask, 
	                 __Node_NodeMask__getTraversalMask, 
	                 __void__setTraversalMask__Node_NodeMask);
	I_SimpleProperty(osg::NodeVisitor::TraversalMode, TraversalMode, 
	                 __TraversalMode__getTraversalMode, 
	                 __void__setTraversalMode__TraversalMode);
	I_SimpleProperty(int, TraversalNumber, 
	                 __int__getTraversalNumber, 
	                 __void__setTraversalNumber__int);
	I_SimpleProperty(osg::Referenced *, UserData, 
	                 __Referenced_P1__getUserData, 
	                 __void__setUserData__Referenced_P1);
	I_SimpleProperty(osg::Vec3, ViewPoint, 
	                 __osg_Vec3__getViewPoint, 
	                 0);
	I_SimpleProperty(osg::NodeVisitor::VisitorType, VisitorType, 
	                 __VisitorType__getVisitorType, 
	                 __void__setVisitorType__VisitorType);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osg::Referenced >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osg::Referenced *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osg::Referenced > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osg::Referenced *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osg::Referenced *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osg::Referenced > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osg::Referenced *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

