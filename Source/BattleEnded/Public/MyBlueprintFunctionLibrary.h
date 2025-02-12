// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class BATTLEENDED_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
   
    UFUNCTION(BlueprintCallable, Category = "MiniMap")
    static UTextureRenderTarget2D* CreateTextureRenderTarget(int32 Width, int32 Height);
};
