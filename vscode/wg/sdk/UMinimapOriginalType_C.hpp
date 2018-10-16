#pragma once
#include "UMinimapCanvasWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMinimapOriginalType_C // Size: 0x430
	: public UMinimapCanvasWidget // Size: 0x400
{
private:
	typedef UMinimapOriginalType_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(190244); // id32("WidgetBlueprintGeneratedClass MinimapOriginalType.MinimapOriginalType_C")
		return ptr;
	}
	ExternalPtr<struct UBP_BlueZoneGpsWidget_C> BluezoneGps; /* Ofs: 0x400 Size: 0x8 - ObjectProperty MinimapOriginalType.MinimapOriginalType_C.BluezoneGps */
	ExternalPtr<struct UBP_BlueZoneTimeWidget_C> BluezoneTime; /* Ofs: 0x408 Size: 0x8 - ObjectProperty MinimapOriginalType.MinimapOriginalType_C.BluezoneTime */
	ExternalPtr<struct URetainerBox> BluezoneTimeRetainer; /* Ofs: 0x410 Size: 0x8 - ObjectProperty MinimapOriginalType.MinimapOriginalType_C.BluezoneTimeRetainer */
	ExternalPtr<struct UBP_CompassWidget_C> BPCompassWidget; /* Ofs: 0x418 Size: 0x8 - ObjectProperty MinimapOriginalType.MinimapOriginalType_C.BPCompassWidget */
	ExternalPtr<struct URetainerBox> Compass_RetainerBox; /* Ofs: 0x420 Size: 0x8 - ObjectProperty MinimapOriginalType.MinimapOriginalType_C.Compass_RetainerBox */
	ExternalPtr<struct URetainerBox> Minimap_RetainerBox; /* Ofs: 0x428 Size: 0x8 - ObjectProperty MinimapOriginalType.MinimapOriginalType_C.Minimap_RetainerBox */


	inline bool SetBluezoneGps(t_structHelper inst, ExternalPtr<struct UBP_BlueZoneGpsWidget_C> value) { inst.WriteOffset(0x400, value); }
	inline bool SetBluezoneTime(t_structHelper inst, ExternalPtr<struct UBP_BlueZoneTimeWidget_C> value) { inst.WriteOffset(0x408, value); }
	inline bool SetBluezoneTimeRetainer(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x410, value); }
	inline bool SetBPCompassWidget(t_structHelper inst, ExternalPtr<struct UBP_CompassWidget_C> value) { inst.WriteOffset(0x418, value); }
	inline bool SetCompass_RetainerBox(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x420, value); }
	inline bool SetMinimap_RetainerBox(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x428, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMinimapOriginalType_C = sizeof(UMinimapOriginalType_C); // 1072
    static_assert(sizeof(UMinimapOriginalType_C) == 0x430, "Size of UMinimapOriginalType_C is not correct.");
	auto constexpr UMinimapOriginalType_C_BluezoneGps_Offset = offsetof(UMinimapOriginalType_C, BluezoneGps);
	static_assert(UMinimapOriginalType_C_BluezoneGps_Offset == 0x400, "UMinimapOriginalType_C::BluezoneGps offset is not 400");
	auto constexpr UMinimapOriginalType_C_BluezoneTime_Offset = offsetof(UMinimapOriginalType_C, BluezoneTime);
	static_assert(UMinimapOriginalType_C_BluezoneTime_Offset == 0x408, "UMinimapOriginalType_C::BluezoneTime offset is not 408");
	auto constexpr UMinimapOriginalType_C_BluezoneTimeRetainer_Offset = offsetof(UMinimapOriginalType_C, BluezoneTimeRetainer);
	static_assert(UMinimapOriginalType_C_BluezoneTimeRetainer_Offset == 0x410, "UMinimapOriginalType_C::BluezoneTimeRetainer offset is not 410");
	auto constexpr UMinimapOriginalType_C_BPCompassWidget_Offset = offsetof(UMinimapOriginalType_C, BPCompassWidget);
	static_assert(UMinimapOriginalType_C_BPCompassWidget_Offset == 0x418, "UMinimapOriginalType_C::BPCompassWidget offset is not 418");
	auto constexpr UMinimapOriginalType_C_Compass_RetainerBox_Offset = offsetof(UMinimapOriginalType_C, Compass_RetainerBox);
	static_assert(UMinimapOriginalType_C_Compass_RetainerBox_Offset == 0x420, "UMinimapOriginalType_C::Compass_RetainerBox offset is not 420");
	auto constexpr UMinimapOriginalType_C_Minimap_RetainerBox_Offset = offsetof(UMinimapOriginalType_C, Minimap_RetainerBox);
	static_assert(UMinimapOriginalType_C_Minimap_RetainerBox_Offset == 0x428, "UMinimapOriginalType_C::Minimap_RetainerBox offset is not 428");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
