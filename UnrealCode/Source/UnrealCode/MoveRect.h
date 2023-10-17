// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Public/Tools/InterfacePlayObj.h"
#include "GameFramework/Actor.h"
#include "MoveRect.generated.h"

UENUM(BlueprintType) // 언리얼 ENUM을 블루프린트에서도 사용가능하도록 선언
enum class EN_MoveTypeCode : uint8
{
	MoveRight UMETA(DisplayName = "Right"), // MoveRight(C++에서 사용하는 이름), UMETA 옵션 중 'DisplayName = "Right"'은 블루프린트에서 보여질 이름
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
	void Code_DoPlay(bool IsPlay); // 블루프린트 호출용 함수명 선언 

	virtual void Code_DoPlay_Implementation(bool IsPlay) override; // C++에서 실행될 함수

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
