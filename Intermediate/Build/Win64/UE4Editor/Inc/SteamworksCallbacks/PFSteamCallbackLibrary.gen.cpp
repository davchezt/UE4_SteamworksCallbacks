// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamworksCallbacks/Public/PFSteamCallbackLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePFSteamCallbackLibrary() {}
// Cross Module References
	STEAMWORKSCALLBACKS_API UClass* Z_Construct_UClass_UPFSteamCallbackLibrary_NoRegister();
	STEAMWORKSCALLBACKS_API UClass* Z_Construct_UClass_UPFSteamCallbackLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SteamworksCallbacks();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UFunction_UPFSteamCallbackLibrary_CallbackCleanUp();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UFunction_UPFSteamCallbackLibrary_GetFriendCallback();
	STEAMWORKSCALLBACKS_API UClass* Z_Construct_UClass_UPFFriendCallbacks_NoRegister();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UFunction_UPFSteamCallbackLibrary_GetMatchMakingCallback();
	STEAMWORKSCALLBACKS_API UClass* Z_Construct_UClass_UPFMatchmakingCallbacks_NoRegister();
	STEAMWORKSCALLBACKS_API UFunction* Z_Construct_UFunction_UPFSteamCallbackLibrary_GetUserCallback();
	STEAMWORKSCALLBACKS_API UClass* Z_Construct_UClass_UPFUserCallbacks_NoRegister();
// End Cross Module References
	void UPFSteamCallbackLibrary::StaticRegisterNativesUPFSteamCallbackLibrary()
	{
		UClass* Class = UPFSteamCallbackLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallbackCleanUp", &UPFSteamCallbackLibrary::execCallbackCleanUp },
			{ "GetFriendCallback", &UPFSteamCallbackLibrary::execGetFriendCallback },
			{ "GetMatchMakingCallback", &UPFSteamCallbackLibrary::execGetMatchMakingCallback },
			{ "GetUserCallback", &UPFSteamCallbackLibrary::execGetUserCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPFSteamCallbackLibrary_CallbackCleanUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPFSteamCallbackLibrary_CallbackCleanUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCallbackPlugin" },
		{ "ModuleRelativePath", "Public/PFSteamCallbackLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPFSteamCallbackLibrary_CallbackCleanUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPFSteamCallbackLibrary, "CallbackCleanUp", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPFSteamCallbackLibrary_CallbackCleanUp_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPFSteamCallbackLibrary_CallbackCleanUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPFSteamCallbackLibrary_CallbackCleanUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPFSteamCallbackLibrary_CallbackCleanUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPFSteamCallbackLibrary_GetFriendCallback_Statics
	{
		struct PFSteamCallbackLibrary_eventGetFriendCallback_Parms
		{
			UPFFriendCallbacks* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPFSteamCallbackLibrary_GetFriendCallback_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PFSteamCallbackLibrary_eventGetFriendCallback_Parms, ReturnValue), Z_Construct_UClass_UPFFriendCallbacks_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPFSteamCallbackLibrary_GetFriendCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFSteamCallbackLibrary_GetFriendCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPFSteamCallbackLibrary_GetFriendCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCallbackPlugin" },
		{ "ModuleRelativePath", "Public/PFSteamCallbackLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPFSteamCallbackLibrary_GetFriendCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPFSteamCallbackLibrary, "GetFriendCallback", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(PFSteamCallbackLibrary_eventGetFriendCallback_Parms), Z_Construct_UFunction_UPFSteamCallbackLibrary_GetFriendCallback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPFSteamCallbackLibrary_GetFriendCallback_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPFSteamCallbackLibrary_GetFriendCallback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPFSteamCallbackLibrary_GetFriendCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPFSteamCallbackLibrary_GetFriendCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPFSteamCallbackLibrary_GetFriendCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPFSteamCallbackLibrary_GetMatchMakingCallback_Statics
	{
		struct PFSteamCallbackLibrary_eventGetMatchMakingCallback_Parms
		{
			UPFMatchmakingCallbacks* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPFSteamCallbackLibrary_GetMatchMakingCallback_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PFSteamCallbackLibrary_eventGetMatchMakingCallback_Parms, ReturnValue), Z_Construct_UClass_UPFMatchmakingCallbacks_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPFSteamCallbackLibrary_GetMatchMakingCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFSteamCallbackLibrary_GetMatchMakingCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPFSteamCallbackLibrary_GetMatchMakingCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCallbackPlugin" },
		{ "ModuleRelativePath", "Public/PFSteamCallbackLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPFSteamCallbackLibrary_GetMatchMakingCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPFSteamCallbackLibrary, "GetMatchMakingCallback", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(PFSteamCallbackLibrary_eventGetMatchMakingCallback_Parms), Z_Construct_UFunction_UPFSteamCallbackLibrary_GetMatchMakingCallback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPFSteamCallbackLibrary_GetMatchMakingCallback_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPFSteamCallbackLibrary_GetMatchMakingCallback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPFSteamCallbackLibrary_GetMatchMakingCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPFSteamCallbackLibrary_GetMatchMakingCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPFSteamCallbackLibrary_GetMatchMakingCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPFSteamCallbackLibrary_GetUserCallback_Statics
	{
		struct PFSteamCallbackLibrary_eventGetUserCallback_Parms
		{
			UPFUserCallbacks* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPFSteamCallbackLibrary_GetUserCallback_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PFSteamCallbackLibrary_eventGetUserCallback_Parms, ReturnValue), Z_Construct_UClass_UPFUserCallbacks_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPFSteamCallbackLibrary_GetUserCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFSteamCallbackLibrary_GetUserCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPFSteamCallbackLibrary_GetUserCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCallbackPlugin" },
		{ "ModuleRelativePath", "Public/PFSteamCallbackLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPFSteamCallbackLibrary_GetUserCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPFSteamCallbackLibrary, "GetUserCallback", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(PFSteamCallbackLibrary_eventGetUserCallback_Parms), Z_Construct_UFunction_UPFSteamCallbackLibrary_GetUserCallback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPFSteamCallbackLibrary_GetUserCallback_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPFSteamCallbackLibrary_GetUserCallback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPFSteamCallbackLibrary_GetUserCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPFSteamCallbackLibrary_GetUserCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPFSteamCallbackLibrary_GetUserCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPFSteamCallbackLibrary_NoRegister()
	{
		return UPFSteamCallbackLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPFSteamCallbackLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPFSteamCallbackLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamworksCallbacks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPFSteamCallbackLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPFSteamCallbackLibrary_CallbackCleanUp, "CallbackCleanUp" }, // 3240959113
		{ &Z_Construct_UFunction_UPFSteamCallbackLibrary_GetFriendCallback, "GetFriendCallback" }, // 663394783
		{ &Z_Construct_UFunction_UPFSteamCallbackLibrary_GetMatchMakingCallback, "GetMatchMakingCallback" }, // 3559582676
		{ &Z_Construct_UFunction_UPFSteamCallbackLibrary_GetUserCallback, "GetUserCallback" }, // 3611641783
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPFSteamCallbackLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PFSteamCallbackLibrary.h" },
		{ "ModuleRelativePath", "Public/PFSteamCallbackLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPFSteamCallbackLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPFSteamCallbackLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPFSteamCallbackLibrary_Statics::ClassParams = {
		&UPFSteamCallbackLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPFSteamCallbackLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPFSteamCallbackLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPFSteamCallbackLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPFSteamCallbackLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPFSteamCallbackLibrary, 2830708366);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPFSteamCallbackLibrary(Z_Construct_UClass_UPFSteamCallbackLibrary, &UPFSteamCallbackLibrary::StaticClass, TEXT("/Script/SteamworksCallbacks"), TEXT("UPFSteamCallbackLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPFSteamCallbackLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
