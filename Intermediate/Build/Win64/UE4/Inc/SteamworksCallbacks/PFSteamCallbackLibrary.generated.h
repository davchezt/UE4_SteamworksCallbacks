// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPFUserCallbacks;
class UPFFriendCallbacks;
class UPFMatchmakingCallbacks;
#ifdef STEAMWORKSCALLBACKS_PFSteamCallbackLibrary_generated_h
#error "PFSteamCallbackLibrary.generated.h already included, missing '#pragma once' in PFSteamCallbackLibrary.h"
#endif
#define STEAMWORKSCALLBACKS_PFSteamCallbackLibrary_generated_h

#define Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallbackCleanUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPFSteamCallbackLibrary::CallbackCleanUp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserCallback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPFUserCallbacks**)Z_Param__Result=UPFSteamCallbackLibrary::GetUserCallback(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendCallback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPFFriendCallbacks**)Z_Param__Result=UPFSteamCallbackLibrary::GetFriendCallback(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatchMakingCallback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPFMatchmakingCallbacks**)Z_Param__Result=UPFSteamCallbackLibrary::GetMatchMakingCallback(); \
		P_NATIVE_END; \
	}


#define Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallbackCleanUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPFSteamCallbackLibrary::CallbackCleanUp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserCallback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPFUserCallbacks**)Z_Param__Result=UPFSteamCallbackLibrary::GetUserCallback(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendCallback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPFFriendCallbacks**)Z_Param__Result=UPFSteamCallbackLibrary::GetFriendCallback(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatchMakingCallback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPFMatchmakingCallbacks**)Z_Param__Result=UPFSteamCallbackLibrary::GetMatchMakingCallback(); \
		P_NATIVE_END; \
	}


#define Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPFSteamCallbackLibrary(); \
	friend struct Z_Construct_UClass_UPFSteamCallbackLibrary_Statics; \
public: \
	DECLARE_CLASS(UPFSteamCallbackLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksCallbacks"), NO_API) \
	DECLARE_SERIALIZER(UPFSteamCallbackLibrary)


#define Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUPFSteamCallbackLibrary(); \
	friend struct Z_Construct_UClass_UPFSteamCallbackLibrary_Statics; \
public: \
	DECLARE_CLASS(UPFSteamCallbackLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksCallbacks"), NO_API) \
	DECLARE_SERIALIZER(UPFSteamCallbackLibrary)


#define Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPFSteamCallbackLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPFSteamCallbackLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPFSteamCallbackLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPFSteamCallbackLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPFSteamCallbackLibrary(UPFSteamCallbackLibrary&&); \
	NO_API UPFSteamCallbackLibrary(const UPFSteamCallbackLibrary&); \
public:


#define Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPFSteamCallbackLibrary(UPFSteamCallbackLibrary&&); \
	NO_API UPFSteamCallbackLibrary(const UPFSteamCallbackLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPFSteamCallbackLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPFSteamCallbackLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPFSteamCallbackLibrary)


#define Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h_18_PRIVATE_PROPERTY_OFFSET
#define Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h_15_PROLOG
#define Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h_18_RPC_WRAPPERS \
	Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h_18_INCLASS \
	Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h_18_INCLASS_NO_PURE_DECLS \
	Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Documents_Unreal_Projects_MyPlugins_Builds_SteamworksCallbacks4_20_v1_01_SteamworksCallbacks_HostProject_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFSteamCallbackLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
