// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TBD_Project/TP_SideScroller/TP_SideScrollerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_SideScrollerGameMode() {}
// Cross Module References
	TBD_PROJECT_API UClass* Z_Construct_UClass_ATP_SideScrollerGameMode_NoRegister();
	TBD_PROJECT_API UClass* Z_Construct_UClass_ATP_SideScrollerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TBD_Project();
// End Cross Module References
	void ATP_SideScrollerGameMode::StaticRegisterNativesATP_SideScrollerGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATP_SideScrollerGameMode_NoRegister()
	{
		return ATP_SideScrollerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATP_SideScrollerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_SideScrollerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TBD_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_SideScrollerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TP_SideScroller/TP_SideScrollerGameMode.h" },
		{ "ModuleRelativePath", "TP_SideScroller/TP_SideScrollerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_SideScrollerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_SideScrollerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_SideScrollerGameMode_Statics::ClassParams = {
		&ATP_SideScrollerGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATP_SideScrollerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_SideScrollerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_SideScrollerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_SideScrollerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_SideScrollerGameMode, 4281106781);
	template<> TBD_PROJECT_API UClass* StaticClass<ATP_SideScrollerGameMode>()
	{
		return ATP_SideScrollerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_SideScrollerGameMode(Z_Construct_UClass_ATP_SideScrollerGameMode, &ATP_SideScrollerGameMode::StaticClass, TEXT("/Script/TBD_Project"), TEXT("ATP_SideScrollerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_SideScrollerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
