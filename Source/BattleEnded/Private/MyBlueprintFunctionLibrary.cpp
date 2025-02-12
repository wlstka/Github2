// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "Engine/TextureRenderTarget2D.h"
#include "UObject/UObjectGlobals.h"

UTextureRenderTarget2D* UMyBlueprintFunctionLibrary::CreateTextureRenderTarget(int32 Width, int32 Height)
{
    // 货肺款 TextureRenderTarget2D 积己
    UTextureRenderTarget2D* NewRenderTarget = NewObject<UTextureRenderTarget2D>();

    if (NewRenderTarget)
    {
        // Render Target 农扁 汲沥
        NewRenderTarget->InitAutoFormat(Width, Height);
        NewRenderTarget->UpdateResource();
    }

    return NewRenderTarget;
}