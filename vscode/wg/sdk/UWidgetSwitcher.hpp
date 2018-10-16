#pragma once
#include "UPanelWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWidgetSwitcher // Size: 0x160
	: public UPanelWidget // Size: 0x148
{
private:
	typedef UWidgetSwitcher t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(513); // id32("Class UMG.WidgetSwitcher")
		return ptr;
	}
	int32_t ActiveWidgetIndex; /* Ofs: 0x148 Size: 0x4 - IntProperty UMG.WidgetSwitcher.ActiveWidgetIndex */
	uint8_t UnknownData14C[0x14];


	inline bool SetActiveWidgetIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x148, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWidgetSwitcher = sizeof(UWidgetSwitcher); // 352
    static_assert(sizeof(UWidgetSwitcher) == 0x160, "Size of UWidgetSwitcher is not correct.");
	auto constexpr UWidgetSwitcher_ActiveWidgetIndex_Offset = offsetof(UWidgetSwitcher, ActiveWidgetIndex);
	static_assert(UWidgetSwitcher_ActiveWidgetIndex_Offset == 0x148, "UWidgetSwitcher::ActiveWidgetIndex offset is not 148");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
