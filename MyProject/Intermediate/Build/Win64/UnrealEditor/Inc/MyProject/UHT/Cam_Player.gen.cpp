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

// Begin Class ACam_Player Function IsPickupActive
struct Z_Construct_UFunction_ACam_Player_IsPickupActive_Statics
{
	struct Cam_Player_eventIsPickupActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Test Class" },
		{ "ModuleRelativePath", "Public/Cam_Player.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACam_Player_IsPickupActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Cam_Player_eventIsPickupActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACam_Player_IsPickupActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cam_Player_eventIsPickupActive_Parms), &Z_Construct_UFunction_ACam_Player_IsPickupActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACam_Player_IsPickupActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACam_Player_IsPickupActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACam_Player_IsPickupActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACam_Player_IsPickupActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACam_Player, nullptr, "IsPickupActive", nullptr, nullptr, Z_Construct_UFunction_ACam_Player_IsPickupActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACam_Player_IsPickupActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACam_Player_IsPickupActive_Statics::Cam_Player_eventIsPickupActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACam_Player_IsPickupActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACam_Player_IsPickupActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACam_Player_IsPickupActive_Statics::Cam_Player_eventIsPickupActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACam_Player_IsPickupActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACam_Player_IsPickupActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACam_Player::execIsPickupActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPickupActive();
	P_NATIVE_END;
}
// End Class ACam_Player Function IsPickupActive

// Begin Class ACam_Player Function SetPickupActive
struct Z_Construct_UFunction_ACam_Player_SetPickupActive_Statics
{
	struct Cam_Player_eventSetPickupActive_Parms
	{
		bool NewActiveState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Test Class" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// test boolean\n" },
#endif
		{ "ModuleRelativePath", "Public/Cam_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "test boolean" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_NewActiveState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewActiveState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACam_Player_SetPickupActive_Statics::NewProp_NewActiveState_SetBit(void* Obj)
{
	((Cam_Player_eventSetPickupActive_Parms*)Obj)->NewActiveState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACam_Player_SetPickupActive_Statics::NewProp_NewActiveState = { "NewActiveState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cam_Player_eventSetPickupActive_Parms), &Z_Construct_UFunction_ACam_Player_SetPickupActive_Statics::NewProp_NewActiveState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACam_Player_SetPickupActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACam_Player_SetPickupActive_Statics::NewProp_NewActiveState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACam_Player_SetPickupActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACam_Player_SetPickupActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACam_Player, nullptr, "SetPickupActive", nullptr, nullptr, Z_Construct_UFunction_ACam_Player_SetPickupActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACam_Player_SetPickupActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACam_Player_SetPickupActive_Statics::Cam_Player_eventSetPickupActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACam_Player_SetPickupActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACam_Player_SetPickupActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACam_Player_SetPickupActive_Statics::Cam_Player_eventSetPickupActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACam_Player_SetPickupActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACam_Player_SetPickupActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACam_Player::execSetPickupActive)
{
	P_GET_UBOOL(Z_Param_NewActiveState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPickupActive(Z_Param_NewActiveState);
	P_NATIVE_END;
}
// End Class ACam_Player Function SetPickupActive

// Begin Class ACam_Player
void ACam_Player::StaticRegisterNativesACam_Player()
{
	UClass* Class = ACam_Player::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsPickupActive", &ACam_Player::execIsPickupActive },
		{ "SetPickupActive", &ACam_Player::execSetPickupActive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACam_Player_IsPickupActive, "IsPickupActive" }, // 2158482676
		{ &Z_Construct_UFunction_ACam_Player_SetPickupActive, "SetPickupActive" }, // 2755571145
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
struct Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Cam_Player_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACam_Player, ACam_Player::StaticClass, TEXT("ACam_Player"), &Z_Registration_Info_UClass_ACam_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACam_Player), 3519653812U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Cam_Player_h_886736951(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Cam_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_sgda_halloween_jam_MyProject_Source_MyProject_Public_Cam_Player_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
