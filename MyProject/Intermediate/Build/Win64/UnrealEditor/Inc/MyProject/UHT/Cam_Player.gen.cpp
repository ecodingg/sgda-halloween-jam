// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/Cam_Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCam_Player() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MYPROJECT_API UClass* Z_Construct_UClass_ACam_Player();
MYPROJECT_API UClass* Z_Construct_UClass_ACam_Player_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References

// Begin Class ACam_Player
void ACam_Player::StaticRegisterNativesACam_Player()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACam_Player);
UClass* Z_Construct_UClass_ACam_Player_NoRegister()
{
	return ACam_Player::StaticClass();
}
struct Z_Construct_UClass_ACam_Player_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Cam_Player.h" },
		{ "ModuleRelativePath", "Public/Cam_Player.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACam_Player>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACam_Player_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACam_Player_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACam_Player_Statics::ClassParams = {
	&ACam_Player::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACam_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_ACam_Player_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACam_Player()
{
	if (!Z_Registration_Info_UClass_ACam_Player.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACam_Player.OuterSingleton, Z_Construct_UClass_ACam_Player_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACam_Player.OuterSingleton;
}
template<> MYPROJECT_API UClass* StaticClass<ACam_Player>()
{
	return ACam_Player::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACam_Player);
ACam_Player::~ACam_Player() {}
// End Class ACam_Player

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Helen_Desktop_Game_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Cam_Player_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACam_Player, ACam_Player::StaticClass, TEXT("ACam_Player"), &Z_Registration_Info_UClass_ACam_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACam_Player), 1257171435U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Helen_Desktop_Game_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Cam_Player_h_2063904537(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_Helen_Desktop_Game_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Cam_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Helen_Desktop_Game_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Cam_Player_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
