# UE4_SteamworksCallbacks
Blueprint library for Steam callbacks using Unreal Engine 4 <br>
Can be used in conjunction with steam web api for micro transactions and user validation.

Currently only supports 4.20 <br>
Documentation: https://ue4-steamworks-api.readthedocs.io/en/latest/SetUp.html

# Steam Friend Callbacks
- Steam overlay active event
- Steam persona change event (includes online status, avatar change, nickname change, steam level... etc)
# Steam Matchmaking Callbacks
- Changing status of users in steam lobby event - leaving, entering, disconnected, kicked, banned
- Steam lobby created event
- Steam user entering new lobby event
- Steam lobby invite event
# Steam User Callbacks
- Get Steam authorized session ticket event (used to validate user's session)
- Steam microtransation authorization event (used to determine success of microtransaction)
- Steam server failed to connect event
- Steam servers connected event
- Steam servers disconnected
