#pragma once
#include "USceneComponent.hpp"
#include "EReflectionSourceType.hpp"
#include "FVector.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReflectionCaptureComponent // Size: 0x520
	: public USceneComponent // Size: 0x490
{
private:
	typedef UReflectionCaptureComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(229); // id32("Class Engine.ReflectionCaptureComponent")
		return ptr;
	}
	ExternalPtr<struct UBillboardComponent> CaptureOffsetComponent; /* Ofs: 0x490 Size: 0x8 - ObjectProperty Engine.ReflectionCaptureComponent.CaptureOffsetComponent */
	TEnumAsByte<enum EReflectionSourceType> ReflectionSourceType; /* Ofs: 0x498 Size: 0x1 - EnumProperty Engine.ReflectionCaptureComponent.ReflectionSourceType */
	uint8_t UnknownData499[0x7];
	ExternalPtr<struct UTextureCube> Cubemap; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty Engine.ReflectionCaptureComponent.Cubemap */
	float SourceCubemapAngle; /* Ofs: 0x4A8 Size: 0x4 - FloatProperty Engine.ReflectionCaptureComponent.SourceCubemapAngle */
	float Brightness; /* Ofs: 0x4AC Size: 0x4 - FloatProperty Engine.ReflectionCaptureComponent.Brightness */
	FVector CaptureOffset; /* Ofs: 0x4B0 Size: 0xC - StructProperty Engine.ReflectionCaptureComponent.CaptureOffset */
	uint8_t boolField4BC;
	uint8_t UnknownData4BD[0x23];
	FGuid StateId; /* Ofs: 0x4E0 Size: 0x10 - StructProperty Engine.ReflectionCaptureComponent.StateId */
	uint8_t UnknownData4F0[0x30];


	inline bool SetCaptureOffsetComponent(t_structHelper inst, ExternalPtr<struct UBillboardComponent> value) { inst.WriteOffset(0x490, value); }
	inline bool SetReflectionSourceType(t_structHelper inst, TEnumAsByte<enum EReflectionSourceType> value) { inst.WriteOffset(0x498, value); }
	inline bool SetCubemap(t_structHelper inst, ExternalPtr<struct UTextureCube> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetSourceCubemapAngle(t_structHelper inst, float value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetBrightness(t_structHelper inst, float value) { inst.WriteOffset(0x4AC, value); }
	inline bool SetCaptureOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x4B0, value); }
	inline bool bSharedComponent()
	{
		return boolField4BC& 0x1;
	}
	inline bool SetbSharedComponent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4BC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStateId(t_structHelper inst, FGuid value) { inst.WriteOffset(0x4E0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReflectionCaptureComponent = sizeof(UReflectionCaptureComponent); // 1312
    static_assert(sizeof(UReflectionCaptureComponent) == 0x520, "Size of UReflectionCaptureComponent is not correct.");
	auto constexpr UReflectionCaptureComponent_CaptureOffsetComponent_Offset = offsetof(UReflectionCaptureComponent, CaptureOffsetComponent);
	static_assert(UReflectionCaptureComponent_CaptureOffsetComponent_Offset == 0x490, "UReflectionCaptureComponent::CaptureOffsetComponent offset is not 490");
	auto constexpr UReflectionCaptureComponent_ReflectionSourceType_Offset = offsetof(UReflectionCaptureComponent, ReflectionSourceType);
	static_assert(UReflectionCaptureComponent_ReflectionSourceType_Offset == 0x498, "UReflectionCaptureComponent::ReflectionSourceType offset is not 498");
	auto constexpr UReflectionCaptureComponent_Cubemap_Offset = offsetof(UReflectionCaptureComponent, Cubemap);
	static_assert(UReflectionCaptureComponent_Cubemap_Offset == 0x4a0, "UReflectionCaptureComponent::Cubemap offset is not 4a0");
	auto constexpr UReflectionCaptureComponent_SourceCubemapAngle_Offset = offsetof(UReflectionCaptureComponent, SourceCubemapAngle);
	static_assert(UReflectionCaptureComponent_SourceCubemapAngle_Offset == 0x4a8, "UReflectionCaptureComponent::SourceCubemapAngle offset is not 4a8");
	auto constexpr UReflectionCaptureComponent_Brightness_Offset = offsetof(UReflectionCaptureComponent, Brightness);
	static_assert(UReflectionCaptureComponent_Brightness_Offset == 0x4ac, "UReflectionCaptureComponent::Brightness offset is not 4ac");
	auto constexpr UReflectionCaptureComponent_CaptureOffset_Offset = offsetof(UReflectionCaptureComponent, CaptureOffset);
	static_assert(UReflectionCaptureComponent_CaptureOffset_Offset == 0x4b0, "UReflectionCaptureComponent::CaptureOffset offset is not 4b0");
	auto constexpr UReflectionCaptureComponent_boolField4BC_Offset = offsetof(UReflectionCaptureComponent, boolField4BC);
	static_assert(UReflectionCaptureComponent_boolField4BC_Offset == 0x4bc, "UReflectionCaptureComponent::boolField4BC offset is not 4bc");
	auto constexpr UReflectionCaptureComponent_StateId_Offset = offsetof(UReflectionCaptureComponent, StateId);
	static_assert(UReflectionCaptureComponent_StateId_Offset == 0x4e0, "UReflectionCaptureComponent::StateId offset is not 4e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
