// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Switch.generated.h"

// DECLARE_DYNAMIC_MULTICAST_DELEGATE : 여러개의 이벤트를 바인딩 가능함. 블루프린트에서 호출 가능
// OneParam : 파라메타 갯수가 1개이기 때문에 OneParam 사용
// FDele_EventOverlap_OneParam : 델리게이트 이름
// bool, IsBegin : 파라메타 변수형, 파라메타 변수 이름
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
	UFUNCTION() // 바인딩 함수는 반드시 UFUNCTION으로 만들어야 된다. 
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

	// TObjectPtr : 언리얼에서 AMoveLeftRight를 상속 받은 모든 클래스를 가리킬 수 있는 변수
	// EditAnywhere : 인스턴스 편집가능(레벨에 배치한 인스턴스에서 디테일 창으로 편집이 가능하게 보여준다)
	// class : #include로 클래스를 추가하는 대신에 차후에 클래스가 있을 것이라고 컴파일 단계에서만 알려주는 키워드
	// TArray : 언리얼에서 배열(vector) 변수 
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
