#pragma once
#include "UWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPanelWidget // Size: 0x148
	: public UWidget // Size: 0x130
{
private:
	typedef UPanelWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(479); // id32("Class UMG.PanelWidget")
		return ptr;
	}
	TArray<ExternalPtr<struct UPanelSlot>> Slots; /* Ofs: 0x130 Size: 0x10 - ArrayProperty UMG.PanelWidget.Slots */
	uint8_t UnknownData140[0x8];


	inline bool SetSlots(t_structHelper inst, TArray<ExternalPtr<struct UPanelSlot>> value) { inst.WriteOffset(0x130, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPanelWidget = sizeof(UPanelWidget); // 328
    static_assert(sizeof(UPanelWidget) == 0x148, "Size of UPanelWidget is not correct.");
	auto constexpr UPanelWidget_Slots_Offset = offsetof(UPanelWidget, Slots);
	static_assert(UPanelWidget_Slots_Offset == 0x130, "UPanelWidget::Slots offset is not 130");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
