#pragma once
#include "UPrimitiveComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBillboardComponent // Size: 0x910
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UBillboardComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(200); // id32("Class Engine.BillboardComponent")
		return ptr;
	}
//	ExternalPtr<struct UTexture2D> Sprite; /* Ofs: 0x8E8 Size: 0x8 - ObjectProperty Engine.BillboardComponent.Sprite */
	uint8_t boolField8F0;
	uint8_t UnknownData8F1[0x3];
	float ScreenSize; /* Ofs: 0x8F4 Size: 0x4 - FloatProperty Engine.BillboardComponent.ScreenSize */
	float U; /* Ofs: 0x8F8 Size: 0x4 - FloatProperty Engine.BillboardComponent.U */
	float UL; /* Ofs: 0x8FC Size: 0x4 - FloatProperty Engine.BillboardComponent.UL */
	float V; /* Ofs: 0x900 Size: 0x4 - FloatProperty Engine.BillboardComponent.V */
	float VL; /* Ofs: 0x904 Size: 0x4 - FloatProperty Engine.BillboardComponent.VL */
	uint8_t UnknownData908[0x8];


//	inline bool SetSprite(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x8E8, value); }
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
	inline bool SetU(t_structHelper inst, float value) { inst.WriteOffset(0x8F8, value); }
	inline bool SetUL(t_structHelper inst, float value) { inst.WriteOffset(0x8FC, value); }
	inline bool SetV(t_structHelper inst, float value) { inst.WriteOffset(0x900, value); }
	inline bool SetVL(t_structHelper inst, float value) { inst.WriteOffset(0x904, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBillboardComponent = sizeof(UBillboardComponent); // 2320
    static_assert(sizeof(UBillboardComponent) == 0x910, "Size of UBillboardComponent is not correct.");
//	auto constexpr UBillboardComponent_Sprite_Offset = offsetof(UBillboardComponent, Sprite);
//	static_assert(UBillboardComponent_Sprite_Offset == 0x8e8, "UBillboardComponent::Sprite offset is not 8e8");
	auto constexpr UBillboardComponent_boolField8F0_Offset = offsetof(UBillboardComponent, boolField8F0);
	static_assert(UBillboardComponent_boolField8F0_Offset == 0x8f0, "UBillboardComponent::boolField8F0 offset is not 8f0");
	auto constexpr UBillboardComponent_ScreenSize_Offset = offsetof(UBillboardComponent, ScreenSize);
	static_assert(UBillboardComponent_ScreenSize_Offset == 0x8f4, "UBillboardComponent::ScreenSize offset is not 8f4");
	auto constexpr UBillboardComponent_U_Offset = offsetof(UBillboardComponent, U);
	static_assert(UBillboardComponent_U_Offset == 0x8f8, "UBillboardComponent::U offset is not 8f8");
	auto constexpr UBillboardComponent_UL_Offset = offsetof(UBillboardComponent, UL);
	static_assert(UBillboardComponent_UL_Offset == 0x8fc, "UBillboardComponent::UL offset is not 8fc");
	auto constexpr UBillboardComponent_V_Offset = offsetof(UBillboardComponent, V);
	static_assert(UBillboardComponent_V_Offset == 0x900, "UBillboardComponent::V offset is not 900");
	auto constexpr UBillboardComponent_VL_Offset = offsetof(UBillboardComponent, VL);
	static_assert(UBillboardComponent_VL_Offset == 0x904, "UBillboardComponent::VL offset is not 904");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
