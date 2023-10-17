// Fill out your copyright notice in the Description page of Project Settings.


#include "Switch.h"
#include "MoveLeftRight.h"
#include "MoveRect.h"
#include "Public/Tools/interfacePlayObj.h"

// Sets default values
ASwitch::ASwitch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootbeta"));
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PawnCameraOverlap"));

	SetRootComponent(Scene);

	StaticMesh->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);

	StaticMesh->OnComponentBeginOverlap.AddDynamic(this, &ASwitch::OnSwitchBeginOverlap);

	StaticMesh->OnComponentEndOverlap.AddDynamic(this, &ASwitch::OnSwitchEndOverlap);

}

// Called when the game starts or when spawned
void ASwitch::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASwitch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASwitch::OnSwitchBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	 int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//Print String 기능
	// -1 : 에러 키 값을 넣는다 (특별히 없으면 -1)
	// 10.0f : 출력 시간
	// FColor::Green : 택스트 색상
	// TEXT("BeginOverlap") : 출력할 텍스트
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green, TEXT("BeginOverlap"));

	// if (IsValid(leftright) == false)
	//	return ;
	// IsValid(leftright) : 언리얼에서 괄호 안의 객체의 유효 여부(존재하는지 파괴중인지 등을 확인해서 정상적인지 여부) 체크 기능
	// leftright->IsPlay = true;

	/*for (int i = 0; i < leftright.Num(); ++i)
	{
		leftright[i]->IsPlay = true; // leftright가 포인터 배열이기 때문에 "->"를 이용해서 참조
	}*/

	//for (AMoveLeftRight* pActor : leftright)
	//{
	//	pActor->IsPlay = true;
	//}

	//for (AMoveRect* pActor : updown)
	//{
	//	pActor->IsPlay = true;
	//}
	// if (IsValid(updown) == false)
	//	return;
	// updown->IsPlay = true;

	//for (AActor* pActor : Actors)
	//{
	//	AMoveLeftRight* pleftright = Cast<AMoveLeftRight>(pActor);
	//	if (pleftright)
	//	{
	//		pleftright->IsPlay = true;
	//		continue;
	//	}
	//	
	//	AMoveRect* pRect = Cast<AMoveRect>(pActor);
	//	if (pRect)
	//	{
	//		pRect->IsPlay = true;
	//		continue;
	//	}
	//}
	//for (AActor* pActor : Actors)
	//{
	//	IInterfacePlayObj* InterfaceObj = Cast<IInterfacePlayObj>(pActor); // 상속한 interface Casting(형변환)
	//	if (InterfaceObj)
	//	{
	//		// Interface Casting(형변환) 성공 후, Execute_(funtion name)으로 interface 함수 호출
	//		// Execute_(funtion name)에 첫번째 파라메타는 함수 호출 대상 객체, 이후는 함수 파라메타
	//		InterfaceObj->Execute_Code_DoPlay(pActor, true);
	//	}
	//}

	if (FDele_EventOverlap.IsBound())// 바인드 걸려있는 함수가 있는지 체크
		FDele_EventOverlap.Broadcast(true);// 델리게이트 이벤트 호출(Dispather 호출과 같다)
}

void ASwitch::OnSwitchEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green, TEXT("EndOverlap"));

	// if (IsValid(leftright) == false)
	//	return;
	// leftright->IsPlay = false;

	//for (AMoveLeftRight* pActor : leftright)
	//{
	//	pActor->IsPlay = false;
	//}

	//for (AMoveRect* pActor : updown)
	//{
	//	pActor->IsPlay = false;
	//}

	//for (AActor* pActor : Actors)
	//{
	//	AMoveLeftRight* pleftright = Cast<AMoveLeftRight>(pActor);
	//	if (pleftright)
	//	{
	//		pleftright->IsPlay = false;
	//		continue;
	//	}

	//	AMoveRect* pRect = Cast<AMoveRect>(pActor);
	//	if (pRect)
	//	{
	//		pRect->IsPlay = false;
	//		continue;
	//	}
	//}
	//for (AActor* pActor : Actors)
	//{
	//	IInterfacePlayObj* InterfaceObj = Cast<IInterfacePlayObj>(pActor); // 상속한 interface Casting(형변환)
	//	if (InterfaceObj)
	//	{
	//		// Interface Casting(형변환) 성공 후, Execute_(funtion name)으로 interface 함수 호출
	//		// Execute_(funtion name)에 첫번째 파라메타는 함수 호출 대상 객체, 이후는 함수 파라메타
	//		InterfaceObj->Execute_Code_DoPlay(pActor, false);
	//	}
	//}

	if (FDele_EventOverlap.IsBound())// 바인드 걸려있는 함수가 있는지 체크
		FDele_EventOverlap.Broadcast(false);// 델리게이트 이벤트 호출(Dispather 호출과 같다)


	// if (IsValid(updown) == false)
	//	return;
	// updown->IsPlay = false;
}


