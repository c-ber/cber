#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_UserWidget.hpp"
#include "FUmgWidgetBinder_RetainerBox.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVersionInfoCanvasBaseWidget // Size: 0x340
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UVersionInfoCanvasBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1594); // id32("Class TslGame.VersionInfoCanvasBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_UserWidget VersionInfoWidgetBinder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.VersionInfoCanvasBaseWidget.VersionInfoWidgetBinder */
	FUmgWidgetBinder_RetainerBox VersionInfoRetainerBoxBinder; /* Ofs: 0x320 Size: 0x20 - StructProperty TslGame.VersionInfoCanvasBaseWidget.VersionInfoRetainerBoxBinder */


	inline bool SetVersionInfoWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x300, value); }
	inline bool SetVersionInfoRetainerBoxBinder(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x320, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVersionInfoCanvasBaseWidget = sizeof(UVersionInfoCanvasBaseWidget); // 832
    static_assert(sizeof(UVersionInfoCanvasBaseWidget) == 0x340, "Size of UVersionInfoCanvasBaseWidget is not correct.");
	auto constexpr UVersionInfoCanvasBaseWidget_VersionInfoWidgetBinder_Offset = offsetof(UVersionInfoCanvasBaseWidget, VersionInfoWidgetBinder);
	static_assert(UVersionInfoCanvasBaseWidget_VersionInfoWidgetBinder_Offset == 0x300, "UVersionInfoCanvasBaseWidget::VersionInfoWidgetBinder offset is not 300");
	auto constexpr UVersionInfoCanvasBaseWidget_VersionInfoRetainerBoxBinder_Offset = offsetof(UVersionInfoCanvasBaseWidget, VersionInfoRetainerBoxBinder);
	static_assert(UVersionInfoCanvasBaseWidget_VersionInfoRetainerBoxBinder_Offset == 0x320, "UVersionInfoCanvasBaseWidget::VersionInfoRetainerBoxBinder offset is not 320");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
