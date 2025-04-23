// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DotafsUE_Toon : ModuleRules
{
	public DotafsUE_Toon(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
