#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Animation.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNetworkProblemBaseWidget // Size: 0x320
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UNetworkProblemBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1541); // id32("Class TslGame.NetworkProblemBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_Animation IconBlinkingAnimBinder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.NetworkProblemBaseWidget.IconBlinkingAnimBinder */


	inline bool SetIconBlinkingAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x300, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNetworkProblemBaseWidget = sizeof(UNetworkProblemBaseWidget); // 800
    static_assert(sizeof(UNetworkProblemBaseWidget) == 0x320, "Size of UNetworkProblemBaseWidget is not correct.");
	auto constexpr UNetworkProblemBaseWidget_IconBlinkingAnimBinder_Offset = offsetof(UNetworkProblemBaseWidget, IconBlinkingAnimBinder);
	static_assert(UNetworkProblemBaseWidget_IconBlinkingAnimBinder_Offset == 0x300, "UNetworkProblemBaseWidget::IconBlinkingAnimBinder offset is not 300");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
