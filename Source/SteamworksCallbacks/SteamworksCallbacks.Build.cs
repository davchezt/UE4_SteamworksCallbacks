// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class SteamworksCallbacks : ModuleRules
{
	public SteamworksCallbacks(ReadOnlyTargetRules Target) : base(Target)
	{
	

        string SteamVersion = "Steamv139";
        bool bSteamSDKFound = Directory.Exists(Target.UEThirdPartySourceDirectory + "Steamworks/" + SteamVersion) == true;

        PublicDefinitions.Add("STEAMSDK_FOUND=" + (bSteamSDKFound ? "1" : "0"));
        PublicDefinitions.Add("WITH_STEAMWORKS=" + (bSteamSDKFound ? "1" : "0"));

        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;


		
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "Steamworks"
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
			}
			);

        AddEngineThirdPartyPrivateStaticDependencies(Target, "Steamworks");
       // PublicAdditionalLibraries.Add("ThirdParty/Steamworks/Steamv139/sdk/redistributable_bin/steam_api.lib");
       // PublicAdditionalLibraries.Add("ThirdParty/Steamworks/Steamv139/sdk/redistributable_bin/win64/steam_api64.lib");
    }
}
