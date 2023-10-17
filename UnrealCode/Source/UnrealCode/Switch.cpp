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
	//Print String ���
	// -1 : ���� Ű ���� �ִ´� (Ư���� ������ -1)
	// 10.0f : ��� �ð�
	// FColor::Green : �ý�Ʈ ����
	// TEXT("BeginOverlap") : ����� �ؽ�Ʈ
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green, TEXT("BeginOverlap"));

	// if (IsValid(leftright) == false)
	//	return ;
	// IsValid(leftright) : �𸮾󿡼� ��ȣ ���� ��ü�� ��ȿ ����(�����ϴ��� �ı������� ���� Ȯ���ؼ� ���������� ����) üũ ���
	// leftright->IsPlay = true;

	/*for (int i = 0; i < leftright.Num(); ++i)
	{
		leftright[i]->IsPlay = true; // leftright�� ������ �迭�̱� ������ "->"�� �̿��ؼ� ����
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
	//	IInterfacePlayObj* InterfaceObj = Cast<IInterfacePlayObj>(pActor); // ����� interface Casting(����ȯ)
	//	if (InterfaceObj)
	//	{
	//		// Interface Casting(����ȯ) ���� ��, Execute_(funtion name)���� interface �Լ� ȣ��
	//		// Execute_(funtion name)�� ù��° �Ķ��Ÿ�� �Լ� ȣ�� ��� ��ü, ���Ĵ� �Լ� �Ķ��Ÿ
	//		InterfaceObj->Execute_Code_DoPlay(pActor, true);
	//	}
	//}

	if (FDele_EventOverlap.IsBound())// ���ε� �ɷ��ִ� �Լ��� �ִ��� üũ
		FDele_EventOverlap.Broadcast(true);// ��������Ʈ �̺�Ʈ ȣ��(Dispather ȣ��� ����)
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
	//	IInterfacePlayObj* InterfaceObj = Cast<IInterfacePlayObj>(pActor); // ����� interface Casting(����ȯ)
	//	if (InterfaceObj)
	//	{
	//		// Interface Casting(����ȯ) ���� ��, Execute_(funtion name)���� interface �Լ� ȣ��
	//		// Execute_(funtion name)�� ù��° �Ķ��Ÿ�� �Լ� ȣ�� ��� ��ü, ���Ĵ� �Լ� �Ķ��Ÿ
	//		InterfaceObj->Execute_Code_DoPlay(pActor, false);
	//	}
	//}

	if (FDele_EventOverlap.IsBound())// ���ε� �ɷ��ִ� �Լ��� �ִ��� üũ
		FDele_EventOverlap.Broadcast(false);// ��������Ʈ �̺�Ʈ ȣ��(Dispather ȣ��� ����)


	// if (IsValid(updown) == false)
	//	return;
	// updown->IsPlay = false;
}


