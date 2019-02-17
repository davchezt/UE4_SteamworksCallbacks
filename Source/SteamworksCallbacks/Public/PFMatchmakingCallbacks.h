
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#pragma push_macro("ARRAY_COUNT")
#undef ARRAY_COUNT
THIRD_PARTY_INCLUDES_START
#include "ThirdParty/Steamworks/Steamv139/sdk/public/steam/steam_api.h"
#include "ThirdParty/Steamworks/Steamv139/sdk/public/steam/isteammatchmaking.h"
THIRD_PARTY_INCLUDES_END
#pragma pop_macro("ARRAY_COUNT")
#include "PFMatchmakingCallbacks.generated.h"

/**
*
*/

UENUM(BlueprintType)
enum class EMemberStateChange : uint8 {

	ChatMemberStateChangeEntered = 0x0001			UMETA(DisplayName = "Entered"),
	ChatMemberStateChangeLeft = 0x0002				UMETA(DisplayName = "Left"),
	ChatMemberStateChangeDisconnected = 0x0004		UMETA(DisplayName = "Disconnected"),
	ChatMemberStateChangedKicked = 0x0008			UMETA(DisplayName = "Kicked"),
	ChatMemberStateChangeBanned = 0x0010			UMETA(DisplayName = "Banned")
};

UENUM(BlueprintType)
enum class ELobbyEnteredResponse : uint8 {

	EResponse_Success = 1				UMETA(DisplayName = "Success"),
	EResponse_DoesntExist = 2			UMETA(DisplayName = "DoesntExist"),
	EResponse_NotAllowed = 3			UMETA(DisplayName = "NotAllowed"),
	EResponse_Full = 4					UMETA(DisplayName = "Full"),
	EResponse_UnexpectedError = 5		UMETA(DisplayName = "UnexpectedError"),
	EResponse_Banned = 6				UMETA(DisplayName = "Banned"),
	EResponse_Limited = 7				UMETA(DisplayName = "Limited"),
	EResponse_ClanDisabled = 8			UMETA(DisplayName = "ClanDisabled"),
	EResponse_CommunityBan = 9			UMETA(DisplayName = "CommunityBan"),
	EResponse_MemberBlockedYou = 10		UMETA(DisplayName = "MemberBlockedYou"),
	EResponse_YouBlockedMember = 11		UMETA(DisplayName = "YouBlockedMember")
};

USTRUCT(BlueprintType)
struct FLobbyUpdatedStruct {

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	int SteamLobbyID;
	UPROPERTY(BlueprintReadWrite)
	int UserChangedSteamID;
	UPROPERTY(BlueprintReadWrite)
	int MakingChangeSteamID;
	UPROPERTY(BlueprintReadWrite)
	EMemberStateChange MemberStateChange;
};

USTRUCT(BlueprintType)
struct FLobbyCreatedStruct {

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	int SteamLobbyID;
	UPROPERTY(BlueprintReadWrite)
	int LobbyCreatedEResult;
		
};

USTRUCT(BlueprintType)
struct FLobbyEnteredStruct {

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	int SteamLobbyID;
	
	UPROPERTY(BlueprintReadWrite)
	bool SteamLobbyBlocked;

	UPROPERTY(BlueprintReadWrite)
	ELobbyEnteredResponse LobbyEnteredResponse;

};


USTRUCT(BlueprintType)
struct FLobbyInviteStruct {

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	int SteamUserID;

	UPROPERTY(BlueprintReadWrite)
	int SteamLobbyID;

	UPROPERTY(BlueprintReadWrite)
	int SteamGameID;

};




DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamLobbyUpdated, FLobbyUpdatedStruct, LobbyUpdated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamLobbyCreated, FLobbyCreatedStruct, LobbyCreated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamLobbyEntered, FLobbyEnteredStruct, LobbyEntered);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamLobbyInvite, FLobbyInviteStruct, LobbyInvite);

UCLASS()
class STEAMWORKSCALLBACKS_API UPFMatchmakingCallbacks : public UObject
{
	GENERATED_BODY()
public:
	UPFMatchmakingCallbacks();
	~UPFMatchmakingCallbacks();
	void InitalizeSteamCallbacks();

/* Callback Delegates */
public:
	UPROPERTY(BlueprintAssignable, Category = "Callbacks")
	FOnSteamLobbyUpdated SteamLobbyUpdatedCallback;

	UPROPERTY(BlueprintAssignable, Category = "Callbacks")
	FOnSteamLobbyCreated SteamLobbyCreatedCallback;

	UPROPERTY(BlueprintAssignable, Category = "Callbacks")
	FOnSteamLobbyEntered SteamLobbyEnteredCallback;

	UPROPERTY(BlueprintAssignable, Category = "Callbacks")
	FOnSteamLobbyInvite SteamLobbyInviteCallback;


/* Steam Maunal Callbacks */
private:
	STEAM_CALLBACK_MANUAL(UPFMatchmakingCallbacks, OnSteamLobbyUpdated, LobbyChatUpdate_t, OnSteamLobbyUpdatedCallback);
	STEAM_CALLBACK_MANUAL(UPFMatchmakingCallbacks, OnSteamLobbyCreated, LobbyCreated_t, OnSteamLobbyCreatedCallback);
	STEAM_CALLBACK_MANUAL(UPFMatchmakingCallbacks, OnSteamLobbyEntered, LobbyEnter_t, OnSteamLobbyEnteredCallback);
	STEAM_CALLBACK_MANUAL(UPFMatchmakingCallbacks, OnSteamLobbyInvite, LobbyInvite_t, OnSteamLobbyInviteCallback);


};
