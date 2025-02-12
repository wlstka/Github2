// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class BattleEndedClientTarget : TargetRules
{
	public BattleEndedClientTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Client;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "BattleEnded" } );
	}
}
