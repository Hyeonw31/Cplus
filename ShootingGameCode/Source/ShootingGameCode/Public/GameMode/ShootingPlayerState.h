// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ShootingPlayerState.generated.h"

//DECLARE_DYNAMIC_MULTICAST까지만 알면됨.-> 여러 개의 함수를 바인딩시켜 델리게이트가 발동되면 모두 호출 
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDele_UpdateHp, float, CurHp, float, MaxHp);

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

	UFUNCTION()
	void OnRep_CurHp(); // Replicated 대상은 반드시 UFUNCTION으로 생성해야한다.


public:
	UPROPERTY(ReplicatedUsing = OnRep_CurHp)
	float m_CurHp;

	UPROPERTY(BlueprintAssignable, VisibleAnywhere, BlueprintCallable)
	FDele_UpdateHp Event_Dele_UpdateHp;
};
