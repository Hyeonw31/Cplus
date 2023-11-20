// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Iteminteraction.generated.h"

/**
 *
 */
UINTERFACE(Blueprintable)
class UIteminteraction : public UInterface
{
	GENERATED_BODY()
};

class ITEMPLUGINCODE_API IIteminteraction
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void GetItemMag();
};
