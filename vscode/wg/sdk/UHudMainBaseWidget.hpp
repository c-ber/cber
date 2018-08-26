#pragma once
#include "UUmgBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UHudMainBaseWidget // Size: 0x310
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UHudMainBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1527); // id32("Class TslGame.HudMainBaseWidget")
		return ptr;
	}
	TArray<struct FHudUiConfig> GeneralUiConfigs; /* Ofs: 0x300 Size: 0x10 - ArrayProperty TslGame.HudMainBaseWidget.GeneralUiConfigs */


	inline bool SetGeneralUiConfigs(t_structHelper inst, TArray<struct FHudUiConfig> value) { inst.WriteOffset(0x300, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUHudMainBaseWidget = sizeof(UHudMainBaseWidget); // 784
    static_assert(sizeof(UHudMainBaseWidget) == 0x310, "Size of UHudMainBaseWidget is not correct.");
	auto constexpr UHudMainBaseWidget_GeneralUiConfigs_Offset = offsetof(UHudMainBaseWidget, GeneralUiConfigs);
	static_assert(UHudMainBaseWidget_GeneralUiConfigs_Offset == 0x300, "UHudMainBaseWidget::GeneralUiConfigs offset is not 300");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
