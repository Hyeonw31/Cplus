// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/ShootingHUD.h"
#include "Blueprint/UserWidget.h"
#include "GameMode/ShootingPlayerState.h"
#include "Weapon.h"

void AShootingHUD::BeginPlay()
{
	Super::BeginPlay();

	/*if (IsValid(HudWidgetClass) == false)
		return;*/
	check(HudWidgetClass); // check : ()�ȿ� ��ü�� ���������̸� �״´� --> ������ ���� ��ġ�� ��Ȯ�ϰ� �˱� ���ؼ� ���

	HudWidget = CreateWidget<UUserWidget>(GetWorld(), HudWidgetClass);
	HudWidget->AddToViewport();

	BindMyPlayerState();

}

void AShootingHUD::BindMyPlayerState()
{
	APlayerController* pPC = Cast<APlayerController>(GetWorld()->GetFirstPlayerController());

	if (IsValid(pPC))
	{
		AShootingPlayerState* pPS = Cast<AShootingPlayerState>(pPC->PlayerState);
		if (IsValid(pPS))
		{
			pPS->Event_Dele_UpdateHp.AddDynamic(this, &AShootingHUD::OnUpdateMyHP);
			OnUpdateMyHP(pPS->m_CurHp, 100);
			return;
		}
	}

	FTimerManager& timerManager = GetWorld()->GetTimerManager();
	timerManager.SetTimer(th_BindMyPlayerState, this, &AShootingHUD::BindMyPlayerState, 0.01f, false);
}

void AShootingHUD::OnUpdateMyHP_Implementation(float CurHp, float MaxHp)
{
}

void AShootingHUD::OnUpdateMyAmmo_Implementation(int Ammo)
{
}
