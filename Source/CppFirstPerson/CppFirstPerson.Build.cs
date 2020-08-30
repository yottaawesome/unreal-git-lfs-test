// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CppFirstPerson : ModuleRules
{
	public CppFirstPerson(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
