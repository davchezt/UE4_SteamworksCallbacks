#include "PFUserCallbacks.h"

UPFUserCallbacks::UPFUserCallbacks(){}

UPFUserCallbacks::~UPFUserCallbacks(){ UE_LOG(LogTemp, Warning, TEXT("Cleaning Up User Callbacks"));}

void UPFUserCallbacks::InitalizeSteamCallbacks()
{
	OnSteamGetAuthSessionTicketCallback.Register(this, &UPFUserCallbacks::OnSteamGetAuthSessionTicket);
	OnSteamMicroTxnAuthorizationCallback.Register(this, &UPFUserCallbacks::OnSteamMicroTxnAuthorization);
	OnSteamLicensesUpdatedCallback.Register(this, &UPFUserCallbacks::OnSteamLicensesUpdated);
	OnSteamServerConnectFailureCallback.Register(this, &UPFUserCallbacks::OnSteamServerConnectFailure);
	OnSteamServerConnectedCallback.Register(this, &UPFUserCallbacks::OnSteamServerConnected);
	OnSteamServersDisconnectedCallback.Register(this, &UPFUserCallbacks::OnSteamServersDisconnected);
}

void UPFUserCallbacks::OnSteamGetAuthSessionTicket(GetAuthSessionTicketResponse_t *pParam) {
	FSteamGetAuthSessionTicket pParamStruct = {};
	pParamStruct.AuthTicket = pParam->m_hAuthTicket;
	pParamStruct.SteamGetAuthSessionTicketResults = pParam->m_eResult;
	SteamGetAuthSessionTicketCallback.Broadcast(pParamStruct);
}

void UPFUserCallbacks::OnSteamMicroTxnAuthorization(MicroTxnAuthorizationResponse_t *pParam) {
	FSteamMicroTxnAuthorization pParamStruct = {};
	pParamStruct.AppID = pParam->m_unAppID;
	pParamStruct.OrderID = pParamStruct.OrderID;
	pParamStruct.bAuthorized = pParam->m_bAuthorized;
	SteamMicroTxnAuthorizationCallback.Broadcast(pParamStruct);
}

void UPFUserCallbacks::OnSteamLicensesUpdated( LicensesUpdated_t *pParam ) {
	LicensesUpdatedCallback.Broadcast();
}

void UPFUserCallbacks::OnSteamServerConnectFailure(SteamServerConnectFailure_t *pParam) {
	FSteamServerConnectFailure pParamStruct = {};
	pParamStruct.bStillRetrying = pParam->m_bStillRetrying;
	pParamStruct.SteamServerConnectFailureResults = pParam->m_eResult;
	SteamServerConnectFailureCallback.Broadcast(pParamStruct);
}

void UPFUserCallbacks::OnSteamServerConnected(SteamServersConnected_t *pParam) {
	SteamServersConnectedCallback.Broadcast();
}

void UPFUserCallbacks::OnSteamServersDisconnected(SteamServersDisconnected_t *pParam) {
	SteamServersDisconnectedCallback.Broadcast(pParam->m_eResult);
}