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
#include <osg/Node>
#include <osg/Object>
#include <osg/Shader>
#include <osg/Shape>
#include <osgDB/Archive>
#include <osgDB/AuthenticationMap>
#include <osgDB/ReaderWriter>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgDB::ReaderWriter::Options::CacheHintOptions)
	I_DeclaringFile("osgDB/ReaderWriter");
	I_EnumLabel(osgDB::ReaderWriter::Options::CACHE_NONE);
	I_EnumLabel(osgDB::ReaderWriter::Options::CACHE_NODES);
	I_EnumLabel(osgDB::ReaderWriter::Options::CACHE_IMAGES);
	I_EnumLabel(osgDB::ReaderWriter::Options::CACHE_HEIGHTFIELDS);
	I_EnumLabel(osgDB::ReaderWriter::Options::CACHE_ARCHIVES);
	I_EnumLabel(osgDB::ReaderWriter::Options::CACHE_OBJECTS);
	I_EnumLabel(osgDB::ReaderWriter::Options::CACHE_SHADERS);
	I_EnumLabel(osgDB::ReaderWriter::Options::CACHE_ALL);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgDB::ReaderWriter::Options::BuildKdTreesHint)
	I_DeclaringFile("osgDB/ReaderWriter");
	I_EnumLabel(osgDB::ReaderWriter::Options::NO_PREFERENCE);
	I_EnumLabel(osgDB::ReaderWriter::Options::DO_NOT_BUILD_KDTREES);
	I_EnumLabel(osgDB::ReaderWriter::Options::BUILD_KDTREES);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgDB::ReaderWriter::Options)
	I_DeclaringFile("osgDB/ReaderWriter");
	I_BaseType(osg::Object);
	I_Constructor0(____Options,
	               "",
	               "");
	I_Constructor1(IN, const std::string &, str,
	               Properties::NON_EXPLICIT,
	               ____Options__C5_std_string_R1,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgDB::ReaderWriter::Options &, options, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Options__C5_Options_R1__C5_osg_CopyOp_R1,
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
	I_Method1(void, setOptionString, IN, const std::string &, str,
	          Properties::NON_VIRTUAL,
	          __void__setOptionString__C5_std_string_R1,
	          "Set the general Options string. ",
	          "");
	I_Method0(const std::string &, getOptionString,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__getOptionString,
	          "Get the general Options string. ",
	          "");
	I_Method1(void, setDatabasePath, IN, const std::string &, str,
	          Properties::NON_VIRTUAL,
	          __void__setDatabasePath__C5_std_string_R1,
	          "Set the database path to use a hint of where to look when loading models. ",
	          "");
	I_Method0(osgDB::FilePathList &, getDatabasePathList,
	          Properties::NON_VIRTUAL,
	          __FilePathList_R1__getDatabasePathList,
	          "Get the database path which is used a hint of where to look when loading models. ",
	          "");
	I_Method0(const osgDB::FilePathList &, getDatabasePathList,
	          Properties::NON_VIRTUAL,
	          __C5_FilePathList_R1__getDatabasePathList,
	          "Get the const database path which is used a hint of where to look when loading models. ",
	          "");
	I_Method1(void, setObjectCacheHint, IN, osgDB::ReaderWriter::Options::CacheHintOptions, useObjectCache,
	          Properties::NON_VIRTUAL,
	          __void__setObjectCacheHint__CacheHintOptions,
	          "Set whether the Registry::ObjectCache should be used by default. ",
	          "");
	I_Method0(osgDB::ReaderWriter::Options::CacheHintOptions, getObjectCacheHint,
	          Properties::NON_VIRTUAL,
	          __CacheHintOptions__getObjectCacheHint,
	          "Get whether the Registry::ObjectCache should be used by default. ",
	          "");
	I_Method1(void, setBuildKdTreesHint, IN, osgDB::ReaderWriter::Options::BuildKdTreesHint, hint,
	          Properties::NON_VIRTUAL,
	          __void__setBuildKdTreesHint__BuildKdTreesHint,
	          "Set whether the KdTrees should be built for geometry in the loader model. ",
	          "");
	I_Method0(osgDB::ReaderWriter::Options::BuildKdTreesHint, getBuildKdTreesHint,
	          Properties::NON_VIRTUAL,
	          __BuildKdTreesHint__getBuildKdTreesHint,
	          "Get whether the KdTrees should be built for geometry in the loader model. ",
	          "");
	I_Method1(void, setAuthenticationMap, IN, osgDB::AuthenticationMap *, authenticationMap,
	          Properties::NON_VIRTUAL,
	          __void__setAuthenticationMap__AuthenticationMap_P1,
	          "Set the password map to be used by plugins when access files from secure locations. ",
	          "");
	I_Method0(const osgDB::AuthenticationMap *, getAuthenticationMap,
	          Properties::NON_VIRTUAL,
	          __C5_AuthenticationMap_P1__getAuthenticationMap,
	          "Get the password map to be used by plugins when access files from secure locations. ",
	          "");
	I_Method2(void, setPluginData, IN, const std::string &, s, IN, void *, v,
	          Properties::NON_VIRTUAL,
	          __void__setPluginData__C5_std_string_R1__void_P1,
	          "Sets a plugindata value PluginData with a string. ",
	          "");
	I_Method1(void *, getPluginData, IN, const std::string &, s,
	          Properties::NON_VIRTUAL,
	          __void_P1__getPluginData__C5_std_string_R1,
	          "Get a value from the PluginData. ",
	          "");
	I_Method1(const void *, getPluginData, IN, const std::string &, s,
	          Properties::NON_VIRTUAL,
	          __C5_void_P1__getPluginData__C5_std_string_R1,
	          "Get a value from the PluginData. ",
	          "");
	I_Method1(void, removePluginData, IN, const std::string &, s,
	          Properties::NON_VIRTUAL,
	          __void__removePluginData__C5_std_string_R1,
	          "Remove a value from the PluginData. ",
	          "");
	I_Method2(void, setPluginStringData, IN, const std::string &, s, IN, const std::string &, v,
	          Properties::NON_VIRTUAL,
	          __void__setPluginStringData__C5_std_string_R1__C5_std_string_R1,
	          "Sets a plugindata value PluginData with a string. ",
	          "");
	I_Method1(std::string, getPluginStringData, IN, const std::string &, s,
	          Properties::NON_VIRTUAL,
	          __std_string__getPluginStringData__C5_std_string_R1,
	          "Get a string from the PluginStrData. ",
	          "");
	I_Method1(const std::string, getPluginStringData, IN, const std::string &, s,
	          Properties::NON_VIRTUAL,
	          __C5_std_string__getPluginStringData__C5_std_string_R1,
	          "Get a value from the PluginData. ",
	          "");
	I_Method1(void, removePluginStringData, IN, const std::string &, s,
	          Properties::NON_VIRTUAL,
	          __void__removePluginStringData__C5_std_string_R1,
	          "Remove a value from the PluginData. ",
	          "");
	I_SimpleProperty(osgDB::AuthenticationMap *, AuthenticationMap, 
	                 0, 
	                 __void__setAuthenticationMap__AuthenticationMap_P1);
	I_SimpleProperty(osgDB::ReaderWriter::Options::BuildKdTreesHint, BuildKdTreesHint, 
	                 __BuildKdTreesHint__getBuildKdTreesHint, 
	                 __void__setBuildKdTreesHint__BuildKdTreesHint);
	I_SimpleProperty(const std::string &, DatabasePath, 
	                 0, 
	                 __void__setDatabasePath__C5_std_string_R1);
	I_SimpleProperty(osgDB::FilePathList &, DatabasePathList, 
	                 __FilePathList_R1__getDatabasePathList, 
	                 0);
	I_SimpleProperty(osgDB::ReaderWriter::Options::CacheHintOptions, ObjectCacheHint, 
	                 __CacheHintOptions__getObjectCacheHint, 
	                 __void__setObjectCacheHint__CacheHintOptions);
	I_SimpleProperty(const std::string &, OptionString, 
	                 __C5_std_string_R1__getOptionString, 
	                 __void__setOptionString__C5_std_string_R1);
	I_IndexedProperty(void *, PluginData, 
	                  __void_P1__getPluginData__C5_std_string_R1, 
	                  __void__setPluginData__C5_std_string_R1__void_P1, 
	                  0);
	I_IndexedProperty(std::string, PluginStringData, 
	                  __std_string__getPluginStringData__C5_std_string_R1, 
	                  __void__setPluginStringData__C5_std_string_R1__C5_std_string_R1, 
	                  0);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgDB::ReaderWriter::ArchiveStatus)
	I_DeclaringFile("osgDB/ReaderWriter");
	I_EnumLabel(osgDB::ReaderWriter::READ);
	I_EnumLabel(osgDB::ReaderWriter::WRITE);
	I_EnumLabel(osgDB::ReaderWriter::CREATE);
END_REFLECTOR

TYPE_NAME_ALIAS(std::map< std::string COMMA  std::string >, osgDB::ReaderWriter::FormatDescriptionMap)

BEGIN_OBJECT_REFLECTOR(osgDB::ReaderWriter)
	I_DeclaringFile("osgDB/ReaderWriter");
	I_BaseType(osg::Object);
	I_Constructor0(____ReaderWriter,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgDB::ReaderWriter &, rw, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____ReaderWriter__C5_ReaderWriter_R1__C5_osg_CopyOp_R1,
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
	I_Method0(const osgDB::ReaderWriter::FormatDescriptionMap &, supportedProtocols,
	          Properties::VIRTUAL,
	          __C5_FormatDescriptionMap_R1__supportedProtocols,
	          "return which protocols are supported by ReaderWriter. ",
	          "");
	I_Method0(const osgDB::ReaderWriter::FormatDescriptionMap &, supportedExtensions,
	          Properties::VIRTUAL,
	          __C5_FormatDescriptionMap_R1__supportedExtensions,
	          "return which list of file extensions supported by ReaderWriter. ",
	          "");
	I_Method0(const osgDB::ReaderWriter::FormatDescriptionMap &, supportedOptions,
	          Properties::VIRTUAL,
	          __C5_FormatDescriptionMap_R1__supportedOptions,
	          "return which list of file extensions supported by ReaderWriter. ",
	          "");
	I_Method1(bool, acceptsExtension, IN, const std::string &, x,
	          Properties::VIRTUAL,
	          __bool__acceptsExtension__C5_std_string_R1,
	          "return true if ReaderWriter accepts specified file extension. ",
	          "");
	I_MethodWithDefaults4(osgDB::ReaderWriter::ReadResult, openArchive, IN, const std::string &, x, , IN, osgDB::ReaderWriter::ArchiveStatus, x, , IN, unsigned, int, 4096, IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __ReadResult__openArchive__C5_std_string_R1__ArchiveStatus__unsigned__C5_Options_P1,
	                      "open an archive for reading, writing, or to create an empty archive for writing to. ",
	                      "");
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, openArchive, IN, std::istream &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __ReadResult__openArchive__std_istream_R1__C5_Options_P1,
	                      "open an archive for reading. ",
	                      "");
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, readObject, IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __ReadResult__readObject__C5_std_string_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, readImage, IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __ReadResult__readImage__C5_std_string_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, readHeightField, IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __ReadResult__readHeightField__C5_std_string_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, readNode, IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __ReadResult__readNode__C5_std_string_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, readShader, IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __ReadResult__readShader__C5_std_string_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults3(osgDB::ReaderWriter::WriteResult, writeObject, IN, const osg::Object &, x, , IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __WriteResult__writeObject__C5_osg_Object_R1__C5_std_string_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults3(osgDB::ReaderWriter::WriteResult, writeImage, IN, const osg::Image &, x, , IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __WriteResult__writeImage__C5_osg_Image_R1__C5_std_string_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults3(osgDB::ReaderWriter::WriteResult, writeHeightField, IN, const osg::HeightField &, x, , IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __WriteResult__writeHeightField__C5_osg_HeightField_R1__C5_std_string_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults3(osgDB::ReaderWriter::WriteResult, writeNode, IN, const osg::Node &, x, , IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __WriteResult__writeNode__C5_osg_Node_R1__C5_std_string_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults3(osgDB::ReaderWriter::WriteResult, writeShader, IN, const osg::Shader &, x, , IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __WriteResult__writeShader__C5_osg_Shader_R1__C5_std_string_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, readObject, IN, std::istream &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __ReadResult__readObject__std_istream_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, readImage, IN, std::istream &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __ReadResult__readImage__std_istream_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, readHeightField, IN, std::istream &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __ReadResult__readHeightField__std_istream_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, readNode, IN, std::istream &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __ReadResult__readNode__std_istream_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, readShader, IN, std::istream &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __ReadResult__readShader__std_istream_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults3(osgDB::ReaderWriter::WriteResult, writeObject, IN, const osg::Object &, x, , IN, std::ostream &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __WriteResult__writeObject__C5_osg_Object_R1__std_ostream_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults3(osgDB::ReaderWriter::WriteResult, writeImage, IN, const osg::Image &, x, , IN, std::ostream &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __WriteResult__writeImage__C5_osg_Image_R1__std_ostream_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults3(osgDB::ReaderWriter::WriteResult, writeHeightField, IN, const osg::HeightField &, x, , IN, std::ostream &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __WriteResult__writeHeightField__C5_osg_HeightField_R1__std_ostream_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults3(osgDB::ReaderWriter::WriteResult, writeNode, IN, const osg::Node &, x, , IN, std::ostream &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __WriteResult__writeNode__C5_osg_Node_R1__std_ostream_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults3(osgDB::ReaderWriter::WriteResult, writeShader, IN, const osg::Shader &, x, , IN, std::ostream &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::VIRTUAL,
	                      __WriteResult__writeShader__C5_osg_Shader_R1__std_ostream_R1__C5_Options_P1,
	                      "",
	                      "");
	I_ProtectedMethod2(void, supportsProtocol, IN, const std::string &, fmt, IN, const std::string &, description,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__supportsProtocol__C5_std_string_R1__C5_std_string_R1,
	                   "",
	                   "");
	I_ProtectedMethod2(void, supportsExtension, IN, const std::string &, fmt, IN, const std::string &, description,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__supportsExtension__C5_std_string_R1__C5_std_string_R1,
	                   "",
	                   "");
	I_ProtectedMethod2(void, supportsOption, IN, const std::string &, fmt, IN, const std::string &, description,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__supportsOption__C5_std_string_R1__C5_std_string_R1,
	                   "",
	                   "");
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgDB::ReaderWriter::ReadResult::ReadStatus)
	I_DeclaringFile("osgDB/ReaderWriter");
	I_EnumLabel(osgDB::ReaderWriter::ReadResult::FILE_NOT_HANDLED);
	I_EnumLabel(osgDB::ReaderWriter::ReadResult::FILE_NOT_FOUND);
	I_EnumLabel(osgDB::ReaderWriter::ReadResult::FILE_LOADED);
	I_EnumLabel(osgDB::ReaderWriter::ReadResult::FILE_LOADED_FROM_CACHE);
	I_EnumLabel(osgDB::ReaderWriter::ReadResult::ERROR_IN_READING_FILE);
	I_EnumLabel(osgDB::ReaderWriter::ReadResult::FILE_REQUESTED);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgDB::ReaderWriter::ReadResult)
	I_DeclaringFile("osgDB/ReaderWriter");
	I_ConstructorWithDefaults1(IN, osgDB::ReaderWriter::ReadResult::ReadStatus, status, osgDB::ReaderWriter::ReadResult::FILE_NOT_HANDLED,
	                           Properties::NON_EXPLICIT,
	                           ____ReadResult__ReadStatus,
	                           "",
	                           "");
	I_Constructor1(IN, const std::string &, m,
	               Properties::NON_EXPLICIT,
	               ____ReadResult__C5_std_string_R1,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, osg::Object *, obj, , IN, osgDB::ReaderWriter::ReadResult::ReadStatus, status, osgDB::ReaderWriter::ReadResult::FILE_LOADED,
	                           ____ReadResult__osg_Object_P1__ReadStatus,
	                           "",
	                           "");
	I_Constructor1(IN, const osgDB::ReaderWriter::ReadResult &, rr,
	               Properties::NON_EXPLICIT,
	               ____ReadResult__C5_ReadResult_R1,
	               "",
	               "");
	I_Method0(osg::Object *, getObject,
	          Properties::NON_VIRTUAL,
	          __osg_Object_P1__getObject,
	          "",
	          "");
	I_Method0(osg::Image *, getImage,
	          Properties::NON_VIRTUAL,
	          __osg_Image_P1__getImage,
	          "",
	          "");
	I_Method0(osg::HeightField *, getHeightField,
	          Properties::NON_VIRTUAL,
	          __osg_HeightField_P1__getHeightField,
	          "",
	          "");
	I_Method0(osg::Node *, getNode,
	          Properties::NON_VIRTUAL,
	          __osg_Node_P1__getNode,
	          "",
	          "");
	I_Method0(osgDB::Archive *, getArchive,
	          Properties::NON_VIRTUAL,
	          __osgDB_Archive_P1__getArchive,
	          "",
	          "");
	I_Method0(osg::Shader *, getShader,
	          Properties::NON_VIRTUAL,
	          __osg_Shader_P1__getShader,
	          "",
	          "");
	I_Method0(bool, validObject,
	          Properties::NON_VIRTUAL,
	          __bool__validObject,
	          "",
	          "");
	I_Method0(bool, validImage,
	          Properties::NON_VIRTUAL,
	          __bool__validImage,
	          "",
	          "");
	I_Method0(bool, validHeightField,
	          Properties::NON_VIRTUAL,
	          __bool__validHeightField,
	          "",
	          "");
	I_Method0(bool, validNode,
	          Properties::NON_VIRTUAL,
	          __bool__validNode,
	          "",
	          "");
	I_Method0(bool, validArchive,
	          Properties::NON_VIRTUAL,
	          __bool__validArchive,
	          "",
	          "");
	I_Method0(bool, validShader,
	          Properties::NON_VIRTUAL,
	          __bool__validShader,
	          "",
	          "");
	I_Method0(osg::Object *, takeObject,
	          Properties::NON_VIRTUAL,
	          __osg_Object_P1__takeObject,
	          "",
	          "");
	I_Method0(osg::Image *, takeImage,
	          Properties::NON_VIRTUAL,
	          __osg_Image_P1__takeImage,
	          "",
	          "");
	I_Method0(osg::HeightField *, takeHeightField,
	          Properties::NON_VIRTUAL,
	          __osg_HeightField_P1__takeHeightField,
	          "",
	          "");
	I_Method0(osg::Node *, takeNode,
	          Properties::NON_VIRTUAL,
	          __osg_Node_P1__takeNode,
	          "",
	          "");
	I_Method0(osgDB::Archive *, takeArchive,
	          Properties::NON_VIRTUAL,
	          __osgDB_Archive_P1__takeArchive,
	          "",
	          "");
	I_Method0(osg::Shader *, takeShader,
	          Properties::NON_VIRTUAL,
	          __osg_Shader_P1__takeShader,
	          "",
	          "");
	I_Method0(std::string &, message,
	          Properties::NON_VIRTUAL,
	          __std_string_R1__message,
	          "",
	          "");
	I_Method0(const std::string &, message,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__message,
	          "",
	          "");
	I_Method0(osgDB::ReaderWriter::ReadResult::ReadStatus, status,
	          Properties::NON_VIRTUAL,
	          __ReadStatus__status,
	          "",
	          "");
	I_Method0(bool, success,
	          Properties::NON_VIRTUAL,
	          __bool__success,
	          "",
	          "");
	I_Method0(bool, loadedFromCache,
	          Properties::NON_VIRTUAL,
	          __bool__loadedFromCache,
	          "",
	          "");
	I_Method0(bool, error,
	          Properties::NON_VIRTUAL,
	          __bool__error,
	          "",
	          "");
	I_Method0(bool, notHandled,
	          Properties::NON_VIRTUAL,
	          __bool__notHandled,
	          "",
	          "");
	I_Method0(bool, notFound,
	          Properties::NON_VIRTUAL,
	          __bool__notFound,
	          "",
	          "");
	I_SimpleProperty(osgDB::Archive *, Archive, 
	                 __osgDB_Archive_P1__getArchive, 
	                 0);
	I_SimpleProperty(osg::HeightField *, HeightField, 
	                 __osg_HeightField_P1__getHeightField, 
	                 0);
	I_SimpleProperty(osg::Image *, Image, 
	                 __osg_Image_P1__getImage, 
	                 0);
	I_SimpleProperty(osg::Node *, Node, 
	                 __osg_Node_P1__getNode, 
	                 0);
	I_SimpleProperty(osg::Object *, Object, 
	                 __osg_Object_P1__getObject, 
	                 0);
	I_SimpleProperty(osg::Shader *, Shader, 
	                 __osg_Shader_P1__getShader, 
	                 0);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgDB::ReaderWriter::WriteResult::WriteStatus)
	I_DeclaringFile("osgDB/ReaderWriter");
	I_EnumLabel(osgDB::ReaderWriter::WriteResult::FILE_NOT_HANDLED);
	I_EnumLabel(osgDB::ReaderWriter::WriteResult::FILE_SAVED);
	I_EnumLabel(osgDB::ReaderWriter::WriteResult::ERROR_IN_WRITING_FILE);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgDB::ReaderWriter::WriteResult)
	I_DeclaringFile("osgDB/ReaderWriter");
	I_ConstructorWithDefaults1(IN, osgDB::ReaderWriter::WriteResult::WriteStatus, status, osgDB::ReaderWriter::WriteResult::FILE_NOT_HANDLED,
	                           Properties::NON_EXPLICIT,
	                           ____WriteResult__WriteStatus,
	                           "",
	                           "");
	I_Constructor1(IN, const std::string &, m,
	               Properties::NON_EXPLICIT,
	               ____WriteResult__C5_std_string_R1,
	               "",
	               "");
	I_Constructor1(IN, const osgDB::ReaderWriter::WriteResult &, rr,
	               Properties::NON_EXPLICIT,
	               ____WriteResult__C5_WriteResult_R1,
	               "",
	               "");
	I_Method0(std::string &, message,
	          Properties::NON_VIRTUAL,
	          __std_string_R1__message,
	          "",
	          "");
	I_Method0(const std::string &, message,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__message,
	          "",
	          "");
	I_Method0(osgDB::ReaderWriter::WriteResult::WriteStatus, status,
	          Properties::NON_VIRTUAL,
	          __WriteStatus__status,
	          "",
	          "");
	I_Method0(bool, success,
	          Properties::NON_VIRTUAL,
	          __bool__success,
	          "",
	          "");
	I_Method0(bool, error,
	          Properties::NON_VIRTUAL,
	          __bool__error,
	          "",
	          "");
	I_Method0(bool, notHandled,
	          Properties::NON_VIRTUAL,
	          __bool__notHandled,
	          "",
	          "");
END_REFLECTOR

TYPE_NAME_ALIAS(std::deque< std::string >, osgDB::FilePathList)

STD_VECTOR_REFLECTOR(std::deque< std::string >)

