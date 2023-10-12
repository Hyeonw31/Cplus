// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h" // ������ �ӵ��� ������ �ϱ����� �⺻���� �ּ��ѿ� ���̺귯���� ������ �ش�
#include "GameFramework/Actor.h" // AActor Ŭ���� �ش� ����

// generated.h �𸮾� Ŭ���� ���� ó���ϴ� �ش��� 
// 1) ��� �𸮾� Ŭ������ �����Ƿ��� �Ʒ� �ڵ带 �־��־�� �Ѵ�.
// 2) �ݵ�� ��� #include �� �������� ��ġ�Ѵ�
// --> �⺻����
#include "MoveLeftRight.generated.h"

// UNREALCODE_API : �� Ŭ������ UNREALCODE_API ��⿡ ���Եȴ�.
UCLASS() // �𸮾� Ŭ���� ���� ( UCLASS )
class UNREALCODE_API AMoveLeftRight : public AActor // public AActor : AActor�� ����� ��ӹްڴ�.
{
	GENERATED_BODY() // �𸮾� �ڵ� ���� �Լ� - �𸮾� Ŭ���� ���� �⺻ ��Ģ
	
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
