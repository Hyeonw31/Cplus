// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ShootingPlayerState.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDele_UpdateHp, float, CurHp, float, MaxHp);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDele_UpdateMag, int, Mag);

/**
 *
 */
UCLASS()
class SHOOTINGGAMECODE_API AShootingPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	AShootingPlayerState();

public:
	UFUNCTION(BlueprintCallable)
	void AddDamage(float Damage);

	UFUNCTION(BlueprintCallable)
	void AddMag();

	UFUNCTION(BlueprintCallable)
	void UseMag();

	UFUNCTION()
	void OnRep_CurHp();

	UFUNCTION()
	void OnRep_Mag();

public:
	bool IsCanReload();

public:
	UPROPERTY(ReplicatedUsing = OnRep_CurHp)
	float m_CurHp;

	UPROPERTY(ReplicatedUsing = OnRep_Mag)
	int m_Mag;

	UPROPERTY(BlueprintAssignable, VisibleAnywhere, BlueprintCallable)
	FDele_UpdateHp Event_Dele_UpdateHp;
	FDele_UpdateMag Event_Dele_UpdateMag;
};