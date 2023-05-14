// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Anger_Of_Humanity : ModuleRules
{
	public Anger_Of_Humanity(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
