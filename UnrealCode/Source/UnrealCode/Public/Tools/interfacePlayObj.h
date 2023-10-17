// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/interface.h"
#include "InterfacePlayObj.generated.h"


UINTERFACE(Blueprintable) // �������Ʈ ȣ�� Interface Ŭ���� ����
// UNREALCODE_API : �� Unreal�� ������Ʈ ��� �̸� ( � C++�� �����ص� ���ǵǾ� ���� )
class UNREALCODE_API UInterfacePlayObj : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class UNREALCODE_API IInterfacePlayObj // interface �Լ� ���� Ŭ����
{
	GENERATED_BODY()

public:
	// BlueprintCallable : �������Ʈ���� ȣ�� ����
	// BlueprintNativeEvent : �������Ʈ���� ��� �籸�� ���� �Լ�
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void Code_DoPlay(bool IsPlay); // �������Ʈ ȣ��� �Լ��� ���� 

	virtual void Code_DoPlay_Implementation(bool IsPlay) {}; // C++���� ����� �Լ�
};
