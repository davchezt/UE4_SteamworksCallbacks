#include "PFFriendCallbacks.h"

UPFFriendCallbacks::UPFFriendCallbacks(){}

UPFFriendCallbacks::~UPFFriendCallbacks(){ UE_LOG(LogTemp, Warning, TEXT("Cleaning Up Friend Callbacks")); }

void UPFFriendCallbacks::InitalizeSteamCallbacks()
{
	OnSteamGameOverlayActivatedCallback.Register(this, &UPFFriendCallbacks::OnSteamGameOverlay);
	OnSteamPersonaStateChangeCallback.Register(this, &UPFFriendCallbacks::OnSteamPersonaStateChange);
	OnSteamSetPersonaNameCallback.Register(this, &UPFFriendCallbacks::OnSteamSetPersonaName);
}

void UPFFriendCallbacks::OnSteamGameOverlay(GameOverlayActivated_t *pParam) {
	bool bParam = pParam->m_bActive == 1 ? true : false;
	SteamGameOverlayActivatedCallback.Broadcast(bParam);
}

void UPFFriendCallbacks::OnSteamPersonaStateChange(PersonaStateChange_t *pParam) {

	FPersonaStateChange pParamStruct = {};
	pParamStruct.SteamUserID = pParam->m_ulSteamID;
	pParamStruct.PersonaStateChange = static_cast<ESteamPersonaChange>(ConvertEPersonaState(pParam->m_nChangeFlags));
	SteamPersonaStateChangeCallback.Broadcast(pParamStruct); 
}

void UPFFriendCallbacks::OnSteamSetPersonaName(SetPersonaNameResponse_t *pParam) {
	FSteamSetPersonaName pParamStruct = {};
	pParamStruct.bSuccess = pParam->m_bSuccess;
	pParamStruct.bLocalSuccess = pParam->m_bLocalSuccess;
	pParamStruct.SteamSetPersonaEResult = pParam->m_result;
	SteamSetPersonaNameCallback.Broadcast(pParamStruct);
}

uint8 UPFFriendCallbacks::ConvertEPersonaState(int i)
{
	switch (i) {
	case 0x0001:
		return 1;
		break;
	case 0x0002:
		return 2;
		break;
	case 0x0004:
		return 3;
		break;
	case 0x0008:
		return 4;
		break;
	case 0x0010:
		return 5;
		break;
	case 0x0020:
		return 6;
		break;
	case 0x0040:
		return 7;
		break;
	case 0x0080:
		return 8;
		break;
	case 0x0100:
		return 9;
		break;
	case 0x0200:
		return 10;
		break;
	case 0x0400:
		return 11;
		break;
	case 0x0800:
		return 12;
		break;
	case 0x1000:
		return 13;
		break;
	case 0x2000:
		return 14;
		break;
	}
	return 15;
}

