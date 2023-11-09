// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ItemPluginCode/Public/Iteminteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIteminteraction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ITEMPLUGINCODE_API UClass* Z_Construct_UClass_UIteminteraction();
	ITEMPLUGINCODE_API UClass* Z_Construct_UClass_UIteminteraction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ItemPluginCode();
// End Cross Module References
	void UIteminteraction::StaticRegisterNativesUIteminteraction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIteminteraction);
	UClass* Z_Construct_UClass_UIteminteraction_NoRegister()
	{
		return UIteminteraction::StaticClass();
	}
	struct Z_Construct_UClass_UIteminteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIteminteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ItemPluginCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIteminteraction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Iteminteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIteminteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIteminteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIteminteraction_Statics::ClassParams = {
		&UIteminteraction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIteminteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIteminteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIteminteraction()
	{
		if (!Z_Registration_Info_UClass_UIteminteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIteminteraction.OuterSingleton, Z_Construct_UClass_UIteminteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIteminteraction.OuterSingleton;
	}
	template<> ITEMPLUGINCODE_API UClass* StaticClass<UIteminteraction>()
	{
		return UIteminteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIteminteraction);
	UIteminteraction::~UIteminteraction() {}
	struct Z_CompiledInDeferFile_FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_Iteminteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_Iteminteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIteminteraction, UIteminteraction::StaticClass, TEXT("UIteminteraction"), &Z_Registration_Info_UClass_UIteminteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIteminteraction), 2759316129U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_Iteminteraction_h_1827150974(TEXT("/Script/ItemPluginCode"),
		Z_CompiledInDeferFile_FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_Iteminteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_Iteminteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
