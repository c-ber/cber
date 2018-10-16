#pragma once
#include "UTslCompassMarkerWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_CompassMarkerWidget_C // Size: 0x358
	: public UTslCompassMarkerWidget // Size: 0x338
{
private:
	typedef UBP_CompassMarkerWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(190012); // id32("WidgetBlueprintGeneratedClass BP_CompassMarkerWidget.BP_CompassMarkerWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> vanish; /* Ofs: 0x338 Size: 0x8 - ObjectProperty BP_CompassMarkerWidget.BP_CompassMarkerWidget_C.vanish */
	ExternalPtr<struct UWidgetAnimation> emerge; /* Ofs: 0x340 Size: 0x8 - ObjectProperty BP_CompassMarkerWidget.BP_CompassMarkerWidget_C.emerge */
	ExternalPtr<struct UImage> CompassMarkerImage; /* Ofs: 0x348 Size: 0x8 - ObjectProperty BP_CompassMarkerWidget.BP_CompassMarkerWidget_C.CompassMarkerImage */
	ExternalPtr<struct UInvalidationBox> InvalidationBox_Marker; /* Ofs: 0x350 Size: 0x8 - ObjectProperty BP_CompassMarkerWidget.BP_CompassMarkerWidget_C.InvalidationBox_Marker */


	inline bool Setvanish(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x338, value); }
	inline bool Setemerge(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x340, value); }
	inline bool SetCompassMarkerImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x348, value); }
	inline bool SetInvalidationBox_Marker(t_structHelper inst, ExternalPtr<struct UInvalidationBox> value) { inst.WriteOffset(0x350, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_CompassMarkerWidget_C = sizeof(UBP_CompassMarkerWidget_C); // 856
    static_assert(sizeof(UBP_CompassMarkerWidget_C) == 0x358, "Size of UBP_CompassMarkerWidget_C is not correct.");
	auto constexpr UBP_CompassMarkerWidget_C_vanish_Offset = offsetof(UBP_CompassMarkerWidget_C, vanish);
	static_assert(UBP_CompassMarkerWidget_C_vanish_Offset == 0x338, "UBP_CompassMarkerWidget_C::vanish offset is not 338");
	auto constexpr UBP_CompassMarkerWidget_C_emerge_Offset = offsetof(UBP_CompassMarkerWidget_C, emerge);
	static_assert(UBP_CompassMarkerWidget_C_emerge_Offset == 0x340, "UBP_CompassMarkerWidget_C::emerge offset is not 340");
	auto constexpr UBP_CompassMarkerWidget_C_CompassMarkerImage_Offset = offsetof(UBP_CompassMarkerWidget_C, CompassMarkerImage);
	static_assert(UBP_CompassMarkerWidget_C_CompassMarkerImage_Offset == 0x348, "UBP_CompassMarkerWidget_C::CompassMarkerImage offset is not 348");
	auto constexpr UBP_CompassMarkerWidget_C_InvalidationBox_Marker_Offset = offsetof(UBP_CompassMarkerWidget_C, InvalidationBox_Marker);
	static_assert(UBP_CompassMarkerWidget_C_InvalidationBox_Marker_Offset == 0x350, "UBP_CompassMarkerWidget_C::InvalidationBox_Marker offset is not 350");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
