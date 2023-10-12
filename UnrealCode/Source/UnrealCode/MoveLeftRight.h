// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h" // 컴파일 속도를 빠르게 하기위해 기본적인 최소한에 라이브러리만 포함한 해더
#include "GameFramework/Actor.h" // AActor 클래스 해더 파일

// generated.h 언리얼 클래스 생성 처리하는 해더☆ 
// 1) 모든 언리얼 클래스가 생성되려면 아래 코드를 넣어주어야 한다.
// 2) 반드시 모든 #include 중 마지막에 배치한다
// --> 기본공식
#include "MoveLeftRight.generated.h"

// UNREALCODE_API : 이 클래스는 UNREALCODE_API 모듈에 포함된다.
UCLASS() // 언리얼 클래스 선언 ( UCLASS )
class UNREALCODE_API AMoveLeftRight : public AActor // public AActor : AActor의 기능을 상속받겠다.
{
	GENERATED_BODY() // 언리얼 코드 생성 함수 - 언리얼 클래스 생성 기본 규칙
	
public:	
	// Sets default values for this actor's properties
	AMoveLeftRight();
	~AMoveLeftRight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnyWhere, BlueprintReadOnly)
	USceneComponent* Scene;

	UPROPERTY(VisibleAnyWhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMesh;

	float LocX;
	bool IsMoveRight;
};
