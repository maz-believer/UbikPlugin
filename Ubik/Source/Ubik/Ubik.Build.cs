// Copyright Believer Research and Development Team . All Rights Reserved.
using System.IO;
using UnrealBuildTool;

public class Ubik : ModuleRules
{
	public Ubik(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bEnableUndefinedIdentifierWarnings = false;
		
		string Minimp3Path = Path.Combine(ModuleDirectory, "../../ThirdParty/minimp3");
		PublicIncludePaths.Add(Minimp3Path);
		PrivateIncludePaths.Add(Minimp3Path);

		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"HTTP",
				"Json",
				"JsonUtilities",
				"DeveloperSettings",
				"UnrealEd",
				"UMG",
				"Blutility", 
				"EngineSettings",
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
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
