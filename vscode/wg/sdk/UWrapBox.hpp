#pragma once
#include "UPanelWidget.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWrapBox // Size: 0x168
	: public UPanelWidget // Size: 0x148
{
private:
	typedef UWrapBox t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(514); // id32("Class UMG.WrapBox")
		return ptr;
	}
	FVector2D InnerSlotPadding; /* Ofs: 0x148 Size: 0x8 - StructProperty UMG.WrapBox.InnerSlotPadding */
	float WrapWidth; /* Ofs: 0x150 Size: 0x4 - FloatProperty UMG.WrapBox.WrapWidth */
	uint8_t boolField154;
	uint8_t UnknownData155[0x13];


	inline bool SetInnerSlotPadding(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x148, value); }
	inline bool SetWrapWidth(t_structHelper inst, float value) { inst.WriteOffset(0x150, value); }
	inline bool bExplicitWrapWidth()
	{
		return boolField154& 0x1;
	}
	inline bool SetbExplicitWrapWidth(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x154, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWrapBox = sizeof(UWrapBox); // 360
    static_assert(sizeof(UWrapBox) == 0x168, "Size of UWrapBox is not correct.");
	auto constexpr UWrapBox_InnerSlotPadding_Offset = offsetof(UWrapBox, InnerSlotPadding);
	static_assert(UWrapBox_InnerSlotPadding_Offset == 0x148, "UWrapBox::InnerSlotPadding offset is not 148");
	auto constexpr UWrapBox_WrapWidth_Offset = offsetof(UWrapBox, WrapWidth);
	static_assert(UWrapBox_WrapWidth_Offset == 0x150, "UWrapBox::WrapWidth offset is not 150");
	auto constexpr UWrapBox_boolField154_Offset = offsetof(UWrapBox, boolField154);
	static_assert(UWrapBox_boolField154_Offset == 0x154, "UWrapBox::boolField154 offset is not 154");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
