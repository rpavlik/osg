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

#include <OpenThreads/Mutex>
#include <osg/GraphicsContext>
#include <osg/GraphicsThread>
#include <osg/Object>
#include <osg/OperationThread>
#include <osg/State>
#include <osg/Vec4>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

#include <osg/Camera>
	
TYPE_NAME_ALIAS(std::vector< osg::GraphicsContext::ScreenSettings >, osg::GraphicsContext::ScreenSettingsList)

TYPE_NAME_ALIAS(std::vector< osg::GraphicsContext * >, osg::GraphicsContext::GraphicsContexts)

TYPE_NAME_ALIAS(std::list< osg::ref_ptr< osg::Operation > >, osg::GraphicsContext::OperationQueue)

TYPE_NAME_ALIAS(std::list< osg::Camera * >, osg::GraphicsContext::Cameras)

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::GraphicsContext)
	I_DeclaringFile("osg/GraphicsContext");
	I_BaseType(osg::Object);
	I_StaticMethod1(void, setWindowingSystemInterface, IN, osg::GraphicsContext::WindowingSystemInterface *, wsInterface,
	                __void__setWindowingSystemInterface__WindowingSystemInterface_P1_S,
	                "Set the query the windowing system for screens and create graphics context - this functor should be supplied by the windows toolkit. ",
	                "");
	I_StaticMethod0(osg::GraphicsContext::WindowingSystemInterface *, getWindowingSystemInterface,
	                __WindowingSystemInterface_P1__getWindowingSystemInterface_S,
	                "Get the WindowingSystemInterface. ",
	                "");
	I_StaticMethod1(osg::GraphicsContext *, createGraphicsContext, IN, osg::GraphicsContext::Traits *, traits,
	                __GraphicsContext_P1__createGraphicsContext__Traits_P1_S,
	                "Create a graphics context for a specified set of traits. ",
	                "");
	I_StaticMethod0(unsigned int, createNewContextID,
	                __unsigned_int__createNewContextID_S,
	                "Create a contextID for a new graphics context, this contextID is used to set up the osg::State associate with context. ",
	                "Automatically increments the usage count of the contextID to 1. ");
	I_StaticMethod0(unsigned int, getMaxContextID,
	                __unsigned_int__getMaxContextID_S,
	                "Get the current max ContextID. ",
	                "");
	I_StaticMethod1(void, incrementContextIDUsageCount, IN, unsigned int, contextID,
	                __void__incrementContextIDUsageCount__unsigned_int_S,
	                "Increment the usage count associate with a contextID. ",
	                "The usage count specifies how many graphics contexts a specific contextID is shared between. ");
	I_StaticMethod1(void, decrementContextIDUsageCount, IN, unsigned int, contextID,
	                __void__decrementContextIDUsageCount__unsigned_int_S,
	                "Decrement the usage count associate with a contextID. ",
	                "Once the contextID goes to 0 the contextID is then free to be reused. ");
	I_StaticMethod0(osg::GraphicsContext::GraphicsContexts, getAllRegisteredGraphicsContexts,
	                __GraphicsContexts__getAllRegisteredGraphicsContexts_S,
	                "Get all the registered graphics contexts. ",
	                "");
	I_StaticMethod1(osg::GraphicsContext::GraphicsContexts, getRegisteredGraphicsContexts, IN, unsigned int, contextID,
	                __GraphicsContexts__getRegisteredGraphicsContexts__unsigned_int_S,
	                "Get all the registered graphics contexts associated with a specific contextID. ",
	                "");
	I_StaticMethod2(void, setCompileContext, IN, unsigned int, contextID, IN, osg::GraphicsContext *, gc,
	                __void__setCompileContext__unsigned_int__GraphicsContext_P1_S,
	                "Get the GraphicsContext for doing background compilation for GraphicsContexts associated with specified contextID. ",
	                "");
	I_StaticMethod1(osg::GraphicsContext *, getOrCreateCompileContext, IN, unsigned int, contextID,
	                __GraphicsContext_P1__getOrCreateCompileContext__unsigned_int_S,
	                "Get existing or create a new GraphicsContext to do background compilation for GraphicsContexts associated with specified contextID. ",
	                "");
	I_StaticMethod1(osg::GraphicsContext *, getCompileContext, IN, unsigned int, contextID,
	                __GraphicsContext_P1__getCompileContext__unsigned_int_S,
	                "Get the GraphicsContext for doing background compilation for GraphicsContexts associated with specified contextID. ",
	                "");
	I_Method1(void, add, IN, osg::Operation *, operation,
	          Properties::NON_VIRTUAL,
	          __void__add__Operation_P1,
	          "Add operation to end of OperationQueue. ",
	          "");
	I_Method1(void, remove, IN, osg::Operation *, operation,
	          Properties::NON_VIRTUAL,
	          __void__remove__Operation_P1,
	          "Remove operation from OperationQueue. ",
	          "");
	I_Method1(void, remove, IN, const std::string &, name,
	          Properties::NON_VIRTUAL,
	          __void__remove__C5_std_string_R1,
	          "Remove named operation from OperationQueue. ",
	          "");
	I_Method0(void, removeAllOperations,
	          Properties::NON_VIRTUAL,
	          __void__removeAllOperations,
	          "Remove all operations from OperationQueue. ",
	          "");
	I_Method0(void, runOperations,
	          Properties::NON_VIRTUAL,
	          __void__runOperations,
	          "Run the operations. ",
	          "");
	I_Method0(osg::GraphicsContext::OperationQueue &, getOperationsQueue,
	          Properties::NON_VIRTUAL,
	          __OperationQueue_R1__getOperationsQueue,
	          "Get the operations queue, not you must use the OperationsMutex when accessing the queue. ",
	          "");
	I_Method0(OpenThreads::Mutex *, getOperationsMutex,
	          Properties::NON_VIRTUAL,
	          __OpenThreads_Mutex_P1__getOperationsMutex,
	          "Get the operations queue mutex. ",
	          "");
	I_Method0(osg::RefBlock *, getOperationsBlock,
	          Properties::NON_VIRTUAL,
	          __osg_RefBlock_P1__getOperationsBlock,
	          "Get the operations queue block used to mark an empty queue, if you end items into the empty queue you must release this block. ",
	          "");
	I_Method0(osg::Operation *, getCurrentOperation,
	          Properties::NON_VIRTUAL,
	          __Operation_P1__getCurrentOperation,
	          "Get the current operations that is being run. ",
	          "");
	I_Method0(const osg::GraphicsContext::Traits *, getTraits,
	          Properties::NON_VIRTUAL,
	          __C5_Traits_P1__getTraits,
	          "Get the traits of the GraphicsContext. ",
	          "");
	I_Method0(bool, valid,
	          Properties::PURE_VIRTUAL,
	          __bool__valid,
	          "Return whether a valid and usable GraphicsContext has been created. ",
	          "");
	I_Method1(void, setState, IN, osg::State *, state,
	          Properties::NON_VIRTUAL,
	          __void__setState__State_P1,
	          "Set the State object which tracks the current OpenGL state for this graphics context. ",
	          "");
	I_Method0(osg::State *, getState,
	          Properties::NON_VIRTUAL,
	          __State_P1__getState,
	          "Get the State object which tracks the current OpenGL state for this graphics context. ",
	          "");
	I_Method0(const osg::State *, getState,
	          Properties::NON_VIRTUAL,
	          __C5_State_P1__getState,
	          "Get the const State object which tracks the current OpenGL state for this graphics context. ",
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
	          "Defaults to 0 - so no clear is done by default by the GraphicsContext, instead the Camera's attached the GraphicsContext will do the clear. GraphicsContext::setClearMask() is useful for when the Camera's Viewports don't conver the whole context, so the context will fill in the gaps. ");
	I_Method0(GLbitfield, getClearMask,
	          Properties::NON_VIRTUAL,
	          __GLbitfield__getClearMask,
	          "Get the clear mask. ",
	          "");
	I_Method0(void, clear,
	          Properties::VIRTUAL,
	          __void__clear,
	          "Do an OpenGL clear of the full graphics context/window. ",
	          "Note, must only be called from a thread with this context current. ");
	I_Method0(bool, realize,
	          Properties::NON_VIRTUAL,
	          __bool__realize,
	          "Realize the GraphicsContext. ",
	          "");
	I_MethodWithDefaults1(void, close, IN, bool, callCloseImplementation, true,
	                      Properties::NON_VIRTUAL,
	                      __void__close__bool,
	                      "close the graphics context. ",
	                      "close(bool) stops any associated graphics threads, releases the contextID for the GraphicsContext then optional calls closeImplementation() to do the actual deletion of the graphics. This call is made optional as there are times when the graphics context has already been deleted externally and only the OSG side of the its data need to be closed down. ");
	I_Method0(void, swapBuffers,
	          Properties::NON_VIRTUAL,
	          __void__swapBuffers,
	          "swap the front and back buffers. ",
	          "");
	I_Method0(bool, isRealized,
	          Properties::NON_VIRTUAL,
	          __bool__isRealized,
	          "Return true if the graphics context has been realized and is ready to use. ",
	          "");
	I_Method0(bool, makeCurrent,
	          Properties::NON_VIRTUAL,
	          __bool__makeCurrent,
	          "Make this graphics context current. ",
	          "Implemented by calling makeCurrentImplementation(). Returns true on success. ");
	I_Method1(bool, makeContextCurrent, IN, osg::GraphicsContext *, readContext,
	          Properties::NON_VIRTUAL,
	          __bool__makeContextCurrent__GraphicsContext_P1,
	          "Make this graphics context current with specified read context. ",
	          "Implemented by calling makeContextCurrentImplementation(). Returns true on success. ");
	I_Method0(bool, releaseContext,
	          Properties::NON_VIRTUAL,
	          __bool__releaseContext,
	          "Release the graphics context. ",
	          "Returns true on success. ");
	I_Method0(bool, isCurrent,
	          Properties::NON_VIRTUAL,
	          __bool__isCurrent,
	          "Return true if the current thread has this OpenGL graphics context. ",
	          "");
	I_Method1(void, bindPBufferToTexture, IN, GLenum, buffer,
	          Properties::NON_VIRTUAL,
	          __void__bindPBufferToTexture__GLenum,
	          "Bind the graphics context to associated texture. ",
	          "");
	I_Method0(void, createGraphicsThread,
	          Properties::NON_VIRTUAL,
	          __void__createGraphicsThread,
	          "Create a graphics thread to the graphics context, so that the thread handles all OpenGL operations. ",
	          "");
	I_Method1(void, setGraphicsThread, IN, osg::GraphicsThread *, gt,
	          Properties::NON_VIRTUAL,
	          __void__setGraphicsThread__GraphicsThread_P1,
	          "Assign a graphics thread to the graphics context, so that the thread handles all OpenGL operations. ",
	          "");
	I_Method0(osg::GraphicsThread *, getGraphicsThread,
	          Properties::NON_VIRTUAL,
	          __GraphicsThread_P1__getGraphicsThread,
	          "Get the graphics thread assigned the graphics context. ",
	          "");
	I_Method0(const osg::GraphicsThread *, getGraphicsThread,
	          Properties::NON_VIRTUAL,
	          __C5_GraphicsThread_P1__getGraphicsThread,
	          "Get the const graphics thread assigned the graphics context. ",
	          "");
	I_Method0(bool, realizeImplementation,
	          Properties::PURE_VIRTUAL,
	          __bool__realizeImplementation,
	          "Realize the GraphicsContext implementation, Pure virtual - must be implemented by concrete implementations of GraphicsContext. ",
	          "");
	I_Method0(bool, isRealizedImplementation,
	          Properties::PURE_VIRTUAL,
	          __bool__isRealizedImplementation,
	          "Return true if the graphics context has been realized, and is ready to use, implementation. ",
	          "Pure virtual - must be implemented by concrete implementations of GraphicsContext. ");
	I_Method0(void, closeImplementation,
	          Properties::PURE_VIRTUAL,
	          __void__closeImplementation,
	          "Close the graphics context implementation. ",
	          "Pure virtual - must be implemented by concrete implementations of GraphicsContext. ");
	I_Method0(bool, makeCurrentImplementation,
	          Properties::PURE_VIRTUAL,
	          __bool__makeCurrentImplementation,
	          "Make this graphics context current implementation. ",
	          "Pure virtual - must be implemented by concrete implementations of GraphicsContext. ");
	I_Method1(bool, makeContextCurrentImplementation, IN, osg::GraphicsContext *, readContext,
	          Properties::PURE_VIRTUAL,
	          __bool__makeContextCurrentImplementation__GraphicsContext_P1,
	          "Make this graphics context current with specified read context implementation. ",
	          "Pure virtual - must be implemented by concrete implementations of GraphicsContext. ");
	I_Method0(bool, releaseContextImplementation,
	          Properties::PURE_VIRTUAL,
	          __bool__releaseContextImplementation,
	          "Release the graphics context implementation. ",
	          "");
	I_Method1(void, bindPBufferToTextureImplementation, IN, GLenum, buffer,
	          Properties::PURE_VIRTUAL,
	          __void__bindPBufferToTextureImplementation__GLenum,
	          "Pure virtual, Bind the graphics context to associated texture implementation. ",
	          "Pure virtual - must be implemented by concrete implementations of GraphicsContext. ");
	I_Method0(void, swapBuffersImplementation,
	          Properties::PURE_VIRTUAL,
	          __void__swapBuffersImplementation,
	          "Swap the front and back buffers implementation. ",
	          "Pure virtual - must be implemented by concrete implementations of GraphicsContext. ");
	I_Method4(void, resized, IN, int, x, IN, int, y, IN, int, width, IN, int, height,
	          Properties::NON_VIRTUAL,
	          __void__resized__int__int__int__int,
	          "resized method should be called when the underlying window has been resized and the GraphicsWindow and associated Cameras must be updated to keep in sync with the new size. ",
	          "");
	I_Method1(void, setResizedCallback, IN, osg::GraphicsContext::ResizedCallback *, rc,
	          Properties::NON_VIRTUAL,
	          __void__setResizedCallback__ResizedCallback_P1,
	          "Set the resized callback which overrides the GraphicsConext::realizedImplementation(), allow developers to provide custom behavior in response to a window being resized. ",
	          "");
	I_Method0(osg::GraphicsContext::ResizedCallback *, getResizedCallback,
	          Properties::NON_VIRTUAL,
	          __ResizedCallback_P1__getResizedCallback,
	          "Get the resized callback which overrides the GraphicsConext::realizedImplementation(). ",
	          "");
	I_Method0(const osg::GraphicsContext::ResizedCallback *, getResizedCallback,
	          Properties::NON_VIRTUAL,
	          __C5_ResizedCallback_P1__getResizedCallback,
	          "Get the const resized callback which overrides the GraphicsConext::realizedImplementation(). ",
	          "");
	I_Method4(void, resizedImplementation, IN, int, x, IN, int, y, IN, int, width, IN, int, height,
	          Properties::VIRTUAL,
	          __void__resizedImplementation__int__int__int__int,
	          "resized implementation, by default resizes the viewports and aspect ratios the cameras associated with the graphics Window. ",
	          "");
	I_Method0(osg::GraphicsContext::Cameras &, getCameras,
	          Properties::NON_VIRTUAL,
	          __Cameras_R1__getCameras,
	          "Get the the list of cameras associated with this graphics context. ",
	          "");
	I_Method0(const osg::GraphicsContext::Cameras &, getCameras,
	          Properties::NON_VIRTUAL,
	          __C5_Cameras_R1__getCameras,
	          "Get the the const list of cameras associated with this graphics context. ",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, object,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_Object_P1,
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
	I_ProtectedConstructor0(____GraphicsContext,
	                        "",
	                        "");
	I_ProtectedConstructor2(IN, const osg::GraphicsContext &, x, IN, const osg::CopyOp &, x,
	                        ____GraphicsContext__C5_GraphicsContext_R1__C5_osg_CopyOp_R1,
	                        "",
	                        "");
	I_ProtectedMethod0(osg::Object *, cloneType,
	                   Properties::VIRTUAL,
	                   Properties::CONST,
	                   __Object_P1__cloneType,
	                   "Clone the type of an object, with Object* return type. ",
	                   "Must be defined by derived classes. ");
	I_ProtectedMethod1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	                   Properties::VIRTUAL,
	                   Properties::CONST,
	                   __Object_P1__clone__C5_CopyOp_R1,
	                   "Clone an object, with Object* return type. ",
	                   "Must be defined by derived classes. ");
	I_ProtectedMethod1(void, addCamera, IN, osg::Camera *, camera,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__addCamera__osg_Camera_P1,
	                   "",
	                   "");
	I_ProtectedMethod1(void, removeCamera, IN, osg::Camera *, camera,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__removeCamera__osg_Camera_P1,
	                   "",
	                   "");
	I_SimpleProperty(osg::GraphicsContext::Cameras &, Cameras, 
	                 __Cameras_R1__getCameras, 
	                 0);
	I_SimpleProperty(const osg::Vec4 &, ClearColor, 
	                 __C5_Vec4_R1__getClearColor, 
	                 __void__setClearColor__C5_Vec4_R1);
	I_SimpleProperty(GLbitfield, ClearMask, 
	                 __GLbitfield__getClearMask, 
	                 __void__setClearMask__GLbitfield);
	I_SimpleProperty(osg::Operation *, CurrentOperation, 
	                 __Operation_P1__getCurrentOperation, 
	                 0);
	I_SimpleProperty(osg::GraphicsThread *, GraphicsThread, 
	                 __GraphicsThread_P1__getGraphicsThread, 
	                 __void__setGraphicsThread__GraphicsThread_P1);
	I_SimpleProperty(osg::RefBlock *, OperationsBlock, 
	                 __osg_RefBlock_P1__getOperationsBlock, 
	                 0);
	I_SimpleProperty(OpenThreads::Mutex *, OperationsMutex, 
	                 __OpenThreads_Mutex_P1__getOperationsMutex, 
	                 0);
	I_SimpleProperty(osg::GraphicsContext::OperationQueue &, OperationsQueue, 
	                 __OperationQueue_R1__getOperationsQueue, 
	                 0);
	I_SimpleProperty(osg::GraphicsContext::ResizedCallback *, ResizedCallback, 
	                 __ResizedCallback_P1__getResizedCallback, 
	                 __void__setResizedCallback__ResizedCallback_P1);
	I_SimpleProperty(osg::State *, State, 
	                 __State_P1__getState, 
	                 __void__setState__State_P1);
	I_SimpleProperty(const osg::GraphicsContext::Traits *, Traits, 
	                 __C5_Traits_P1__getTraits, 
	                 0);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::GraphicsContext::ResizedCallback)
	I_DeclaringFile("osg/GraphicsContext");
	I_BaseType(osg::Referenced);
	I_Constructor0(____ResizedCallback,
	               "",
	               "");
	I_Method5(void, resizedImplementation, IN, osg::GraphicsContext *, gc, IN, int, x, IN, int, y, IN, int, width, IN, int, height,
	          Properties::PURE_VIRTUAL,
	          __void__resizedImplementation__GraphicsContext_P1__int__int__int__int,
	          "",
	          "");
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::GraphicsContext::ScreenIdentifier)
	I_DeclaringFile("osg/GraphicsContext");
	I_Constructor0(____ScreenIdentifier,
	               "",
	               "");
	I_Constructor1(IN, int, in_screenNum,
	               Properties::NON_EXPLICIT,
	               ____ScreenIdentifier__int,
	               "",
	               "");
	I_Constructor3(IN, const std::string &, in_hostName, IN, int, in_displayNum, IN, int, in_screenNum,
	               ____ScreenIdentifier__C5_std_string_R1__int__int,
	               "",
	               "");
	I_Method0(std::string, displayName,
	          Properties::NON_VIRTUAL,
	          __std_string__displayName,
	          "Return the display name in the form hostName::displayNum:screenNum. ",
	          "");
	I_Method0(void, readDISPLAY,
	          Properties::NON_VIRTUAL,
	          __void__readDISPLAY,
	          "Read the DISPLAY environmental variable, and set the ScreenIdentifier accordingly. ",
	          "Note, if either of displayNum or screenNum are not defined then -1 is set respectively to signify the this parameter has not been set. When parameters are undefined one can call call setUndefinedScreenDetalstoDefaultScreen() method after readDISPLAY() to ensure valid values. ");
	I_Method1(void, setScreenIdentifier, IN, const std::string &, displayName,
	          Properties::NON_VIRTUAL,
	          __void__setScreenIdentifier__C5_std_string_R1,
	          "Set the screenIndentifier from the displayName string. ",
	          "Note, if either of displayNum or screenNum are not defined then -1 is set respectively to signify the this parameter has not been set. When parameters are undefined one can call call setUndefinedScreenDetalstoDefaultScreen() method after readDISPLAY() to ensure valid values. ");
	I_Method0(void, setUndefinedScreenDetailsToDefaultScreen,
	          Properties::NON_VIRTUAL,
	          __void__setUndefinedScreenDetailsToDefaultScreen,
	          "Set any undefined displayNum or screenNum values (i.e. ",
	          "-1) to the default display & screen of 0 respectively. ");
	I_SimpleProperty(const std::string &, ScreenIdentifier, 
	                 0, 
	                 __void__setScreenIdentifier__C5_std_string_R1);
	I_PublicMemberProperty(std::string, hostName);
	I_PublicMemberProperty(int, displayNum);
	I_PublicMemberProperty(int, screenNum);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::GraphicsContext::ScreenSettings)
	I_DeclaringFile("osg/GraphicsContext");
	I_Constructor0(____ScreenSettings,
	               "",
	               "");
	I_ConstructorWithDefaults4(IN, int, width, , IN, int, height, , IN, double, refreshRate, 0, IN, unsigned int, colorDepth, 0,
	                           ____ScreenSettings__int__int__double__unsigned_int,
	                           "",
	                           "");
	I_PublicMemberProperty(int, width);
	I_PublicMemberProperty(int, height);
	I_PublicMemberProperty(double, refreshRate);
	I_PublicMemberProperty(unsigned int, colorDepth);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::GraphicsContext::Traits)
	I_DeclaringFile("osg/GraphicsContext");
	I_BaseType(osg::Referenced);
	I_BaseType(osg::GraphicsContext::ScreenIdentifier);
	I_Constructor0(____Traits,
	               "",
	               "");
	I_PublicMemberProperty(int, x);
	I_PublicMemberProperty(int, y);
	I_PublicMemberProperty(int, width);
	I_PublicMemberProperty(int, height);
	I_PublicMemberProperty(std::string, windowName);
	I_PublicMemberProperty(bool, windowDecoration);
	I_PublicMemberProperty(bool, supportsResize);
	I_PublicMemberProperty(unsigned int, red);
	I_PublicMemberProperty(unsigned int, blue);
	I_PublicMemberProperty(unsigned int, green);
	I_PublicMemberProperty(unsigned int, alpha);
	I_PublicMemberProperty(unsigned int, depth);
	I_PublicMemberProperty(unsigned int, stencil);
	I_PublicMemberProperty(unsigned int, sampleBuffers);
	I_PublicMemberProperty(unsigned int, samples);
	I_PublicMemberProperty(bool, pbuffer);
	I_PublicMemberProperty(bool, quadBufferStereo);
	I_PublicMemberProperty(bool, doubleBuffer);
	I_PublicMemberProperty(GLenum, target);
	I_PublicMemberProperty(GLenum, format);
	I_PublicMemberProperty(unsigned int, level);
	I_PublicMemberProperty(unsigned int, face);
	I_PublicMemberProperty(unsigned int, mipMapGeneration);
	I_PublicMemberProperty(bool, vsync);
	I_PublicMemberProperty(bool, useMultiThreadedOpenGLEngine);
	I_PublicMemberProperty(bool, useCursor);
	I_PublicMemberProperty(osg::GraphicsContext *, sharedContext);
	I_PublicMemberProperty(osg::ref_ptr< osg::Referenced >, inheritedWindowData);
	I_PublicMemberProperty(bool, setInheritedWindowPixelFormat);
	I_PublicMemberProperty(bool, overrideRedirect);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::GraphicsContext::WindowingSystemInterface)
	I_DeclaringFile("osg/GraphicsContext");
	I_BaseType(osg::Referenced);
	I_Constructor0(____WindowingSystemInterface,
	               "",
	               "");
	I_MethodWithDefaults1(unsigned int, getNumScreens, IN, const osg::GraphicsContext::ScreenIdentifier &, screenIdentifier, osg::GraphicsContext::ScreenIdentifier(),
	                      Properties::PURE_VIRTUAL,
	                      __unsigned_int__getNumScreens__C5_ScreenIdentifier_R1,
	                      "",
	                      "");
	I_Method2(void, getScreenSettings, IN, const osg::GraphicsContext::ScreenIdentifier &, screenIdentifier, IN, osg::GraphicsContext::ScreenSettings &, resolution,
	          Properties::PURE_VIRTUAL,
	          __void__getScreenSettings__C5_ScreenIdentifier_R1__ScreenSettings_R1,
	          "",
	          "");
	I_Method2(bool, setScreenSettings, IN, const osg::GraphicsContext::ScreenIdentifier &, x, IN, const osg::GraphicsContext::ScreenSettings &, x,
	          Properties::VIRTUAL,
	          __bool__setScreenSettings__C5_ScreenIdentifier_R1__C5_ScreenSettings_R1,
	          "",
	          "");
	I_Method2(void, enumerateScreenSettings, IN, const osg::GraphicsContext::ScreenIdentifier &, screenIdentifier, IN, osg::GraphicsContext::ScreenSettingsList &, resolutionList,
	          Properties::PURE_VIRTUAL,
	          __void__enumerateScreenSettings__C5_ScreenIdentifier_R1__ScreenSettingsList_R1,
	          "",
	          "");
	I_Method1(osg::GraphicsContext *, createGraphicsContext, IN, osg::GraphicsContext::Traits *, traits,
	          Properties::PURE_VIRTUAL,
	          __GraphicsContext_P1__createGraphicsContext__Traits_P1,
	          "",
	          "");
	I_Method3(void, getScreenResolution, IN, const osg::GraphicsContext::ScreenIdentifier &, screenIdentifier, IN, unsigned int &, width, IN, unsigned int &, height,
	          Properties::NON_VIRTUAL,
	          __void__getScreenResolution__C5_ScreenIdentifier_R1__unsigned_int_R1__unsigned_int_R1,
	          "Gets screen resolution without using the ScreenResolution structure. ",
	          "");
	I_Method3(bool, setScreenResolution, IN, const osg::GraphicsContext::ScreenIdentifier &, screenIdentifier, IN, unsigned int, width, IN, unsigned int, height,
	          Properties::NON_VIRTUAL,
	          __bool__setScreenResolution__C5_ScreenIdentifier_R1__unsigned_int__unsigned_int,
	          "Sets screen resolution without using the ScreenSettings structure. ",
	          "");
	I_Method2(bool, setScreenRefreshRate, IN, const osg::GraphicsContext::ScreenIdentifier &, screenIdentifier, IN, double, refreshRate,
	          Properties::NON_VIRTUAL,
	          __bool__setScreenRefreshRate__C5_ScreenIdentifier_R1__double,
	          "",
	          "");
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osg::Operation >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osg::Operation *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osg::Operation > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osg::Operation *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osg::Operation *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osg::Operation > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osg::Operation *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_LIST_REFLECTOR(std::list< osg::Camera * >)

STD_LIST_REFLECTOR(std::list< osg::ref_ptr< osg::Operation > >)

STD_VECTOR_REFLECTOR(std::vector< osg::GraphicsContext * >)

STD_VECTOR_REFLECTOR(std::vector< osg::GraphicsContext::ScreenSettings >)

