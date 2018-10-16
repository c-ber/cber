#pragma once
#include "UWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UComboBox // Size: 0x168
	: public UWidget // Size: 0x130
{
private:
	typedef UComboBox t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(485); // id32("Class UMG.ComboBox")
		return ptr;
	}
	TArray<ExternalPtr<struct UObject>> Items; /* Ofs: 0x130 Size: 0x10 - ArrayProperty UMG.ComboBox.Items */
	FScriptDelegate OnGenerateWidgetEvent; /* Ofs: 0x140 Size: 0x10 - DelegateProperty UMG.ComboBox.OnGenerateWidgetEvent */
	uint8_t boolField150;
	uint8_t UnknownData151[0x17];


	inline bool SetItems(t_structHelper inst, TArray<ExternalPtr<struct UObject>> value) { inst.WriteOffset(0x130, value); }
	inline bool SetOnGenerateWidgetEvent(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x140, value); }
	inline bool bIsFocusable()
	{
		return boolField150& 0x1;
	}
	inline bool SetbIsFocusable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x150, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUComboBox = sizeof(UComboBox); // 360
    static_assert(sizeof(UComboBox) == 0x168, "Size of UComboBox is not correct.");
	auto constexpr UComboBox_Items_Offset = offsetof(UComboBox, Items);
	static_assert(UComboBox_Items_Offset == 0x130, "UComboBox::Items offset is not 130");
	auto constexpr UComboBox_OnGenerateWidgetEvent_Offset = offsetof(UComboBox, OnGenerateWidgetEvent);
	static_assert(UComboBox_OnGenerateWidgetEvent_Offset == 0x140, "UComboBox::OnGenerateWidgetEvent offset is not 140");
	auto constexpr UComboBox_boolField150_Offset = offsetof(UComboBox, boolField150);
	static_assert(UComboBox_boolField150_Offset == 0x150, "UComboBox::boolField150 offset is not 150");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
