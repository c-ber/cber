#pragma once
#include "UPrimitiveComponent.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UArrowComponent // Size: 0x900
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UArrowComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(199); // id32("Class Engine.ArrowComponent")
		return ptr;
	}
//	FColor ArrowColor; /* Ofs: 0x8E8 Size: 0x4 - StructProperty Engine.ArrowComponent.ArrowColor */
//	float ArrowSize; /* Ofs: 0x8EC Size: 0x4 - FloatProperty Engine.ArrowComponent.ArrowSize */
	uint8_t boolField8F0;
	uint8_t UnknownData8F1[0x3];
	float ScreenSize; /* Ofs: 0x8F4 Size: 0x4 - FloatProperty Engine.ArrowComponent.ScreenSize */
	uint8_t boolField8F8;
	uint8_t UnknownData8F9[0x7];


//	inline bool SetArrowColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x8E8, value); }
//	inline bool SetArrowSize(t_structHelper inst, float value) { inst.WriteOffset(0x8EC, value); }
	inline bool bIsScreenSizeScaled()
	{
		return boolField8F0& 0x1;
	}
	inline bool SetbIsScreenSizeScaled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8F0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetScreenSize(t_structHelper inst, float value) { inst.WriteOffset(0x8F4, value); }
	inline bool bTreatAsASprite()
	{
		return boolField8F8& 0x1;
	}
	inline bool SetbTreatAsASprite(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8F8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUArrowComponent = sizeof(UArrowComponent); // 2304
    static_assert(sizeof(UArrowComponent) == 0x900, "Size of UArrowComponent is not correct.");
//	auto constexpr UArrowComponent_ArrowColor_Offset = offsetof(UArrowComponent, ArrowColor);
//	static_assert(UArrowComponent_ArrowColor_Offset == 0x8e8, "UArrowComponent::ArrowColor offset is not 8e8");
//	auto constexpr UArrowComponent_ArrowSize_Offset = offsetof(UArrowComponent, ArrowSize);
//	static_assert(UArrowComponent_ArrowSize_Offset == 0x8ec, "UArrowComponent::ArrowSize offset is not 8ec");
	auto constexpr UArrowComponent_boolField8F0_Offset = offsetof(UArrowComponent, boolField8F0);
	static_assert(UArrowComponent_boolField8F0_Offset == 0x8f0, "UArrowComponent::boolField8F0 offset is not 8f0");
	auto constexpr UArrowComponent_ScreenSize_Offset = offsetof(UArrowComponent, ScreenSize);
	static_assert(UArrowComponent_ScreenSize_Offset == 0x8f4, "UArrowComponent::ScreenSize offset is not 8f4");
	auto constexpr UArrowComponent_boolField8F8_Offset = offsetof(UArrowComponent, boolField8F8);
	static_assert(UArrowComponent_boolField8F8_Offset == 0x8f8, "UArrowComponent::boolField8F8 offset is not 8f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
