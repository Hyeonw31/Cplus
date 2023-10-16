// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h" // ������ �ӵ��� ������ �ϱ����� �⺻���� �ּ��ѿ� ���̺귯���� ������ �ش�
#include "Public/Tools/InterfacePlayObj.h"
#include "GameFramework/Actor.h" // AActor Ŭ���� �ش� ����

// generated.h �𸮾� Ŭ���� ���� ó���ϴ� �ش��� 
// 1) ��� �𸮾� Ŭ������ �����Ƿ��� �Ʒ� �ڵ带 �־��־�� �Ѵ�.
// 2) �ݵ�� ��� #include �� �������� ��ġ�Ѵ�
// --> �⺻����
#include "MoveLeftRight.generated.h"

// UNREALCODE_API : �� Ŭ������ UNREALCODE_API ��⿡ ���Եȴ�.
UCLASS() // �𸮾� Ŭ���� ���� ( UCLASS )
class UNREALCODE_API AMoveLeftRight : public AActor, public IInterfacePlayObj // public AActor : AActor�� ����� ��ӹްڴ�.
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

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Code_DoPlay(bool IsPlay); // �������Ʈ ȣ��� �Լ��� ���� 

	virtual void Code_DoPlay_Implementation(bool IsPlay) override; // C++���� ����� �Լ�

public:

	UPROPERTY(EditAnyWhere, BlueprintReadOnly)
	USceneComponent* Scene;

	UPROPERTY(VisibleAnyWhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMesh;

	float m_LocX;
	bool m_IsMoveRight;
	bool m_IsPlay;
};
