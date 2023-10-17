// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Public/Tools/InterfacePlayObj.h"
#include "GameFramework/Actor.h"
#include "MoveRect.generated.h"

UENUM(BlueprintType) // �𸮾� ENUM�� �������Ʈ������ ��밡���ϵ��� ����
enum class EN_MoveTypeCode : uint8
{
	MoveRight UMETA(DisplayName = "Right"), // MoveRight(C++���� ����ϴ� �̸�), UMETA �ɼ� �� 'DisplayName = "Right"'�� �������Ʈ���� ������ �̸�
	MoveUp UMETA(DisplayName = "Up"),
	MoveLeft UMETA(DisplayName = "Left"),
	MoveDown UMETA(DisplayName = "Down")
};

UCLASS()
class UNREALCODE_API AMoveRect : public AActor, public IInterfacePlayObj
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoveRect();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void EventOverlap(bool isBegin);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Code_DoPlay(bool IsPlay); // �������Ʈ ȣ��� �Լ��� ���� 

	virtual void Code_DoPlay_Implementation(bool IsPlay) override; // C++���� ����� �Լ�

public:
	UPROPERTY(EditAnyWhere, BlueprintReadOnly)
	USceneComponent* Scene;

	UPROPERTY(VisibleAnyWhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMesh;

	EN_MoveTypeCode m_MoveType;
	float m_LocX;
	float m_LocZ;
	bool m_IsPlay;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<class ASwitch> m_Switch;
};
