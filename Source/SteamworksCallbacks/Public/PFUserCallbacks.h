#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#pragma push_macro("ARRAY_COUNT")
#undef ARRAY_COUNT
THIRD_PARTY_INCLUDES_START
#include "ThirdParty/Steamworks/Steamv139/sdk/public/steam/steam_api.h"
#include "ThirdParty/Steamworks/Steamv139/sdk/public/steam/isteamuser.h"
THIRD_PARTY_INCLUDES_END
#pragma pop_macro("ARRAY_COUNT")
#include "PFUserCallbacks.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FSteamGetAuthSessionTicket {

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	int AuthTicket;
	UPROPERTY(BlueprintReadWrite)
	int SteamGetAuthSessionTicketResults;


};

USTRUCT(BlueprintType)
struct FSteamMicroTxnAuthorization {

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	int AppID;
	UPROPERTY(BlueprintReadWrite)
	int OrderID;
	UPROPERTY(BlueprintReadWrite)
	bool bAuthorized;
};

USTRUCT(BlueprintType)
struct FSteamServerConnectFailure {

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	int SteamServerConnectFailureResults;
	UPROPERTY(BlueprintReadWrite)
	bool bStillRetrying;
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamGetAuthSessionTicket, FSteamGetAuthSessionTicket, SteamGetAuthSessionTicket);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamMicroTxnAuthorization, FSteamMicroTxnAuthorization, SteamMicroTxnAuthorization);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamServerConnectFailure, FSteamServerConnectFailure, SteamServerConnectFailure);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamServersDisconnected, int, OnSteamServersDisconnectedResults);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLicensesUpdated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSteamServersConnected);

UCLASS()
class STEAMWORKSCALLBACKS_API UPFUserCallbacks : public UObject
{
	GENERATED_BODY()

public:
	UPFUserCallbacks();
	~UPFUserCallbacks();
	void InitalizeSteamCallbacks();

public:
	UPROPERTY(BlueprintAssignable, Category = "Callbacks")
	FOnSteamGetAuthSessionTicket SteamGetAuthSessionTicketCallback;
	UPROPERTY(BlueprintAssignable, Category = "Callbacks")
	FOnSteamMicroTxnAuthorization SteamMicroTxnAuthorizationCallback;
	UPROPERTY(BlueprintAssignable, Category = "Callbacks")
	FOnLicensesUpdated LicensesUpdatedCallback;
	UPROPERTY(BlueprintAssignable, Category = "Callbacks")
	FOnSteamServerConnectFailure SteamServerConnectFailureCallback;
	UPROPERTY(BlueprintAssignable, Category = "Callbacks")
	FOnSteamServersConnected SteamServersConnectedCallback;
	UPROPERTY(BlueprintAssignable, Category = "Callbacks")
	FOnSteamServersDisconnected SteamServersDisconnectedCallback;
	
private:
	STEAM_CALLBACK_MANUAL(UPFUserCallbacks, OnSteamGetAuthSessionTicket, GetAuthSessionTicketResponse_t, OnSteamGetAuthSessionTicketCallback);
	STEAM_CALLBACK_MANUAL(UPFUserCallbacks, OnSteamMicroTxnAuthorization, MicroTxnAuthorizationResponse_t, OnSteamMicroTxnAuthorizationCallback);
	STEAM_CALLBACK_MANUAL(UPFUserCallbacks, OnSteamLicensesUpdated, LicensesUpdated_t, OnSteamLicensesUpdatedCallback);
	STEAM_CALLBACK_MANUAL(UPFUserCallbacks, OnSteamServerConnectFailure, SteamServerConnectFailure_t, OnSteamServerConnectFailureCallback);
	STEAM_CALLBACK_MANUAL(UPFUserCallbacks, OnSteamServerConnected, SteamServersConnected_t, OnSteamServerConnectedCallback);
	STEAM_CALLBACK_MANUAL(UPFUserCallbacks, OnSteamServersDisconnected, SteamServersDisconnected_t, OnSteamServersDisconnectedCallback);

	
};
