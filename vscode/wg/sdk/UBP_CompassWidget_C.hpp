#pragma once
#include "UTslCompassWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_CompassWidget_C // Size: 0x4E0
	: public UTslCompassWidget // Size: 0x4A8
{
private:
	typedef UBP_CompassWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(190063); // id32("WidgetBlueprintGeneratedClass BP_CompassWidget.BP_CompassWidget_C")
		return ptr;
	}
	ExternalPtr<struct UImage> Compass_Center; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty BP_CompassWidget.BP_CompassWidget_C.Compass_Center */
	ExternalPtr<struct UImage> compass_marker; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty BP_CompassWidget.BP_CompassWidget_C.compass_marker */
	ExternalPtr<struct UImage> CompassImage; /* Ofs: 0x4B8 Size: 0x8 - ObjectProperty BP_CompassWidget.BP_CompassWidget_C.CompassImage */
	ExternalPtr<struct UVerticalBox> CompassMain; /* Ofs: 0x4C0 Size: 0x8 - ObjectProperty BP_CompassWidget.BP_CompassWidget_C.CompassMain */
	ExternalPtr<struct UOverlay> My; /* Ofs: 0x4C8 Size: 0x8 - ObjectProperty BP_CompassWidget.BP_CompassWidget_C.My */
	ExternalPtr<struct UOverlay> MyMarkerLyaer; /* Ofs: 0x4D0 Size: 0x8 - ObjectProperty BP_CompassWidget.BP_CompassWidget_C.MyMarkerLyaer */
	ExternalPtr<struct UOverlay> Team; /* Ofs: 0x4D8 Size: 0x8 - ObjectProperty BP_CompassWidget.BP_CompassWidget_C.Team */


	inline bool SetCompass_Center(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x4A8, value); }
	inline bool Setcompass_marker(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetCompassImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetCompassMain(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetMy(t_structHelper inst, ExternalPtr<struct UOverlay> value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetMyMarkerLyaer(t_structHelper inst, ExternalPtr<struct UOverlay> value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetTeam(t_structHelper inst, ExternalPtr<struct UOverlay> value) { inst.WriteOffset(0x4D8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_CompassWidget_C = sizeof(UBP_CompassWidget_C); // 1248
    static_assert(sizeof(UBP_CompassWidget_C) == 0x4E0, "Size of UBP_CompassWidget_C is not correct.");
	auto constexpr UBP_CompassWidget_C_Compass_Center_Offset = offsetof(UBP_CompassWidget_C, Compass_Center);
	static_assert(UBP_CompassWidget_C_Compass_Center_Offset == 0x4a8, "UBP_CompassWidget_C::Compass_Center offset is not 4a8");
	auto constexpr UBP_CompassWidget_C_compass_marker_Offset = offsetof(UBP_CompassWidget_C, compass_marker);
	static_assert(UBP_CompassWidget_C_compass_marker_Offset == 0x4b0, "UBP_CompassWidget_C::compass_marker offset is not 4b0");
	auto constexpr UBP_CompassWidget_C_CompassImage_Offset = offsetof(UBP_CompassWidget_C, CompassImage);
	static_assert(UBP_CompassWidget_C_CompassImage_Offset == 0x4b8, "UBP_CompassWidget_C::CompassImage offset is not 4b8");
	auto constexpr UBP_CompassWidget_C_CompassMain_Offset = offsetof(UBP_CompassWidget_C, CompassMain);
	static_assert(UBP_CompassWidget_C_CompassMain_Offset == 0x4c0, "UBP_CompassWidget_C::CompassMain offset is not 4c0");
	auto constexpr UBP_CompassWidget_C_My_Offset = offsetof(UBP_CompassWidget_C, My);
	static_assert(UBP_CompassWidget_C_My_Offset == 0x4c8, "UBP_CompassWidget_C::My offset is not 4c8");
	auto constexpr UBP_CompassWidget_C_MyMarkerLyaer_Offset = offsetof(UBP_CompassWidget_C, MyMarkerLyaer);
	static_assert(UBP_CompassWidget_C_MyMarkerLyaer_Offset == 0x4d0, "UBP_CompassWidget_C::MyMarkerLyaer offset is not 4d0");
	auto constexpr UBP_CompassWidget_C_Team_Offset = offsetof(UBP_CompassWidget_C, Team);
	static_assert(UBP_CompassWidget_C_Team_Offset == 0x4d8, "UBP_CompassWidget_C::Team offset is not 4d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
