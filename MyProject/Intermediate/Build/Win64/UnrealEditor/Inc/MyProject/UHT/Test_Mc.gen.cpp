// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/Test_Mc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest_Mc() {}

// Begin Cross Module References
MYPROJECT_API UClass* Z_Construct_UClass_ATest_Mc();
MYPROJECT_API UClass* Z_Construct_UClass_ATest_Mc_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References

// Begin Class ATest_Mc
void ATest_Mc::StaticRegisterNativesATest_Mc()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATest_Mc);
UClass* Z_Construct_UClass_ATest_Mc_NoRegister()
{
	return ATest_Mc::StaticClass();
}
struct Z_Construct_UClass_ATest_Mc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Test_Mc.h" },
		{ "ModuleRelativePath", "Public/Test_Mc.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATest_Mc>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATest_Mc_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APaperCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATest_Mc_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATest_Mc_Statics::ClassParams = {
	&ATest_Mc::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATest_Mc_Statics::Class_MetaDataParams), Z_Construct_UClass_ATest_Mc_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATest_Mc()
{
	if (!Z_Registration_Info_UClass_ATest_Mc.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATest_Mc.OuterSingleton, Z_Construct_UClass_ATest_Mc_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATest_Mc.OuterSingleton;
}
template<> MYPROJECT_API UClass* StaticClass<ATest_Mc>()
{
	return ATest_Mc::StaticClass();
}
ATest_Mc::ATest_Mc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATest_Mc);
ATest_Mc::~ATest_Mc() {}
// End Class ATest_Mc

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Helen_Desktop_Game_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Test_Mc_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATest_Mc, ATest_Mc::StaticClass, TEXT("ATest_Mc"), &Z_Registration_Info_UClass_ATest_Mc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATest_Mc), 3304711987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Helen_Desktop_Game_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Test_Mc_h_1547803008(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_Helen_Desktop_Game_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Test_Mc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Helen_Desktop_Game_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Test_Mc_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
