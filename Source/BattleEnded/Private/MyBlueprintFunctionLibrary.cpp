// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "Engine/TextureRenderTarget2D.h"
#include "UObject/UObjectGlobals.h"

UTextureRenderTarget2D* UMyBlueprintFunctionLibrary::CreateTextureRenderTarget(int32 Width, int32 Height)
{
    // ���ο� TextureRenderTarget2D ����
    UTextureRenderTarget2D* NewRenderTarget = NewObject<UTextureRenderTarget2D>();

    if (NewRenderTarget)
    {
        // Render Target ũ�� ����
        NewRenderTarget->InitAutoFormat(Width, Height);
        NewRenderTarget->UpdateResource();
    }

    return NewRenderTarget;
}