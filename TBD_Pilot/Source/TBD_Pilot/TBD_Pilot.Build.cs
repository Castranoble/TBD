// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TBD_Pilot : ModuleRules
{
	public TBD_Pilot(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
