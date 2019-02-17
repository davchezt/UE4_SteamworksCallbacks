// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamworksCallbacks/Public/PFMatchmakingCallbacks.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePFMatchmakingCallbacks() {}
// Cross Module References
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyInvite__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamworksCallbacks();
	STEAMWORKSCALLBACKS_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyInviteStruct();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyEntered__DelegateSignature();
	STEAMWORKSCALLBACKS_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyEnteredStruct();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyCreated__DelegateSignature();
	STEAMWORKSCALLBACKS_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyCreatedStruct();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyUpdated__DelegateSignature();
	STEAMWORKSCALLBACKS_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyUpdatedStruct();
	STEAMWORKSCALLBACKS_API UEnum* Z_Construct_UEnum_SteamworksCallbacks_ELobbyEnteredResponse();
	STEAMWORKSCALLBACKS_API UEnum* Z_Construct_UEnum_SteamworksCallbacks_EMemberStateChange();
	STEAMWORKSCALLBACKS_API UClass* Z_Construct_UClass_UPFMatchmakingCallbacks_NoRegister();
	STEAMWORKSCALLBACKS_API UClass* Z_Construct_UClass_UPFMatchmakingCallbacks();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyInvite__DelegateSignature_Statics
	{
		struct _Script_SteamworksCallbacks_eventOnSteamLobbyInvite_Parms
		{
			FLobbyInviteStruct LobbyInvite;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LobbyInvite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyInvite__DelegateSignature_Statics::NewProp_LobbyInvite = { UE4CodeGen_Private::EPropertyClass::Struct, "LobbyInvite", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_SteamworksCallbacks_eventOnSteamLobbyInvite_Parms, LobbyInvite), Z_Construct_UScriptStruct_FLobbyInviteStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyInvite__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyInvite__DelegateSignature_Statics::NewProp_LobbyInvite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyInvite__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyInvite__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksCallbacks, "OnSteamLobbyInvite__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_SteamworksCallbacks_eventOnSteamLobbyInvite_Parms), Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyInvite__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyInvite__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyInvite__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyInvite__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyInvite__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyInvite__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyEntered__DelegateSignature_Statics
	{
		struct _Script_SteamworksCallbacks_eventOnSteamLobbyEntered_Parms
		{
			FLobbyEnteredStruct LobbyEntered;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LobbyEntered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyEntered__DelegateSignature_Statics::NewProp_LobbyEntered = { UE4CodeGen_Private::EPropertyClass::Struct, "LobbyEntered", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_SteamworksCallbacks_eventOnSteamLobbyEntered_Parms, LobbyEntered), Z_Construct_UScriptStruct_FLobbyEnteredStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyEntered__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyEntered__DelegateSignature_Statics::NewProp_LobbyEntered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyEntered__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyEntered__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksCallbacks, "OnSteamLobbyEntered__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_SteamworksCallbacks_eventOnSteamLobbyEntered_Parms), Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyEntered__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyEntered__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyEntered__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyEntered__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyEntered__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyEntered__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyCreated__DelegateSignature_Statics
	{
		struct _Script_SteamworksCallbacks_eventOnSteamLobbyCreated_Parms
		{
			FLobbyCreatedStruct LobbyCreated;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LobbyCreated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyCreated__DelegateSignature_Statics::NewProp_LobbyCreated = { UE4CodeGen_Private::EPropertyClass::Struct, "LobbyCreated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_SteamworksCallbacks_eventOnSteamLobbyCreated_Parms, LobbyCreated), Z_Construct_UScriptStruct_FLobbyCreatedStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyCreated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyCreated__DelegateSignature_Statics::NewProp_LobbyCreated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyCreated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksCallbacks, "OnSteamLobbyCreated__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_SteamworksCallbacks_eventOnSteamLobbyCreated_Parms), Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyCreated__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyCreated__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyCreated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyCreated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyCreated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyCreated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyUpdated__DelegateSignature_Statics
	{
		struct _Script_SteamworksCallbacks_eventOnSteamLobbyUpdated_Parms
		{
			FLobbyUpdatedStruct LobbyUpdated;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LobbyUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyUpdated__DelegateSignature_Statics::NewProp_LobbyUpdated = { UE4CodeGen_Private::EPropertyClass::Struct, "LobbyUpdated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_SteamworksCallbacks_eventOnSteamLobbyUpdated_Parms, LobbyUpdated), Z_Construct_UScriptStruct_FLobbyUpdatedStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyUpdated__DelegateSignature_Statics::NewProp_LobbyUpdated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamworksCallbacks, "OnSteamLobbyUpdated__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_SteamworksCallbacks_eventOnSteamLobbyUpdated_Parms), Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyUpdated__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyUpdated__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyUpdated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ELobbyEnteredResponse_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamworksCallbacks_ELobbyEnteredResponse, Z_Construct_UPackage__Script_SteamworksCallbacks(), TEXT("ELobbyEnteredResponse"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELobbyEnteredResponse(ELobbyEnteredResponse_StaticEnum, TEXT("/Script/SteamworksCallbacks"), TEXT("ELobbyEnteredResponse"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamworksCallbacks_ELobbyEnteredResponse_CRC() { return 2149967425U; }
	UEnum* Z_Construct_UEnum_SteamworksCallbacks_ELobbyEnteredResponse()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamworksCallbacks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELobbyEnteredResponse"), 0, Get_Z_Construct_UEnum_SteamworksCallbacks_ELobbyEnteredResponse_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELobbyEnteredResponse::EResponse_Success", (int64)ELobbyEnteredResponse::EResponse_Success },
				{ "ELobbyEnteredResponse::EResponse_DoesntExist", (int64)ELobbyEnteredResponse::EResponse_DoesntExist },
				{ "ELobbyEnteredResponse::EResponse_NotAllowed", (int64)ELobbyEnteredResponse::EResponse_NotAllowed },
				{ "ELobbyEnteredResponse::EResponse_Full", (int64)ELobbyEnteredResponse::EResponse_Full },
				{ "ELobbyEnteredResponse::EResponse_UnexpectedError", (int64)ELobbyEnteredResponse::EResponse_UnexpectedError },
				{ "ELobbyEnteredResponse::EResponse_Banned", (int64)ELobbyEnteredResponse::EResponse_Banned },
				{ "ELobbyEnteredResponse::EResponse_Limited", (int64)ELobbyEnteredResponse::EResponse_Limited },
				{ "ELobbyEnteredResponse::EResponse_ClanDisabled", (int64)ELobbyEnteredResponse::EResponse_ClanDisabled },
				{ "ELobbyEnteredResponse::EResponse_CommunityBan", (int64)ELobbyEnteredResponse::EResponse_CommunityBan },
				{ "ELobbyEnteredResponse::EResponse_MemberBlockedYou", (int64)ELobbyEnteredResponse::EResponse_MemberBlockedYou },
				{ "ELobbyEnteredResponse::EResponse_YouBlockedMember", (int64)ELobbyEnteredResponse::EResponse_YouBlockedMember },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EResponse_Banned.DisplayName", "Banned" },
				{ "EResponse_ClanDisabled.DisplayName", "ClanDisabled" },
				{ "EResponse_CommunityBan.DisplayName", "CommunityBan" },
				{ "EResponse_DoesntExist.DisplayName", "DoesntExist" },
				{ "EResponse_Full.DisplayName", "Full" },
				{ "EResponse_Limited.DisplayName", "Limited" },
				{ "EResponse_MemberBlockedYou.DisplayName", "MemberBlockedYou" },
				{ "EResponse_NotAllowed.DisplayName", "NotAllowed" },
				{ "EResponse_Success.DisplayName", "Success" },
				{ "EResponse_UnexpectedError.DisplayName", "UnexpectedError" },
				{ "EResponse_YouBlockedMember.DisplayName", "YouBlockedMember" },
				{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamworksCallbacks,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELobbyEnteredResponse",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ELobbyEnteredResponse",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMemberStateChange_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamworksCallbacks_EMemberStateChange, Z_Construct_UPackage__Script_SteamworksCallbacks(), TEXT("EMemberStateChange"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMemberStateChange(EMemberStateChange_StaticEnum, TEXT("/Script/SteamworksCallbacks"), TEXT("EMemberStateChange"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamworksCallbacks_EMemberStateChange_CRC() { return 3921816692U; }
	UEnum* Z_Construct_UEnum_SteamworksCallbacks_EMemberStateChange()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamworksCallbacks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMemberStateChange"), 0, Get_Z_Construct_UEnum_SteamworksCallbacks_EMemberStateChange_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMemberStateChange::ChatMemberStateChangeEntered", (int64)EMemberStateChange::ChatMemberStateChangeEntered },
				{ "EMemberStateChange::ChatMemberStateChangeLeft", (int64)EMemberStateChange::ChatMemberStateChangeLeft },
				{ "EMemberStateChange::ChatMemberStateChangeDisconnected", (int64)EMemberStateChange::ChatMemberStateChangeDisconnected },
				{ "EMemberStateChange::ChatMemberStateChangedKicked", (int64)EMemberStateChange::ChatMemberStateChangedKicked },
				{ "EMemberStateChange::ChatMemberStateChangeBanned", (int64)EMemberStateChange::ChatMemberStateChangeBanned },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChatMemberStateChangeBanned.DisplayName", "Banned" },
				{ "ChatMemberStateChangeDisconnected.DisplayName", "Disconnected" },
				{ "ChatMemberStateChangedKicked.DisplayName", "Kicked" },
				{ "ChatMemberStateChangeEntered.DisplayName", "Entered" },
				{ "ChatMemberStateChangeLeft.DisplayName", "Left" },
				{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamworksCallbacks,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMemberStateChange",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMemberStateChange",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FLobbyInviteStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMWORKSCALLBACKS_API uint32 Get_Z_Construct_UScriptStruct_FLobbyInviteStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyInviteStruct, Z_Construct_UPackage__Script_SteamworksCallbacks(), TEXT("LobbyInviteStruct"), sizeof(FLobbyInviteStruct), Get_Z_Construct_UScriptStruct_FLobbyInviteStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyInviteStruct(FLobbyInviteStruct::StaticStruct, TEXT("/Script/SteamworksCallbacks"), TEXT("LobbyInviteStruct"), false, nullptr, nullptr);
static struct FScriptStruct_SteamworksCallbacks_StaticRegisterNativesFLobbyInviteStruct
{
	FScriptStruct_SteamworksCallbacks_StaticRegisterNativesFLobbyInviteStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LobbyInviteStruct")),new UScriptStruct::TCppStructOps<FLobbyInviteStruct>);
	}
} ScriptStruct_SteamworksCallbacks_StaticRegisterNativesFLobbyInviteStruct;
	struct Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamGameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SteamGameID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLobbyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SteamLobbyID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SteamUserID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyInviteStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::NewProp_SteamGameID_MetaData[] = {
		{ "Category", "LobbyInviteStruct" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::NewProp_SteamGameID = { UE4CodeGen_Private::EPropertyClass::Int, "SteamGameID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLobbyInviteStruct, SteamGameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::NewProp_SteamGameID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::NewProp_SteamGameID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::NewProp_SteamLobbyID_MetaData[] = {
		{ "Category", "LobbyInviteStruct" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::NewProp_SteamLobbyID = { UE4CodeGen_Private::EPropertyClass::Int, "SteamLobbyID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLobbyInviteStruct, SteamLobbyID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::NewProp_SteamLobbyID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::NewProp_SteamLobbyID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::NewProp_SteamUserID_MetaData[] = {
		{ "Category", "LobbyInviteStruct" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::NewProp_SteamUserID = { UE4CodeGen_Private::EPropertyClass::Int, "SteamUserID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLobbyInviteStruct, SteamUserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::NewProp_SteamUserID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::NewProp_SteamUserID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::NewProp_SteamGameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::NewProp_SteamLobbyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::NewProp_SteamUserID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksCallbacks,
		nullptr,
		&NewStructOps,
		"LobbyInviteStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FLobbyInviteStruct),
		alignof(FLobbyInviteStruct),
		Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyInviteStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyInviteStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamworksCallbacks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyInviteStruct"), sizeof(FLobbyInviteStruct), Get_Z_Construct_UScriptStruct_FLobbyInviteStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyInviteStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyInviteStruct_CRC() { return 1009100209U; }
class UScriptStruct* FLobbyEnteredStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMWORKSCALLBACKS_API uint32 Get_Z_Construct_UScriptStruct_FLobbyEnteredStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyEnteredStruct, Z_Construct_UPackage__Script_SteamworksCallbacks(), TEXT("LobbyEnteredStruct"), sizeof(FLobbyEnteredStruct), Get_Z_Construct_UScriptStruct_FLobbyEnteredStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyEnteredStruct(FLobbyEnteredStruct::StaticStruct, TEXT("/Script/SteamworksCallbacks"), TEXT("LobbyEnteredStruct"), false, nullptr, nullptr);
static struct FScriptStruct_SteamworksCallbacks_StaticRegisterNativesFLobbyEnteredStruct
{
	FScriptStruct_SteamworksCallbacks_StaticRegisterNativesFLobbyEnteredStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LobbyEnteredStruct")),new UScriptStruct::TCppStructOps<FLobbyEnteredStruct>);
	}
} ScriptStruct_SteamworksCallbacks_StaticRegisterNativesFLobbyEnteredStruct;
	struct Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyEnteredResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LobbyEnteredResponse;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LobbyEnteredResponse_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLobbyBlocked_MetaData[];
#endif
		static void NewProp_SteamLobbyBlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SteamLobbyBlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLobbyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SteamLobbyID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyEnteredStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_LobbyEnteredResponse_MetaData[] = {
		{ "Category", "LobbyEnteredStruct" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_LobbyEnteredResponse = { UE4CodeGen_Private::EPropertyClass::Enum, "LobbyEnteredResponse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLobbyEnteredStruct, LobbyEnteredResponse), Z_Construct_UEnum_SteamworksCallbacks_ELobbyEnteredResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_LobbyEnteredResponse_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_LobbyEnteredResponse_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_LobbyEnteredResponse_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_SteamLobbyBlocked_MetaData[] = {
		{ "Category", "LobbyEnteredStruct" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_SteamLobbyBlocked_SetBit(void* Obj)
	{
		((FLobbyEnteredStruct*)Obj)->SteamLobbyBlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_SteamLobbyBlocked = { UE4CodeGen_Private::EPropertyClass::Bool, "SteamLobbyBlocked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLobbyEnteredStruct), &Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_SteamLobbyBlocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_SteamLobbyBlocked_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_SteamLobbyBlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_SteamLobbyID_MetaData[] = {
		{ "Category", "LobbyEnteredStruct" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_SteamLobbyID = { UE4CodeGen_Private::EPropertyClass::Int, "SteamLobbyID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLobbyEnteredStruct, SteamLobbyID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_SteamLobbyID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_SteamLobbyID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_LobbyEnteredResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_LobbyEnteredResponse_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_SteamLobbyBlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::NewProp_SteamLobbyID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksCallbacks,
		nullptr,
		&NewStructOps,
		"LobbyEnteredStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FLobbyEnteredStruct),
		alignof(FLobbyEnteredStruct),
		Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyEnteredStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyEnteredStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamworksCallbacks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyEnteredStruct"), sizeof(FLobbyEnteredStruct), Get_Z_Construct_UScriptStruct_FLobbyEnteredStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyEnteredStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyEnteredStruct_CRC() { return 204267193U; }
class UScriptStruct* FLobbyCreatedStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMWORKSCALLBACKS_API uint32 Get_Z_Construct_UScriptStruct_FLobbyCreatedStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyCreatedStruct, Z_Construct_UPackage__Script_SteamworksCallbacks(), TEXT("LobbyCreatedStruct"), sizeof(FLobbyCreatedStruct), Get_Z_Construct_UScriptStruct_FLobbyCreatedStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyCreatedStruct(FLobbyCreatedStruct::StaticStruct, TEXT("/Script/SteamworksCallbacks"), TEXT("LobbyCreatedStruct"), false, nullptr, nullptr);
static struct FScriptStruct_SteamworksCallbacks_StaticRegisterNativesFLobbyCreatedStruct
{
	FScriptStruct_SteamworksCallbacks_StaticRegisterNativesFLobbyCreatedStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LobbyCreatedStruct")),new UScriptStruct::TCppStructOps<FLobbyCreatedStruct>);
	}
} ScriptStruct_SteamworksCallbacks_StaticRegisterNativesFLobbyCreatedStruct;
	struct Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyCreatedEResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LobbyCreatedEResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLobbyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SteamLobbyID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyCreatedStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::NewProp_LobbyCreatedEResult_MetaData[] = {
		{ "Category", "LobbyCreatedStruct" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::NewProp_LobbyCreatedEResult = { UE4CodeGen_Private::EPropertyClass::Int, "LobbyCreatedEResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLobbyCreatedStruct, LobbyCreatedEResult), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::NewProp_LobbyCreatedEResult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::NewProp_LobbyCreatedEResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::NewProp_SteamLobbyID_MetaData[] = {
		{ "Category", "LobbyCreatedStruct" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::NewProp_SteamLobbyID = { UE4CodeGen_Private::EPropertyClass::Int, "SteamLobbyID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLobbyCreatedStruct, SteamLobbyID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::NewProp_SteamLobbyID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::NewProp_SteamLobbyID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::NewProp_LobbyCreatedEResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::NewProp_SteamLobbyID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksCallbacks,
		nullptr,
		&NewStructOps,
		"LobbyCreatedStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FLobbyCreatedStruct),
		alignof(FLobbyCreatedStruct),
		Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyCreatedStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyCreatedStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamworksCallbacks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyCreatedStruct"), sizeof(FLobbyCreatedStruct), Get_Z_Construct_UScriptStruct_FLobbyCreatedStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyCreatedStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyCreatedStruct_CRC() { return 245280291U; }
class UScriptStruct* FLobbyUpdatedStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMWORKSCALLBACKS_API uint32 Get_Z_Construct_UScriptStruct_FLobbyUpdatedStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyUpdatedStruct, Z_Construct_UPackage__Script_SteamworksCallbacks(), TEXT("LobbyUpdatedStruct"), sizeof(FLobbyUpdatedStruct), Get_Z_Construct_UScriptStruct_FLobbyUpdatedStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyUpdatedStruct(FLobbyUpdatedStruct::StaticStruct, TEXT("/Script/SteamworksCallbacks"), TEXT("LobbyUpdatedStruct"), false, nullptr, nullptr);
static struct FScriptStruct_SteamworksCallbacks_StaticRegisterNativesFLobbyUpdatedStruct
{
	FScriptStruct_SteamworksCallbacks_StaticRegisterNativesFLobbyUpdatedStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LobbyUpdatedStruct")),new UScriptStruct::TCppStructOps<FLobbyUpdatedStruct>);
	}
} ScriptStruct_SteamworksCallbacks_StaticRegisterNativesFLobbyUpdatedStruct;
	struct Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberStateChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemberStateChange;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemberStateChange_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MakingChangeSteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MakingChangeSteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserChangedSteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_UserChangedSteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLobbyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SteamLobbyID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyUpdatedStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_MemberStateChange_MetaData[] = {
		{ "Category", "LobbyUpdatedStruct" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_MemberStateChange = { UE4CodeGen_Private::EPropertyClass::Enum, "MemberStateChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLobbyUpdatedStruct, MemberStateChange), Z_Construct_UEnum_SteamworksCallbacks_EMemberStateChange, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_MemberStateChange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_MemberStateChange_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_MemberStateChange_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_MakingChangeSteamID_MetaData[] = {
		{ "Category", "LobbyUpdatedStruct" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_MakingChangeSteamID = { UE4CodeGen_Private::EPropertyClass::Int, "MakingChangeSteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLobbyUpdatedStruct, MakingChangeSteamID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_MakingChangeSteamID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_MakingChangeSteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_UserChangedSteamID_MetaData[] = {
		{ "Category", "LobbyUpdatedStruct" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_UserChangedSteamID = { UE4CodeGen_Private::EPropertyClass::Int, "UserChangedSteamID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLobbyUpdatedStruct, UserChangedSteamID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_UserChangedSteamID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_UserChangedSteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_SteamLobbyID_MetaData[] = {
		{ "Category", "LobbyUpdatedStruct" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_SteamLobbyID = { UE4CodeGen_Private::EPropertyClass::Int, "SteamLobbyID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FLobbyUpdatedStruct, SteamLobbyID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_SteamLobbyID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_SteamLobbyID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_MemberStateChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_MemberStateChange_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_MakingChangeSteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_UserChangedSteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::NewProp_SteamLobbyID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksCallbacks,
		nullptr,
		&NewStructOps,
		"LobbyUpdatedStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FLobbyUpdatedStruct),
		alignof(FLobbyUpdatedStruct),
		Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyUpdatedStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyUpdatedStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamworksCallbacks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyUpdatedStruct"), sizeof(FLobbyUpdatedStruct), Get_Z_Construct_UScriptStruct_FLobbyUpdatedStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyUpdatedStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyUpdatedStruct_CRC() { return 1986271886U; }
	void UPFMatchmakingCallbacks::StaticRegisterNativesUPFMatchmakingCallbacks()
	{
	}
	UClass* Z_Construct_UClass_UPFMatchmakingCallbacks_NoRegister()
	{
		return UPFMatchmakingCallbacks::StaticClass();
	}
	struct Z_Construct_UClass_UPFMatchmakingCallbacks_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLobbyInviteCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamLobbyInviteCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLobbyEnteredCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamLobbyEnteredCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLobbyCreatedCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamLobbyCreatedCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLobbyUpdatedCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamLobbyUpdatedCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksCallbacks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PFMatchmakingCallbacks.h" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyInviteCallback_MetaData[] = {
		{ "Category", "Callbacks" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyInviteCallback = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "SteamLobbyInviteCallback", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPFMatchmakingCallbacks, SteamLobbyInviteCallback), Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyInvite__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyInviteCallback_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyInviteCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyEnteredCallback_MetaData[] = {
		{ "Category", "Callbacks" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyEnteredCallback = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "SteamLobbyEnteredCallback", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPFMatchmakingCallbacks, SteamLobbyEnteredCallback), Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyEntered__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyEnteredCallback_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyEnteredCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyCreatedCallback_MetaData[] = {
		{ "Category", "Callbacks" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyCreatedCallback = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "SteamLobbyCreatedCallback", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPFMatchmakingCallbacks, SteamLobbyCreatedCallback), Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyCreated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyCreatedCallback_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyCreatedCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyUpdatedCallback_MetaData[] = {
		{ "Category", "Callbacks" },
		{ "ModuleRelativePath", "Public/PFMatchmakingCallbacks.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyUpdatedCallback = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "SteamLobbyUpdatedCallback", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPFMatchmakingCallbacks, SteamLobbyUpdatedCallback), Z_Construct_UDelegateFunction_SteamworksCallbacks_OnSteamLobbyUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyUpdatedCallback_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyUpdatedCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyInviteCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyEnteredCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyCreatedCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::NewProp_SteamLobbyUpdatedCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPFMatchmakingCallbacks>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::ClassParams = {
		&UPFMatchmakingCallbacks::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPFMatchmakingCallbacks()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPFMatchmakingCallbacks_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPFMatchmakingCallbacks, 2959755660);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPFMatchmakingCallbacks(Z_Construct_UClass_UPFMatchmakingCallbacks, &UPFMatchmakingCallbacks::StaticClass, TEXT("/Script/SteamworksCallbacks"), TEXT("UPFMatchmakingCallbacks"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPFMatchmakingCallbacks);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
