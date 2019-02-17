#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PFSteamCallbackLibrary.generated.h"

/**
 * 
 */
class UPFMatchmakingCallbacks;
class UPFFriendCallbacks;
class UPFUserCallbacks;
class APSCallbackCleanUpActor;

UCLASS()
class STEAMWORKSCALLBACKS_API UPFSteamCallbackLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

private:

	static UPFMatchmakingCallbacks* MatchmakingCallbackRoot;
	static UPFFriendCallbacks* FriendCallbackRoot;
	static UPFUserCallbacks* UserCallbackRoot;

public:
	UPFSteamCallbackLibrary();
	~UPFSteamCallbackLibrary();

	

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCallbackPlugin")
	static UPFMatchmakingCallbacks* GetMatchMakingCallback();

	UFUNCTION(BlueprintCallable, BlueprintPure,  Category = "SteamCallbackPlugin")
	static UPFFriendCallbacks* GetFriendCallback();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCallbackPlugin")
	static UPFUserCallbacks* GetUserCallback();

	UFUNCTION(BlueprintCallable, Category = "SteamCallbackPlugin")
	static void CallbackCleanUp();

};
