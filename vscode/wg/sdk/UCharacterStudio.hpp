#pragma once
#include "UViewModeStudio.hpp"
#include "FTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCharacterStudio // Size: 0x510
	: public UViewModeStudio // Size: 0x470
{
private:
	typedef UCharacterStudio t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(59); // id32("Class TslGame.CharacterStudio")
		return ptr;
	}
	ExternalPtr<struct USpringArmComponent> SpringArmComponent; /* Ofs: 0x470 Size: 0x8 - ObjectProperty TslGame.CharacterStudio.SpringArmComponent */
	uint8_t boolField478;
	uint8_t UnknownData479[0x7];
	TAssetPtr<ExternalPtr<struct UClass>> MaleCharacterProxyClass; /* Ofs: 0x480 Size: 0x1C - AssetClassProperty TslGame.CharacterStudio.MaleCharacterProxyClass */
	uint8_t UnknownData49C[0x4];
	TAssetPtr<ExternalPtr<struct UClass>> FemaleCharacterProxyClass; /* Ofs: 0x4A0 Size: 0x1C - AssetClassProperty TslGame.CharacterStudio.FemaleCharacterProxyClass */
	uint8_t UnknownData4BC[0x4];
	FTransform CharacterInitialTransform; /* Ofs: 0x4C0 Size: 0x30 - StructProperty TslGame.CharacterStudio.CharacterInitialTransform */
	ExternalPtr<struct UTslCharacterProxy> CharacterProxy; /* Ofs: 0x4F0 Size: 0x8 - ObjectProperty TslGame.CharacterStudio.CharacterProxy */
	ExternalPtr<struct USceneComponent> CharacterRotationPivot; /* Ofs: 0x4F8 Size: 0x8 - ObjectProperty TslGame.CharacterStudio.CharacterRotationPivot */
	ExternalPtr<struct UMaterialInstanceDynamic> SceneCaptureMaterial; /* Ofs: 0x500 Size: 0x8 - ObjectProperty TslGame.CharacterStudio.SceneCaptureMaterial */
	uint8_t UnknownData508[0x8];


	inline bool SetSpringArmComponent(t_structHelper inst, ExternalPtr<struct USpringArmComponent> value) { inst.WriteOffset(0x470, value); }
	inline bool bUseDynamicResolution()
	{
		return boolField478& 0x1;
	}
	inline bool SetbUseDynamicResolution(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x478, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMaleCharacterProxyClass(t_structHelper inst, TAssetPtr<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x480, value); }
	inline bool SetFemaleCharacterProxyClass(t_structHelper inst, TAssetPtr<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetCharacterInitialTransform(t_structHelper inst, FTransform value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetCharacterProxy(t_structHelper inst, ExternalPtr<struct UTslCharacterProxy> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetCharacterRotationPivot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetSceneCaptureMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x500, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCharacterStudio = sizeof(UCharacterStudio); // 1296
    static_assert(sizeof(UCharacterStudio) == 0x510, "Size of UCharacterStudio is not correct.");
	auto constexpr UCharacterStudio_SpringArmComponent_Offset = offsetof(UCharacterStudio, SpringArmComponent);
	static_assert(UCharacterStudio_SpringArmComponent_Offset == 0x470, "UCharacterStudio::SpringArmComponent offset is not 470");
	auto constexpr UCharacterStudio_boolField478_Offset = offsetof(UCharacterStudio, boolField478);
	static_assert(UCharacterStudio_boolField478_Offset == 0x478, "UCharacterStudio::boolField478 offset is not 478");
	auto constexpr UCharacterStudio_MaleCharacterProxyClass_Offset = offsetof(UCharacterStudio, MaleCharacterProxyClass);
	static_assert(UCharacterStudio_MaleCharacterProxyClass_Offset == 0x480, "UCharacterStudio::MaleCharacterProxyClass offset is not 480");
	auto constexpr UCharacterStudio_FemaleCharacterProxyClass_Offset = offsetof(UCharacterStudio, FemaleCharacterProxyClass);
	static_assert(UCharacterStudio_FemaleCharacterProxyClass_Offset == 0x4a0, "UCharacterStudio::FemaleCharacterProxyClass offset is not 4a0");
	auto constexpr UCharacterStudio_CharacterInitialTransform_Offset = offsetof(UCharacterStudio, CharacterInitialTransform);
	static_assert(UCharacterStudio_CharacterInitialTransform_Offset == 0x4c0, "UCharacterStudio::CharacterInitialTransform offset is not 4c0");
	auto constexpr UCharacterStudio_CharacterProxy_Offset = offsetof(UCharacterStudio, CharacterProxy);
	static_assert(UCharacterStudio_CharacterProxy_Offset == 0x4f0, "UCharacterStudio::CharacterProxy offset is not 4f0");
	auto constexpr UCharacterStudio_CharacterRotationPivot_Offset = offsetof(UCharacterStudio, CharacterRotationPivot);
	static_assert(UCharacterStudio_CharacterRotationPivot_Offset == 0x4f8, "UCharacterStudio::CharacterRotationPivot offset is not 4f8");
	auto constexpr UCharacterStudio_SceneCaptureMaterial_Offset = offsetof(UCharacterStudio, SceneCaptureMaterial);
	static_assert(UCharacterStudio_SceneCaptureMaterial_Offset == 0x500, "UCharacterStudio::SceneCaptureMaterial offset is not 500");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
