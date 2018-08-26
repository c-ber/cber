#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_UserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMiniMapBaseWidget // Size: 0x328
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UMiniMapBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1539); // id32("Class TslGame.MiniMapBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_UserWidget MapWidgetBinder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.MiniMapBaseWidget.MapWidgetBinder */
	ExternalPtr<struct UMapGridWidget> CachedMapWidget; /* Ofs: 0x320 Size: 0x8 - ObjectProperty TslGame.MiniMapBaseWidget.CachedMapWidget */


	inline bool SetMapWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x300, value); }
	inline bool SetCachedMapWidget(t_structHelper inst, ExternalPtr<struct UMapGridWidget> value) { inst.WriteOffset(0x320, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMiniMapBaseWidget = sizeof(UMiniMapBaseWidget); // 808
    static_assert(sizeof(UMiniMapBaseWidget) == 0x328, "Size of UMiniMapBaseWidget is not correct.");
	auto constexpr UMiniMapBaseWidget_MapWidgetBinder_Offset = offsetof(UMiniMapBaseWidget, MapWidgetBinder);
	static_assert(UMiniMapBaseWidget_MapWidgetBinder_Offset == 0x300, "UMiniMapBaseWidget::MapWidgetBinder offset is not 300");
	auto constexpr UMiniMapBaseWidget_CachedMapWidget_Offset = offsetof(UMiniMapBaseWidget, CachedMapWidget);
	static_assert(UMiniMapBaseWidget_CachedMapWidget_Offset == 0x320, "UMiniMapBaseWidget::CachedMapWidget offset is not 320");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
