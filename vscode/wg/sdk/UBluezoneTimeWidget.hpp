#pragma once
#include "UBluezoneGuideWidget.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBluezoneTimeWidget // Size: 0x3B0
	: public UBluezoneGuideWidget // Size: 0x300
{
private:
	typedef UBluezoneTimeWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1517); // id32("Class TslGame.BluezoneTimeWidget")
		return ptr;
	}
	FUmgWidgetBinder_TextBlock BluezoneTimeTextBinder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.BluezoneTimeWidget.BluezoneTimeTextBinder */
	TArray<struct FUmgWidgetBinder_Animation> ReleasingTextAnimationList; /* Ofs: 0x320 Size: 0x10 - ArrayProperty TslGame.BluezoneTimeWidget.ReleasingTextAnimationList */
	FText WarningTimeTextFormat; /* Ofs: 0x330 Size: 0x18 - TextProperty TslGame.BluezoneTimeWidget.WarningTimeTextFormat */
	FText ReleaseTimeText; /* Ofs: 0x348 Size: 0x18 - TextProperty TslGame.BluezoneTimeWidget.ReleaseTimeText */
	uint8_t UnknownData360[0x50];


	inline bool SetBluezoneTimeTextBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x300, value); }
	inline bool SetReleasingTextAnimationList(t_structHelper inst, TArray<struct FUmgWidgetBinder_Animation> value) { inst.WriteOffset(0x320, value); }
	inline bool SetWarningTimeTextFormat(t_structHelper inst, FText value) { inst.WriteOffset(0x330, value); }
	inline bool SetReleaseTimeText(t_structHelper inst, FText value) { inst.WriteOffset(0x348, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBluezoneTimeWidget = sizeof(UBluezoneTimeWidget); // 944
    static_assert(sizeof(UBluezoneTimeWidget) == 0x3B0, "Size of UBluezoneTimeWidget is not correct.");
	auto constexpr UBluezoneTimeWidget_BluezoneTimeTextBinder_Offset = offsetof(UBluezoneTimeWidget, BluezoneTimeTextBinder);
	static_assert(UBluezoneTimeWidget_BluezoneTimeTextBinder_Offset == 0x300, "UBluezoneTimeWidget::BluezoneTimeTextBinder offset is not 300");
	auto constexpr UBluezoneTimeWidget_ReleasingTextAnimationList_Offset = offsetof(UBluezoneTimeWidget, ReleasingTextAnimationList);
	static_assert(UBluezoneTimeWidget_ReleasingTextAnimationList_Offset == 0x320, "UBluezoneTimeWidget::ReleasingTextAnimationList offset is not 320");
	auto constexpr UBluezoneTimeWidget_WarningTimeTextFormat_Offset = offsetof(UBluezoneTimeWidget, WarningTimeTextFormat);
	static_assert(UBluezoneTimeWidget_WarningTimeTextFormat_Offset == 0x330, "UBluezoneTimeWidget::WarningTimeTextFormat offset is not 330");
	auto constexpr UBluezoneTimeWidget_ReleaseTimeText_Offset = offsetof(UBluezoneTimeWidget, ReleaseTimeText);
	static_assert(UBluezoneTimeWidget_ReleaseTimeText_Offset == 0x348, "UBluezoneTimeWidget::ReleaseTimeText offset is not 348");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
