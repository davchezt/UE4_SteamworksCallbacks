// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLobbyInviteStruct;
struct FLobbyEnteredStruct;
struct FLobbyCreatedStruct;
struct FLobbyUpdatedStruct;
#ifdef STEAMWORKSCALLBACKS_PFMatchmakingCallbacks_generated_h
#error "PFMatchmakingCallbacks.generated.h already included, missing '#pragma once' in PFMatchmakingCallbacks.h"
#endif
#define STEAMWORKSCALLBACKS_PFMatchmakingCallbacks_generated_h

#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics; \
	STEAMWORKSCALLBACKS_API static class UScriptStruct* StaticStruct();


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics; \
	STEAMWORKSCALLBACKS_API static class UScriptStruct* StaticStruct();


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics; \
	STEAMWORKSCALLBACKS_API static class UScriptStruct* StaticStruct();


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics; \
	STEAMWORKSCALLBACKS_API static class UScriptStruct* StaticStruct();


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_111_DELEGATE \
struct _Script_SteamworksCallbacks_eventOnSteamLobbyInvite_Parms \
{ \
	FLobbyInviteStruct LobbyInvite; \
}; \
static inline void FOnSteamLobbyInvite_DelegateWrapper(const FMulticastScriptDelegate& OnSteamLobbyInvite, FLobbyInviteStruct LobbyInvite) \
{ \
	_Script_SteamworksCallbacks_eventOnSteamLobbyInvite_Parms Parms; \
	Parms.LobbyInvite=LobbyInvite; \
	OnSteamLobbyInvite.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_110_DELEGATE \
struct _Script_SteamworksCallbacks_eventOnSteamLobbyEntered_Parms \
{ \
	FLobbyEnteredStruct LobbyEntered; \
}; \
static inline void FOnSteamLobbyEntered_DelegateWrapper(const FMulticastScriptDelegate& OnSteamLobbyEntered, FLobbyEnteredStruct LobbyEntered) \
{ \
	_Script_SteamworksCallbacks_eventOnSteamLobbyEntered_Parms Parms; \
	Parms.LobbyEntered=LobbyEntered; \
	OnSteamLobbyEntered.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_109_DELEGATE \
struct _Script_SteamworksCallbacks_eventOnSteamLobbyCreated_Parms \
{ \
	FLobbyCreatedStruct LobbyCreated; \
}; \
static inline void FOnSteamLobbyCreated_DelegateWrapper(const FMulticastScriptDelegate& OnSteamLobbyCreated, FLobbyCreatedStruct LobbyCreated) \
{ \
	_Script_SteamworksCallbacks_eventOnSteamLobbyCreated_Parms Parms; \
	Parms.LobbyCreated=LobbyCreated; \
	OnSteamLobbyCreated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_108_DELEGATE \
struct _Script_SteamworksCallbacks_eventOnSteamLobbyUpdated_Parms \
{ \
	FLobbyUpdatedStruct LobbyUpdated; \
}; \
static inline void FOnSteamLobbyUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnSteamLobbyUpdated, FLobbyUpdatedStruct LobbyUpdated) \
{ \
	_Script_SteamworksCallbacks_eventOnSteamLobbyUpdated_Parms Parms; \
	Parms.LobbyUpdated=LobbyUpdated; \
	OnSteamLobbyUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_116_RPC_WRAPPERS
#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_116_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPFMatchmakingCallbacks(); \
	friend struct Z_Construct_UClass_UPFMatchmakingCallbacks_Statics; \
public: \
	DECLARE_CLASS(UPFMatchmakingCallbacks, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksCallbacks"), NO_API) \
	DECLARE_SERIALIZER(UPFMatchmakingCallbacks)


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_116_INCLASS \
private: \
	static void StaticRegisterNativesUPFMatchmakingCallbacks(); \
	friend struct Z_Construct_UClass_UPFMatchmakingCallbacks_Statics; \
public: \
	DECLARE_CLASS(UPFMatchmakingCallbacks, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksCallbacks"), NO_API) \
	DECLARE_SERIALIZER(UPFMatchmakingCallbacks)


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPFMatchmakingCallbacks(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPFMatchmakingCallbacks) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPFMatchmakingCallbacks); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPFMatchmakingCallbacks); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPFMatchmakingCallbacks(UPFMatchmakingCallbacks&&); \
	NO_API UPFMatchmakingCallbacks(const UPFMatchmakingCallbacks&); \
public:


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_116_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPFMatchmakingCallbacks(UPFMatchmakingCallbacks&&); \
	NO_API UPFMatchmakingCallbacks(const UPFMatchmakingCallbacks&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPFMatchmakingCallbacks); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPFMatchmakingCallbacks); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPFMatchmakingCallbacks)


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_116_PRIVATE_PROPERTY_OFFSET
#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_113_PROLOG
#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_116_PRIVATE_PROPERTY_OFFSET \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_116_RPC_WRAPPERS \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_116_INCLASS \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_116_PRIVATE_PROPERTY_OFFSET \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_116_INCLASS_NO_PURE_DECLS \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFMatchmakingCallbacks_h


#define FOREACH_ENUM_ELOBBYENTEREDRESPONSE(op) \
	op(ELobbyEnteredResponse::EResponse_Success) \
	op(ELobbyEnteredResponse::EResponse_DoesntExist) \
	op(ELobbyEnteredResponse::EResponse_NotAllowed) \
	op(ELobbyEnteredResponse::EResponse_Full) \
	op(ELobbyEnteredResponse::EResponse_UnexpectedError) \
	op(ELobbyEnteredResponse::EResponse_Banned) \
	op(ELobbyEnteredResponse::EResponse_Limited) \
	op(ELobbyEnteredResponse::EResponse_ClanDisabled) \
	op(ELobbyEnteredResponse::EResponse_CommunityBan) \
	op(ELobbyEnteredResponse::EResponse_MemberBlockedYou) \
	op(ELobbyEnteredResponse::EResponse_YouBlockedMember) 
#define FOREACH_ENUM_EMEMBERSTATECHANGE(op) \
	op(EMemberStateChange::ChatMemberStateChangeEntered) \
	op(EMemberStateChange::ChatMemberStateChangeLeft) \
	op(EMemberStateChange::ChatMemberStateChangeDisconnected) \
	op(EMemberStateChange::ChatMemberStateChangedKicked) \
	op(EMemberStateChange::ChatMemberStateChangeBanned) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
