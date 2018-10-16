#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_RetainerBox.hpp"
#include "FUmgWidgetBinder_UserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGamepadHudWidget // Size: 0x380
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslGamepadHudWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1566); // id32("Class TslGame.TslGamepadHudWidget")
		return ptr;
	}
	FUmgWidgetBinder_RetainerBox HealItemSelector_RetainerBox; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.TslGamepadHudWidget.HealItemSelector_RetainerBox */
	FUmgWidgetBinder_RetainerBox KeyHint_RetainerBox; /* Ofs: 0x320 Size: 0x20 - StructProperty TslGame.TslGamepadHudWidget.KeyHint_RetainerBox */
	FUmgWidgetBinder_UserWidget HealItemSelectorBinder; /* Ofs: 0x340 Size: 0x20 - StructProperty TslGame.TslGamepadHudWidget.HealItemSelectorBinder */
	FUmgWidgetBinder_UserWidget KeyGuideBinder; /* Ofs: 0x360 Size: 0x20 - StructProperty TslGame.TslGamepadHudWidget.KeyGuideBinder */


	inline bool SetHealItemSelector_RetainerBox(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x300, value); }
	inline bool SetKeyHint_RetainerBox(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x320, value); }
	inline bool SetHealItemSelectorBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x340, value); }
	inline bool SetKeyGuideBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x360, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGamepadHudWidget = sizeof(UTslGamepadHudWidget); // 896
    static_assert(sizeof(UTslGamepadHudWidget) == 0x380, "Size of UTslGamepadHudWidget is not correct.");
	auto constexpr UTslGamepadHudWidget_HealItemSelector_RetainerBox_Offset = offsetof(UTslGamepadHudWidget, HealItemSelector_RetainerBox);
	static_assert(UTslGamepadHudWidget_HealItemSelector_RetainerBox_Offset == 0x300, "UTslGamepadHudWidget::HealItemSelector_RetainerBox offset is not 300");
	auto constexpr UTslGamepadHudWidget_KeyHint_RetainerBox_Offset = offsetof(UTslGamepadHudWidget, KeyHint_RetainerBox);
	static_assert(UTslGamepadHudWidget_KeyHint_RetainerBox_Offset == 0x320, "UTslGamepadHudWidget::KeyHint_RetainerBox offset is not 320");
	auto constexpr UTslGamepadHudWidget_HealItemSelectorBinder_Offset = offsetof(UTslGamepadHudWidget, HealItemSelectorBinder);
	static_assert(UTslGamepadHudWidget_HealItemSelectorBinder_Offset == 0x340, "UTslGamepadHudWidget::HealItemSelectorBinder offset is not 340");
	auto constexpr UTslGamepadHudWidget_KeyGuideBinder_Offset = offsetof(UTslGamepadHudWidget, KeyGuideBinder);
	static_assert(UTslGamepadHudWidget_KeyGuideBinder_Offset == 0x360, "UTslGamepadHudWidget::KeyGuideBinder offset is not 360");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
