#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FUmgWidgetBinder_Animation.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMapMarkerBaseWidget // Size: 0x360
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UMapMarkerBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1538); // id32("Class TslGame.MapMarkerBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_Image MarkerImageBinder; /* Ofs: 0x300 Size: 0x28 - StructProperty TslGame.MapMarkerBaseWidget.MarkerImageBinder */
	FName MarkerColorParmName; /* Ofs: 0x328 Size: 0x8 - NameProperty TslGame.MapMarkerBaseWidget.MarkerColorParmName */
	FUmgWidgetBinder_Animation MarkerEmergingAnimBinder; /* Ofs: 0x330 Size: 0x20 - StructProperty TslGame.MapMarkerBaseWidget.MarkerEmergingAnimBinder */
	uint8_t UnknownData350[0x10];


	inline bool SetMarkerImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x300, value); }
	inline bool SetMarkerColorParmName(t_structHelper inst, FName value) { inst.WriteOffset(0x328, value); }
	inline bool SetMarkerEmergingAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x330, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMapMarkerBaseWidget = sizeof(UMapMarkerBaseWidget); // 864
    static_assert(sizeof(UMapMarkerBaseWidget) == 0x360, "Size of UMapMarkerBaseWidget is not correct.");
	auto constexpr UMapMarkerBaseWidget_MarkerImageBinder_Offset = offsetof(UMapMarkerBaseWidget, MarkerImageBinder);
	static_assert(UMapMarkerBaseWidget_MarkerImageBinder_Offset == 0x300, "UMapMarkerBaseWidget::MarkerImageBinder offset is not 300");
	auto constexpr UMapMarkerBaseWidget_MarkerColorParmName_Offset = offsetof(UMapMarkerBaseWidget, MarkerColorParmName);
	static_assert(UMapMarkerBaseWidget_MarkerColorParmName_Offset == 0x328, "UMapMarkerBaseWidget::MarkerColorParmName offset is not 328");
	auto constexpr UMapMarkerBaseWidget_MarkerEmergingAnimBinder_Offset = offsetof(UMapMarkerBaseWidget, MarkerEmergingAnimBinder);
	static_assert(UMapMarkerBaseWidget_MarkerEmergingAnimBinder_Offset == 0x330, "UMapMarkerBaseWidget::MarkerEmergingAnimBinder offset is not 330");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
