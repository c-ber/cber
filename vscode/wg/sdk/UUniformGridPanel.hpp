#pragma once
#include "UPanelWidget.hpp"
#include "FMargin.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUniformGridPanel // Size: 0x170
	: public UPanelWidget // Size: 0x148
{
private:
	typedef UUniformGridPanel t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(511); // id32("Class UMG.UniformGridPanel")
		return ptr;
	}
	FMargin SlotPadding; /* Ofs: 0x148 Size: 0x10 - StructProperty UMG.UniformGridPanel.SlotPadding */
	float MinDesiredSlotWidth; /* Ofs: 0x158 Size: 0x4 - FloatProperty UMG.UniformGridPanel.MinDesiredSlotWidth */
	float MinDesiredSlotHeight; /* Ofs: 0x15C Size: 0x4 - FloatProperty UMG.UniformGridPanel.MinDesiredSlotHeight */
	uint8_t UnknownData160[0x10];


	inline bool SetSlotPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x148, value); }
	inline bool SetMinDesiredSlotWidth(t_structHelper inst, float value) { inst.WriteOffset(0x158, value); }
	inline bool SetMinDesiredSlotHeight(t_structHelper inst, float value) { inst.WriteOffset(0x15C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUniformGridPanel = sizeof(UUniformGridPanel); // 368
    static_assert(sizeof(UUniformGridPanel) == 0x170, "Size of UUniformGridPanel is not correct.");
	auto constexpr UUniformGridPanel_SlotPadding_Offset = offsetof(UUniformGridPanel, SlotPadding);
	static_assert(UUniformGridPanel_SlotPadding_Offset == 0x148, "UUniformGridPanel::SlotPadding offset is not 148");
	auto constexpr UUniformGridPanel_MinDesiredSlotWidth_Offset = offsetof(UUniformGridPanel, MinDesiredSlotWidth);
	static_assert(UUniformGridPanel_MinDesiredSlotWidth_Offset == 0x158, "UUniformGridPanel::MinDesiredSlotWidth offset is not 158");
	auto constexpr UUniformGridPanel_MinDesiredSlotHeight_Offset = offsetof(UUniformGridPanel, MinDesiredSlotHeight);
	static_assert(UUniformGridPanel_MinDesiredSlotHeight_Offset == 0x15c, "UUniformGridPanel::MinDesiredSlotHeight offset is not 15c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
