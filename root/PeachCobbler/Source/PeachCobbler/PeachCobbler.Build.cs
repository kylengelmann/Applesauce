// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PeachCobbler : ModuleRules
{
	public PeachCobbler(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "OnlineSubsystem", "OnlineSubsystemUtils", "GameplayAbilities" });

        DynamicallyLoadedModuleNames.Add("OnlineSubsystemNull");
    }
}
