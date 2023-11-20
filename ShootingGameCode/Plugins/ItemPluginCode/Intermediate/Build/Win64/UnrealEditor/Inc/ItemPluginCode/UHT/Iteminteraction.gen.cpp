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
	DEFINE_FUNCTION(IIteminteraction::execGetItemMag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetItemMag_Implementation();
		P_NATIVE_END;
	}
	void IIteminteraction::GetItemMag()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetItemMag instead.");
	}
	void UIteminteraction::StaticRegisterNativesUIteminteraction()
	{
		UClass* Class = UIteminteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemMag", &IIteminteraction::execGetItemMag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIteminteraction_GetItemMag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIteminteraction_GetItemMag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iteminteraction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIteminteraction_GetItemMag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIteminteraction, nullptr, "GetItemMag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIteminteraction_GetItemMag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIteminteraction_GetItemMag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIteminteraction_GetItemMag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIteminteraction_GetItemMag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIteminteraction);
	UClass* Z_Construct_UClass_UIteminteraction_NoRegister()
	{
		return UIteminteraction::StaticClass();
	}
	struct Z_Construct_UClass_UIteminteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UIteminteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIteminteraction_GetItemMag, "GetItemMag" }, // 2041612273
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	static FName NAME_UIteminteraction_GetItemMag = FName(TEXT("GetItemMag"));
	void IIteminteraction::Execute_GetItemMag(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UIteminteraction::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UIteminteraction_GetItemMag);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IIteminteraction*)(O->GetNativeInterfaceAddress(UIteminteraction::StaticClass())))
		{
			I->GetItemMag_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_Iteminteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_Iteminteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIteminteraction, UIteminteraction::StaticClass, TEXT("UIteminteraction"), &Z_Registration_Info_UClass_UIteminteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIteminteraction), 1807529467U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_Iteminteraction_h_650430162(TEXT("/Script/ItemPluginCode"),
		Z_CompiledInDeferFile_FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_Iteminteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootingGameCode_Plugins_ItemPluginCode_Source_ItemPluginCode_Public_Iteminteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
