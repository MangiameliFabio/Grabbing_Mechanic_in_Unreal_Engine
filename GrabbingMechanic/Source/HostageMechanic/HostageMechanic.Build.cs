// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HostageMechanic : ModuleRules
{
	public HostageMechanic(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG" });
	}
}
