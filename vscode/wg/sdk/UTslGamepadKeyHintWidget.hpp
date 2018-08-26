#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Gerneral.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGamepadKeyHintWidget // Size: 0x338
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslGamepadKeyHintWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1422); // id32("Class TslGame.TslGamepadKeyHintWidget")
		return ptr;
	}
	uint8_t UnknownData300[0x8];
	FUmgWidgetBinder_Gerneral HintSetSwitcher_Binder; /* Ofs: 0x308 Size: 0x20 - StructProperty TslGame.TslGamepadKeyHintWidget.HintSetSwitcher_Binder */
	TArray<struct FTslKeyHintData> KeyHintDatas; /* Ofs: 0x328 Size: 0x10 - ArrayProperty TslGame.TslGamepadKeyHintWidget.KeyHintDatas */


	inline bool SetHintSetSwitcher_Binder(t_structHelper inst, FUmgWidgetBinder_Gerneral value) { inst.WriteOffset(0x308, value); }
	inline bool SetKeyHintDatas(t_structHelper inst, TArray<struct FTslKeyHintData> value) { inst.WriteOffset(0x328, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGamepadKeyHintWidget = sizeof(UTslGamepadKeyHintWidget); // 824
    static_assert(sizeof(UTslGamepadKeyHintWidget) == 0x338, "Size of UTslGamepadKeyHintWidget is not correct.");
	auto constexpr UTslGamepadKeyHintWidget_HintSetSwitcher_Binder_Offset = offsetof(UTslGamepadKeyHintWidget, HintSetSwitcher_Binder);
	static_assert(UTslGamepadKeyHintWidget_HintSetSwitcher_Binder_Offset == 0x308, "UTslGamepadKeyHintWidget::HintSetSwitcher_Binder offset is not 308");
	auto constexpr UTslGamepadKeyHintWidget_KeyHintDatas_Offset = offsetof(UTslGamepadKeyHintWidget, KeyHintDatas);
	static_assert(UTslGamepadKeyHintWidget_KeyHintDatas_Offset == 0x328, "UTslGamepadKeyHintWidget::KeyHintDatas offset is not 328");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
