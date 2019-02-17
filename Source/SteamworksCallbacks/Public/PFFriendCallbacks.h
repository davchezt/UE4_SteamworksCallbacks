#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#pragma push_macro("ARRAY_COUNT")
#undef ARRAY_COUNT
THIRD_PARTY_INCLUDES_START
#include "ThirdParty/Steamworks/Steamv139/sdk/public/steam/steam_api.h"
#include "ThirdParty/Steamworks/Steamv139/sdk/public/steam/isteamfriends.h"
THIRD_PARTY_INCLUDES_END
#pragma pop_macro("ARRAY_COUNT")
#include "PFFriendCallbacks.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class ESteamPersonaChange : uint8 {

	EPersonaChangeName = 1						UMETA(DisplayName = "ChangedName"),
	EPersonaChangeStatus = 2					UMETA(DisplayName = "ChangedStatus"),
	EPersonaChangeComeOnline = 3				UMETA(DisplayName = "ComeOnline"),
	EPersonaChangeGoneOffline = 4				UMETA(DisplayName = "GoneOffline"),
	EPersonaChangeGamePlayed = 5				UMETA(DisplayName = "ChangedGame"),
	EPersonaChangeGameServer = 6				UMETA(DisplayName = "ChangeServer"),
	EPersonaChangeAvatar = 7					UMETA(DisplayName = "ChangedAvatar"),
	EPersonaChangeJoinedSource = 8				UMETA(DisplayName = "ChangedSource"),
	EPersonaChangeLeftSource = 9				UMETA(DisplayName = "LeftSource"),
	EPersonaChangeRelationshipChanged = 10		UMETA(DisplayName = "ChangedRelationship"),
	EPersonaChangeNameFirstSet = 11				UMETA(DisplayName = "ChangedFirstName"),
	EPersonaChangeFacebookInfo = 12				UMETA(DisplayName = "ChangedFacebookInfo"),
	EPersonaChangeNickname = 13					UMETA(DisplayName = "ChangedNickname"),
	EPersonaChangeSteamLevel = 14				UMETA(DisplayName = "ChangeSteamLevel"),
	EPersonaChangeErr = 15						UMETA(DisplayName = "Error")
};

USTRUCT(BlueprintType)
struct FPersonaStateChange {

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	int SteamUserID;

	UPROPERTY(BlueprintReadWrite)
	ESteamPersonaChange PersonaStateChange;


};

USTRUCT(BlueprintType)
struct FSteamSetPersonaName {

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	bool bSuccess;
	UPROPERTY(BlueprintReadWrite)
	bool bLocalSuccess;
	UPROPERTY(BlueprintReadWrite)
	int SteamSetPersonaEResult;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamGameOverlayActivated, bool, bActive);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamPersonaStateChange, FPersonaStateChange, PersonaStateChange);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamSetPersonaName, FSteamSetPersonaName, SteamSetPersonaName);

UCLASS()
class STEAMWORKSCALLBACKS_API UPFFriendCallbacks : public UObject
{
	GENERATED_BODY()
	
public:
	UPFFriendCallbacks();
	~UPFFriendCallbacks();
	void InitalizeSteamCallbacks();
	uint8 ConvertEPersonaState(int i);
	
	/*Callback Delegates*/
public:
	UPROPERTY(BlueprintAssignable, Category = "Callbacks")
	FOnSteamGameOverlayActivated SteamGameOverlayActivatedCallback;
	UPROPERTY(BlueprintAssignable, Category = "Callbacks")
	FOnSteamPersonaStateChange SteamPersonaStateChangeCallback;
	UPROPERTY(BlueprintAssignable, Category = "Callbacks")
	FOnSteamSetPersonaName SteamSetPersonaNameCallback;

/*Steam Manual Callbacks */
private:
	STEAM_CALLBACK_MANUAL(UPFFriendCallbacks, OnSteamGameOverlay, GameOverlayActivated_t, OnSteamGameOverlayActivatedCallback);
	STEAM_CALLBACK_MANUAL(UPFFriendCallbacks, OnSteamPersonaStateChange, PersonaStateChange_t, OnSteamPersonaStateChangeCallback);
	STEAM_CALLBACK_MANUAL(UPFFriendCallbacks, OnSteamSetPersonaName, SetPersonaNameResponse_t, OnSteamSetPersonaNameCallback);


};
