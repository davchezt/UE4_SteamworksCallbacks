#include "PFMatchmakingCallbacks.h"

UPFMatchmakingCallbacks::UPFMatchmakingCallbacks(){}

UPFMatchmakingCallbacks::~UPFMatchmakingCallbacks(){UE_LOG(LogTemp, Warning, TEXT("Cleaning Up Matchmaking Callbacks"));}

void UPFMatchmakingCallbacks::InitalizeSteamCallbacks() {
	OnSteamLobbyUpdatedCallback.Register(this, &UPFMatchmakingCallbacks::OnSteamLobbyUpdated);
	OnSteamLobbyCreatedCallback.Register(this, &UPFMatchmakingCallbacks::OnSteamLobbyCreated);
	OnSteamLobbyEnteredCallback.Register(this, &UPFMatchmakingCallbacks::OnSteamLobbyEntered);
	OnSteamLobbyInviteCallback.Register(this, &UPFMatchmakingCallbacks::OnSteamLobbyInvite);
}

 void UPFMatchmakingCallbacks::OnSteamLobbyUpdated(LobbyChatUpdate_t* pParams) {
	FLobbyUpdatedStruct pParamsStruct = {};
	pParamsStruct.SteamLobbyID = pParams->m_ulSteamIDLobby;
	pParamsStruct.MemberStateChange = static_cast<EMemberStateChange>(pParams->m_rgfChatMemberStateChange);
	pParamsStruct.UserChangedSteamID = pParams->m_ulSteamIDUserChanged;
	pParamsStruct.MakingChangeSteamID = pParams->m_ulSteamIDMakingChange;
 	SteamLobbyUpdatedCallback.Broadcast(pParamsStruct);
 }

 void UPFMatchmakingCallbacks::OnSteamLobbyCreated(LobbyCreated_t *pParam) {
	 FLobbyCreatedStruct pParamStruct = {};
	 pParamStruct.LobbyCreatedEResult = pParam->m_eResult;
	 pParamStruct.SteamLobbyID = pParamStruct.SteamLobbyID;
	 SteamLobbyCreatedCallback.Broadcast(pParamStruct);
 }

 void UPFMatchmakingCallbacks::OnSteamLobbyEntered(LobbyEnter_t *pParam) {

	 FLobbyEnteredStruct pParamStruct = {};
	 pParamStruct.SteamLobbyID = pParam->m_ulSteamIDLobby;
	 pParamStruct.SteamLobbyBlocked = pParam->m_bLocked;
	 pParamStruct.LobbyEnteredResponse = static_cast<ELobbyEnteredResponse>(pParam->m_EChatRoomEnterResponse);
	 SteamLobbyEnteredCallback.Broadcast(pParamStruct);

 }

 void UPFMatchmakingCallbacks::OnSteamLobbyInvite( LobbyInvite_t *pParam ) {
	 FLobbyInviteStruct pParamStruct = {};
	 pParamStruct.SteamGameID = pParam->m_ulGameID;
	 pParamStruct.SteamLobbyID = pParam->m_ulSteamIDLobby;
	 pParamStruct.SteamUserID = pParam->m_ulSteamIDUser;
	 SteamLobbyInviteCallback.Broadcast(pParamStruct);
 }