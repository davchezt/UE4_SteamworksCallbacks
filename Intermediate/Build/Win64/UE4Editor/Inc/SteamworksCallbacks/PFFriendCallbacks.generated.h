// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamSetPersonaName;
struct FPersonaStateChange;
#ifdef STEAMWORKSCALLBACKS_PFFriendCallbacks_generated_h
#error "PFFriendCallbacks.generated.h already included, missing '#pragma once' in PFFriendCallbacks.h"
#endif
#define STEAMWORKSCALLBACKS_PFFriendCallbacks_generated_h

#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamSetPersonaName_Statics; \
	STEAMWORKSCALLBACKS_API static class UScriptStruct* StaticStruct();


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPersonaStateChange_Statics; \
	STEAMWORKSCALLBACKS_API static class UScriptStruct* StaticStruct();


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_66_DELEGATE \
struct _Script_SteamworksCallbacks_eventOnSteamSetPersonaName_Parms \
{ \
	FSteamSetPersonaName SteamSetPersonaName; \
}; \
static inline void FOnSteamSetPersonaName_DelegateWrapper(const FMulticastScriptDelegate& OnSteamSetPersonaName, FSteamSetPersonaName SteamSetPersonaName) \
{ \
	_Script_SteamworksCallbacks_eventOnSteamSetPersonaName_Parms Parms; \
	Parms.SteamSetPersonaName=SteamSetPersonaName; \
	OnSteamSetPersonaName.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_65_DELEGATE \
struct _Script_SteamworksCallbacks_eventOnSteamPersonaStateChange_Parms \
{ \
	FPersonaStateChange PersonaStateChange; \
}; \
static inline void FOnSteamPersonaStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnSteamPersonaStateChange, FPersonaStateChange PersonaStateChange) \
{ \
	_Script_SteamworksCallbacks_eventOnSteamPersonaStateChange_Parms Parms; \
	Parms.PersonaStateChange=PersonaStateChange; \
	OnSteamPersonaStateChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_64_DELEGATE \
struct _Script_SteamworksCallbacks_eventOnSteamGameOverlayActivated_Parms \
{ \
	bool bActive; \
}; \
static inline void FOnSteamGameOverlayActivated_DelegateWrapper(const FMulticastScriptDelegate& OnSteamGameOverlayActivated, bool bActive) \
{ \
	_Script_SteamworksCallbacks_eventOnSteamGameOverlayActivated_Parms Parms; \
	Parms.bActive=bActive ? true : false; \
	OnSteamGameOverlayActivated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_71_RPC_WRAPPERS
#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_71_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPFFriendCallbacks(); \
	friend struct Z_Construct_UClass_UPFFriendCallbacks_Statics; \
public: \
	DECLARE_CLASS(UPFFriendCallbacks, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksCallbacks"), NO_API) \
	DECLARE_SERIALIZER(UPFFriendCallbacks)


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUPFFriendCallbacks(); \
	friend struct Z_Construct_UClass_UPFFriendCallbacks_Statics; \
public: \
	DECLARE_CLASS(UPFFriendCallbacks, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksCallbacks"), NO_API) \
	DECLARE_SERIALIZER(UPFFriendCallbacks)


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPFFriendCallbacks(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPFFriendCallbacks) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPFFriendCallbacks); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPFFriendCallbacks); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPFFriendCallbacks(UPFFriendCallbacks&&); \
	NO_API UPFFriendCallbacks(const UPFFriendCallbacks&); \
public:


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_71_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPFFriendCallbacks(UPFFriendCallbacks&&); \
	NO_API UPFFriendCallbacks(const UPFFriendCallbacks&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPFFriendCallbacks); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPFFriendCallbacks); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPFFriendCallbacks)


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_71_PRIVATE_PROPERTY_OFFSET
#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_68_PROLOG
#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_71_PRIVATE_PROPERTY_OFFSET \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_71_RPC_WRAPPERS \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_71_INCLASS \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_71_PRIVATE_PROPERTY_OFFSET \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_71_INCLASS_NO_PURE_DECLS \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFFriendCallbacks_h


#define FOREACH_ENUM_ESTEAMPERSONACHANGE(op) \
	op(ESteamPersonaChange::EPersonaChangeName) \
	op(ESteamPersonaChange::EPersonaChangeStatus) \
	op(ESteamPersonaChange::EPersonaChangeComeOnline) \
	op(ESteamPersonaChange::EPersonaChangeGoneOffline) \
	op(ESteamPersonaChange::EPersonaChangeGamePlayed) \
	op(ESteamPersonaChange::EPersonaChangeGameServer) \
	op(ESteamPersonaChange::EPersonaChangeAvatar) \
	op(ESteamPersonaChange::EPersonaChangeJoinedSource) \
	op(ESteamPersonaChange::EPersonaChangeLeftSource) \
	op(ESteamPersonaChange::EPersonaChangeRelationshipChanged) \
	op(ESteamPersonaChange::EPersonaChangeNameFirstSet) \
	op(ESteamPersonaChange::EPersonaChangeFacebookInfo) \
	op(ESteamPersonaChange::EPersonaChangeNickname) \
	op(ESteamPersonaChange::EPersonaChangeSteamLevel) \
	op(ESteamPersonaChange::EPersonaChangeErr) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
