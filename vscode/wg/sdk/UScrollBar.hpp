#pragma once
#include "UWidget.hpp"
#include "FScrollBarStyle.hpp"
#include "EOrientation.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UScrollBar // Size: 0x670
	: public UWidget // Size: 0x130
{
private:
	typedef UScrollBar t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(516); // id32("Class UMG.ScrollBar")
		return ptr;
	}
	FScrollBarStyle WidgetStyle; /* Ofs: 0x130 Size: 0x518 - StructProperty UMG.ScrollBar.WidgetStyle */
	ExternalPtr<struct USlateWidgetStyleAsset> Style; /* Ofs: 0x648 Size: 0x8 - ObjectProperty UMG.ScrollBar.Style */
	uint8_t boolField650;
	TEnumAsByte<enum EOrientation> Orientation; /* Ofs: 0x651 Size: 0x1 - ByteProperty UMG.ScrollBar.Orientation */
	uint8_t UnknownData652[0x2];
	FVector2D Thickness; /* Ofs: 0x654 Size: 0x8 - StructProperty UMG.ScrollBar.Thickness */
	uint8_t UnknownData65C[0x14];


	inline bool SetWidgetStyle(t_structHelper inst, FScrollBarStyle value) { inst.WriteOffset(0x130, value); }
	inline bool SetStyle(t_structHelper inst, ExternalPtr<struct USlateWidgetStyleAsset> value) { inst.WriteOffset(0x648, value); }
	inline bool bAlwaysShowScrollbar()
	{
		return boolField650& 0x1;
	}
	inline bool SetbAlwaysShowScrollbar(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x650, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOrientation(t_structHelper inst, TEnumAsByte<enum EOrientation> value) { inst.WriteOffset(0x651, value); }
	inline bool SetThickness(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x654, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUScrollBar = sizeof(UScrollBar); // 1648
    static_assert(sizeof(UScrollBar) == 0x670, "Size of UScrollBar is not correct.");
	auto constexpr UScrollBar_WidgetStyle_Offset = offsetof(UScrollBar, WidgetStyle);
	static_assert(UScrollBar_WidgetStyle_Offset == 0x130, "UScrollBar::WidgetStyle offset is not 130");
	auto constexpr UScrollBar_Style_Offset = offsetof(UScrollBar, Style);
	static_assert(UScrollBar_Style_Offset == 0x648, "UScrollBar::Style offset is not 648");
	auto constexpr UScrollBar_boolField650_Offset = offsetof(UScrollBar, boolField650);
	static_assert(UScrollBar_boolField650_Offset == 0x650, "UScrollBar::boolField650 offset is not 650");
	auto constexpr UScrollBar_Orientation_Offset = offsetof(UScrollBar, Orientation);
	static_assert(UScrollBar_Orientation_Offset == 0x651, "UScrollBar::Orientation offset is not 651");
	auto constexpr UScrollBar_Thickness_Offset = offsetof(UScrollBar, Thickness);
	static_assert(UScrollBar_Thickness_Offset == 0x654, "UScrollBar::Thickness offset is not 654");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
