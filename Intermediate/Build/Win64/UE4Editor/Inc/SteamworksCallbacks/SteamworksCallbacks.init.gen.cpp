// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamworksCallbacks_init() {}
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamGameOverlayActivated__DelegateSignature();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamPersonaStateChange__DelegateSignature();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamSetPersonaName__DelegateSignature();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyUpdated__DelegateSignature();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyCreated__DelegateSignature();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyEntered__DelegateSignature();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyInvite__DelegateSignature();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamGetAuthSessionTicket__DelegateSignature();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamMicroTxnAuthorization__DelegateSignature();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamServerConnectFailure__DelegateSignature();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamServersDisconnected__DelegateSignature();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnLicensesUpdated__DelegateSignature();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamServersConnected__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamworksCallbacks()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamGameOverlayActivated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamPersonaStateChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamSetPersonaName__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyCreated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyEntered__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyInvite__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamGetAuthSessionTicket__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamMicroTxnAuthorization__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamServerConnectFailure__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamServersDisconnected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SteamworksCallbacks_OnLicensesUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamServersConnected__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/SteamworksCallbacks",
				PKG_CompiledIn | 0x00000000,
				0xE5CC1B5E,
				0x243F7648,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
