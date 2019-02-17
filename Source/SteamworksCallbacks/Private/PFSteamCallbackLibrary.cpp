#include "PFSteamCallbackLibrary.h"
#include "PFMatchmakingCallbacks.h"
#include "PFFriendCallbacks.h"
#include "PFUserCallbacks.h"


UPFMatchmakingCallbacks* UPFSteamCallbackLibrary::MatchmakingCallbackRoot;
UPFFriendCallbacks* UPFSteamCallbackLibrary::FriendCallbackRoot;
UPFUserCallbacks* UPFSteamCallbackLibrary::UserCallbackRoot;

UPFSteamCallbackLibrary::UPFSteamCallbackLibrary()
{
	if (UPFSteamCallbackLibrary::MatchmakingCallbackRoot != nullptr) {
		UPFSteamCallbackLibrary::MatchmakingCallbackRoot->RemoveFromRoot();
		delete UPFSteamCallbackLibrary::MatchmakingCallbackRoot;
		UPFSteamCallbackLibrary::MatchmakingCallbackRoot = nullptr;
	}
	
	if (UPFSteamCallbackLibrary::FriendCallbackRoot != nullptr) {
		UPFSteamCallbackLibrary::FriendCallbackRoot->RemoveFromRoot();
		delete UPFSteamCallbackLibrary::FriendCallbackRoot;
		UPFSteamCallbackLibrary::FriendCallbackRoot = nullptr;
	}
	
	if (UPFSteamCallbackLibrary::UserCallbackRoot != nullptr) {
		UPFSteamCallbackLibrary::UserCallbackRoot->RemoveFromRoot();
		delete UPFSteamCallbackLibrary::UserCallbackRoot;
		UPFSteamCallbackLibrary::UserCallbackRoot = nullptr;
	}
	
}

UPFSteamCallbackLibrary::~UPFSteamCallbackLibrary()
{
	delete UPFSteamCallbackLibrary::MatchmakingCallbackRoot;
	delete UPFSteamCallbackLibrary::FriendCallbackRoot;
	delete UPFSteamCallbackLibrary::UserCallbackRoot;
	UPFSteamCallbackLibrary::MatchmakingCallbackRoot = nullptr;
	UPFSteamCallbackLibrary::FriendCallbackRoot = nullptr;
	UPFSteamCallbackLibrary::UserCallbackRoot = nullptr;
}

UPFMatchmakingCallbacks* UPFSteamCallbackLibrary::GetMatchMakingCallback()
{
	if (UPFSteamCallbackLibrary::MatchmakingCallbackRoot == nullptr) {
		UPFSteamCallbackLibrary::MatchmakingCallbackRoot = NewObject<UPFMatchmakingCallbacks>();
		UPFSteamCallbackLibrary::MatchmakingCallbackRoot->AddToRoot();
		UPFSteamCallbackLibrary::MatchmakingCallbackRoot->InitalizeSteamCallbacks();
	}

	return UPFSteamCallbackLibrary::MatchmakingCallbackRoot;
	
}
UPFFriendCallbacks* UPFSteamCallbackLibrary::GetFriendCallback()
{
	if (UPFSteamCallbackLibrary::FriendCallbackRoot == nullptr) {
		UPFSteamCallbackLibrary::FriendCallbackRoot = NewObject<UPFFriendCallbacks>();
		UPFSteamCallbackLibrary::FriendCallbackRoot->AddToRoot();
		UPFSteamCallbackLibrary::FriendCallbackRoot->InitalizeSteamCallbacks();
	}

	return UPFSteamCallbackLibrary::FriendCallbackRoot;
}

UPFUserCallbacks* UPFSteamCallbackLibrary::GetUserCallback()
{
	if (UPFSteamCallbackLibrary::UserCallbackRoot == nullptr) {
		UPFSteamCallbackLibrary::UserCallbackRoot = NewObject<UPFUserCallbacks>();
		UPFSteamCallbackLibrary::UserCallbackRoot->AddToRoot();
		UPFSteamCallbackLibrary::UserCallbackRoot->InitalizeSteamCallbacks();
	}

	return UPFSteamCallbackLibrary::UserCallbackRoot;
}

void UPFSteamCallbackLibrary::CallbackCleanUp()
{
	if (UPFSteamCallbackLibrary::MatchmakingCallbackRoot != nullptr) {
		UPFSteamCallbackLibrary::MatchmakingCallbackRoot->RemoveFromRoot();
		delete UPFSteamCallbackLibrary::MatchmakingCallbackRoot;
		UPFSteamCallbackLibrary::MatchmakingCallbackRoot = nullptr;
	}

	if (UPFSteamCallbackLibrary::FriendCallbackRoot != nullptr) {
		UPFSteamCallbackLibrary::FriendCallbackRoot->RemoveFromRoot();
		delete UPFSteamCallbackLibrary::FriendCallbackRoot;
		UPFSteamCallbackLibrary::FriendCallbackRoot = nullptr;
	}

	if (UPFSteamCallbackLibrary::UserCallbackRoot != nullptr) {
		UPFSteamCallbackLibrary::UserCallbackRoot->RemoveFromRoot();
		delete UPFSteamCallbackLibrary::UserCallbackRoot;
		UPFSteamCallbackLibrary::UserCallbackRoot = nullptr;
	}
}

