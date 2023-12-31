// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponInterface.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"



UCLASS()
class SHOOTINGGAMECODE_API AWeapon : public AActor, public IWeaponInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EventTrigger(bool IsPress);

	virtual void EventTrigger_Implementation(bool IsPress) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EventShoot();

	virtual void EventShoot_Implementation() override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EventPickup(ACharacter* pCharacter);

	virtual void EventPickup_Implementation(ACharacter* pCharacter) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EventDrop(ACharacter* pCharacter);

	virtual void EventDrop_Implementation(ACharacter* pCharacter) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EventReload();

	virtual void EventReload_Implementation() override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EventReload_Complete();

	virtual void EventReload_Complete_Implementation() override;


public:
	// Server : 서버에서 실행
	// Reliable : 신뢰성
	UFUNCTION(Server, Reliable)
	void ReqApplyDamage(FVector vStart, FVector vEnd);

	UFUNCTION(Server, Reliable)
	void ReqReload();

	UFUNCTION()
	void OnRep_Ammo();
	

public:
	void CalcShootStartEndPos(FVector& vStart, FVector& vEnd);

	void Use_Ammo();

	void UpdateHUD_MyAmmo(int Ammo);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* WeaponMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* ShootMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* ReloadMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UParticleSystem* FireEffect;

	UPROPERTY(Replicated, BlueprintReadWrite)
	ACharacter* m_pChar;

	// Notify 사용했었음 (BP에서)
	UPROPERTY(ReplicatedUsing = OnRep_Ammo)
	int m_Ammo;

};
