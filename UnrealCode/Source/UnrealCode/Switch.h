// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Switch.generated.h"

// DECLARE_DYNAMIC_MULTICAST_DELEGATE : �������� �̺�Ʈ�� ���ε� ������. �������Ʈ���� ȣ�� ����
// OneParam : �Ķ��Ÿ ������ 1���̱� ������ OneParam ���
// FDele_EventOverlap_OneParam : ��������Ʈ �̸�
// bool, IsBegin : �Ķ��Ÿ ������, �Ķ��Ÿ ���� �̸�
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDele_EventOverlap_OneParam, bool, IsBegin);
// DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDele_EventOverlap_ThreeParam, bool, IsBegin, int, Number, float, fValue);


UCLASS()
class UNREALCODE_API ASwitch : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwitch();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION() // ���ε� �Լ��� �ݵ�� UFUNCTION���� ������ �ȴ�. 
	void OnSwitchBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent*
		 OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:
	UFUNCTION()
	void OnSwitchEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
	UPROPERTY(EditAnyWhere, BlueprintReadOnly)
	USceneComponent* Scene;

	UPROPERTY(VisibleAnyWhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMesh;

	// TObjectPtr : �𸮾󿡼� AMoveLeftRight�� ��� ���� ��� Ŭ������ ����ų �� �ִ� ����
	// EditAnywhere : �ν��Ͻ� ��������(������ ��ġ�� �ν��Ͻ����� ������ â���� ������ �����ϰ� �����ش�)
	// class : #include�� Ŭ������ �߰��ϴ� ��ſ� ���Ŀ� Ŭ������ ���� ���̶�� ������ �ܰ迡���� �˷��ִ� Ű����
	// TArray : �𸮾󿡼� �迭(vector) ���� 
	// Ex) TArray<int>arr
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TObjectPtr<class AMoveLeftRight>> leftright;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TObjectPtr<class AMoveRect>> updown;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TObjectPtr<AActor>> Actors;
	
	UPROPERTY(BlueprintAssignable, VisibleAnyWhere, BlueprintCallable)
	FDele_EventOverlap_OneParam FDele_EventOverlap;
};
