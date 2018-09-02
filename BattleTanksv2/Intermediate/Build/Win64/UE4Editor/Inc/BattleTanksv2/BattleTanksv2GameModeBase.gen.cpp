// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTanksv2/BattleTanksv2GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleTanksv2GameModeBase() {}
// Cross Module References
	BATTLETANKSV2_API UClass* Z_Construct_UClass_ABattleTanksv2GameModeBase_NoRegister();
	BATTLETANKSV2_API UClass* Z_Construct_UClass_ABattleTanksv2GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BattleTanksv2();
// End Cross Module References
	void ABattleTanksv2GameModeBase::StaticRegisterNativesABattleTanksv2GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABattleTanksv2GameModeBase_NoRegister()
	{
		return ABattleTanksv2GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABattleTanksv2GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABattleTanksv2GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTanksv2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleTanksv2GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BattleTanksv2GameModeBase.h" },
		{ "ModuleRelativePath", "BattleTanksv2GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattleTanksv2GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleTanksv2GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattleTanksv2GameModeBase_Statics::ClassParams = {
		&ABattleTanksv2GameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABattleTanksv2GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABattleTanksv2GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABattleTanksv2GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABattleTanksv2GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattleTanksv2GameModeBase, 2846421867);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattleTanksv2GameModeBase(Z_Construct_UClass_ABattleTanksv2GameModeBase, &ABattleTanksv2GameModeBase::StaticClass, TEXT("/Script/BattleTanksv2"), TEXT("ABattleTanksv2GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleTanksv2GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
