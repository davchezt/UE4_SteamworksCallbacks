// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamServerConnectFailure;
struct FSteamMicroTxnAuthorization;
struct FSteamGetAuthSessionTicket;
#ifdef STEAMWORKSCALLBACKS_PFUserCallbacks_generated_h
#error "PFUserCallbacks.generated.h already included, missing '#pragma once' in PFUserCallbacks.h"
#endif
#define STEAMWORKSCALLBACKS_PFUserCallbacks_generated_h

#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics; \
	STEAMWORKSCALLBACKS_API static class UScriptStruct* StaticStruct();


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamMicroTxnAuthorization_Statics; \
	STEAMWORKSCALLBACKS_API static class UScriptStruct* StaticStruct();


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamGetAuthSessionTicket_Statics; \
	STEAMWORKSCALLBACKS_API static class UScriptStruct* StaticStruct();


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_61_DELEGATE \
static inline void FOnSteamServersConnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServersConnected) \
{ \
	OnSteamServersConnected.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_60_DELEGATE \
static inline void FOnLicensesUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnLicensesUpdated) \
{ \
	OnLicensesUpdated.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_59_DELEGATE \
struct _Script_SteamworksCallbacks_eventOnSteamServersDisconnected_Parms \
{ \
	int32 OnSteamServersDisconnectedResults; \
}; \
static inline void FOnSteamServersDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServersDisconnected, int32 OnSteamServersDisconnectedResults) \
{ \
	_Script_SteamworksCallbacks_eventOnSteamServersDisconnected_Parms Parms; \
	Parms.OnSteamServersDisconnectedResults=OnSteamServersDisconnectedResults; \
	OnSteamServersDisconnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_58_DELEGATE \
struct _Script_SteamworksCallbacks_eventOnSteamServerConnectFailure_Parms \
{ \
	FSteamServerConnectFailure SteamServerConnectFailure; \
}; \
static inline void FOnSteamServerConnectFailure_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServerConnectFailure, FSteamServerConnectFailure SteamServerConnectFailure) \
{ \
	_Script_SteamworksCallbacks_eventOnSteamServerConnectFailure_Parms Parms; \
	Parms.SteamServerConnectFailure=SteamServerConnectFailure; \
	OnSteamServerConnectFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_57_DELEGATE \
struct _Script_SteamworksCallbacks_eventOnSteamMicroTxnAuthorization_Parms \
{ \
	FSteamMicroTxnAuthorization SteamMicroTxnAuthorization; \
}; \
static inline void FOnSteamMicroTxnAuthorization_DelegateWrapper(const FMulticastScriptDelegate& OnSteamMicroTxnAuthorization, FSteamMicroTxnAuthorization SteamMicroTxnAuthorization) \
{ \
	_Script_SteamworksCallbacks_eventOnSteamMicroTxnAuthorization_Parms Parms; \
	Parms.SteamMicroTxnAuthorization=SteamMicroTxnAuthorization; \
	OnSteamMicroTxnAuthorization.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_56_DELEGATE \
struct _Script_SteamworksCallbacks_eventOnSteamGetAuthSessionTicket_Parms \
{ \
	FSteamGetAuthSessionTicket SteamGetAuthSessionTicket; \
}; \
static inline void FOnSteamGetAuthSessionTicket_DelegateWrapper(const FMulticastScriptDelegate& OnSteamGetAuthSessionTicket, FSteamGetAuthSessionTicket SteamGetAuthSessionTicket) \
{ \
	_Script_SteamworksCallbacks_eventOnSteamGetAuthSessionTicket_Parms Parms; \
	Parms.SteamGetAuthSessionTicket=SteamGetAuthSessionTicket; \
	OnSteamGetAuthSessionTicket.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_66_RPC_WRAPPERS
#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_66_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPFUserCallbacks(); \
	friend struct Z_Construct_UClass_UPFUserCallbacks_Statics; \
public: \
	DECLARE_CLASS(UPFUserCallbacks, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksCallbacks"), NO_API) \
	DECLARE_SERIALIZER(UPFUserCallbacks)


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUPFUserCallbacks(); \
	friend struct Z_Construct_UClass_UPFUserCallbacks_Statics; \
public: \
	DECLARE_CLASS(UPFUserCallbacks, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamworksCallbacks"), NO_API) \
	DECLARE_SERIALIZER(UPFUserCallbacks)


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPFUserCallbacks(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPFUserCallbacks) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPFUserCallbacks); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPFUserCallbacks); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPFUserCallbacks(UPFUserCallbacks&&); \
	NO_API UPFUserCallbacks(const UPFUserCallbacks&); \
public:


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPFUserCallbacks(UPFUserCallbacks&&); \
	NO_API UPFUserCallbacks(const UPFUserCallbacks&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPFUserCallbacks); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPFUserCallbacks); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPFUserCallbacks)


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_66_PRIVATE_PROPERTY_OFFSET
#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_63_PROLOG
#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_66_PRIVATE_PROPERTY_OFFSET \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_66_RPC_WRAPPERS \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_66_INCLASS \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_66_PRIVATE_PROPERTY_OFFSET \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_66_INCLASS_NO_PURE_DECLS \
	ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectSpaceWars_Plugins_SteamworksCallbacks_Source_SteamworksCallbacks_Public_PFUserCallbacks_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
