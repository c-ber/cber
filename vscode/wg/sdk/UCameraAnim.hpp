#pragma once
#include "FBox.hpp"
#include "FPostProcessSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCameraAnim // Size: 0x5A0
	: public UObject // Size: 0x30
{
private:
	typedef UCameraAnim t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(686); // id32("Class Engine.CameraAnim")
		return ptr;
	}
	ExternalPtr<struct UInterpGroup> CameraInterpGroup; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Engine.CameraAnim.CameraInterpGroup */
	float AnimLength; /* Ofs: 0x38 Size: 0x4 - FloatProperty Engine.CameraAnim.AnimLength */
	FBox BoundingBox; /* Ofs: 0x3C Size: 0x1C - StructProperty Engine.CameraAnim.BoundingBox */
	uint8_t boolField58;
	uint8_t UnknownData59[0x3];
	float BaseFOV; /* Ofs: 0x5C Size: 0x4 - FloatProperty Engine.CameraAnim.BaseFOV */
	FPostProcessSettings BasePostProcessSettings; /* Ofs: 0x60 Size: 0x530 - StructProperty Engine.CameraAnim.BasePostProcessSettings */
	float BasePostProcessBlendWeight; /* Ofs: 0x590 Size: 0x4 - FloatProperty Engine.CameraAnim.BasePostProcessBlendWeight */
	uint8_t UnknownData594[0xC];


	inline bool SetCameraInterpGroup(t_structHelper inst, ExternalPtr<struct UInterpGroup> value) { inst.WriteOffset(0x30, value); }
	inline bool SetAnimLength(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool SetBoundingBox(t_structHelper inst, FBox value) { inst.WriteOffset(0x3C, value); }
	inline bool bRelativeToInitialTransform()
	{
		return boolField58& 0x1;
	}
	inline bool SetbRelativeToInitialTransform(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x58, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRelativeToInitialFOV()
	{
		return boolField58& 0x2;
	}
	inline bool SetbRelativeToInitialFOV(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x58, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetBaseFOV(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
	inline bool SetBasePostProcessSettings(t_structHelper inst, FPostProcessSettings value) { inst.WriteOffset(0x60, value); }
	inline bool SetBasePostProcessBlendWeight(t_structHelper inst, float value) { inst.WriteOffset(0x590, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCameraAnim = sizeof(UCameraAnim); // 1440
    static_assert(sizeof(UCameraAnim) == 0x5A0, "Size of UCameraAnim is not correct.");
	auto constexpr UCameraAnim_CameraInterpGroup_Offset = offsetof(UCameraAnim, CameraInterpGroup);
	static_assert(UCameraAnim_CameraInterpGroup_Offset == 0x30, "UCameraAnim::CameraInterpGroup offset is not 30");
	auto constexpr UCameraAnim_AnimLength_Offset = offsetof(UCameraAnim, AnimLength);
	static_assert(UCameraAnim_AnimLength_Offset == 0x38, "UCameraAnim::AnimLength offset is not 38");
	auto constexpr UCameraAnim_BoundingBox_Offset = offsetof(UCameraAnim, BoundingBox);
	static_assert(UCameraAnim_BoundingBox_Offset == 0x3c, "UCameraAnim::BoundingBox offset is not 3c");
	auto constexpr UCameraAnim_boolField58_Offset = offsetof(UCameraAnim, boolField58);
	static_assert(UCameraAnim_boolField58_Offset == 0x58, "UCameraAnim::boolField58 offset is not 58");
	auto constexpr UCameraAnim_BaseFOV_Offset = offsetof(UCameraAnim, BaseFOV);
	static_assert(UCameraAnim_BaseFOV_Offset == 0x5c, "UCameraAnim::BaseFOV offset is not 5c");
	auto constexpr UCameraAnim_BasePostProcessSettings_Offset = offsetof(UCameraAnim, BasePostProcessSettings);
	static_assert(UCameraAnim_BasePostProcessSettings_Offset == 0x60, "UCameraAnim::BasePostProcessSettings offset is not 60");
	auto constexpr UCameraAnim_BasePostProcessBlendWeight_Offset = offsetof(UCameraAnim, BasePostProcessBlendWeight);
	static_assert(UCameraAnim_BasePostProcessBlendWeight_Offset == 0x590, "UCameraAnim::BasePostProcessBlendWeight offset is not 590");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
