#pragma once
#include "UBluezoneTimeWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_BlueZoneTimeWidget_C // Size: 0x400
	: public UBluezoneTimeWidget // Size: 0x3B0
{
private:
	typedef UBP_BlueZoneTimeWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(190103); // id32("WidgetBlueprintGeneratedClass BP_BlueZoneTimeWidget.BP_BlueZoneTimeWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> ReleasingText_Tritanopia; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty BP_BlueZoneTimeWidget.BP_BlueZoneTimeWidget_C.ReleasingText_Tritanopia */
	ExternalPtr<struct UWidgetAnimation> ReleasingText_Protanopia; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty BP_BlueZoneTimeWidget.BP_BlueZoneTimeWidget_C.ReleasingText_Protanopia */
	ExternalPtr<struct UWidgetAnimation> ReleasingText_Deuteranopia; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty BP_BlueZoneTimeWidget.BP_BlueZoneTimeWidget_C.ReleasingText_Deuteranopia */
	ExternalPtr<struct UWidgetAnimation> Warning_Tritanopia; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty BP_BlueZoneTimeWidget.BP_BlueZoneTimeWidget_C.Warning_Tritanopia */
	ExternalPtr<struct UWidgetAnimation> Warning_Protanopia; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty BP_BlueZoneTimeWidget.BP_BlueZoneTimeWidget_C.Warning_Protanopia */
	ExternalPtr<struct UWidgetAnimation> Warning_Deuteranopia; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty BP_BlueZoneTimeWidget.BP_BlueZoneTimeWidget_C.Warning_Deuteranopia */
	ExternalPtr<struct UWidgetAnimation> WidgetVanishing; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty BP_BlueZoneTimeWidget.BP_BlueZoneTimeWidget_C.WidgetVanishing */
	ExternalPtr<struct UWidgetAnimation> WidgetEmerging; /* Ofs: 0x3E8 Size: 0x8 - ObjectProperty BP_BlueZoneTimeWidget.BP_BlueZoneTimeWidget_C.WidgetEmerging */
	ExternalPtr<struct UWidgetAnimation> WaitingText; /* Ofs: 0x3F0 Size: 0x8 - ObjectProperty BP_BlueZoneTimeWidget.BP_BlueZoneTimeWidget_C.WaitingText */
	ExternalPtr<struct UWidgetAnimation> ReleasingText_Normal; /* Ofs: 0x3F8 Size: 0x8 - ObjectProperty BP_BlueZoneTimeWidget.BP_BlueZoneTimeWidget_C.ReleasingText_Normal */


	inline bool SetReleasingText_Tritanopia(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetReleasingText_Protanopia(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetReleasingText_Deuteranopia(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetWarning_Tritanopia(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetWarning_Protanopia(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetWarning_Deuteranopia(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetWidgetVanishing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetWidgetEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetWaitingText(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetReleasingText_Normal(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_BlueZoneTimeWidget_C = sizeof(UBP_BlueZoneTimeWidget_C); // 1024
    static_assert(sizeof(UBP_BlueZoneTimeWidget_C) == 0x400, "Size of UBP_BlueZoneTimeWidget_C is not correct.");
	auto constexpr UBP_BlueZoneTimeWidget_C_ReleasingText_Tritanopia_Offset = offsetof(UBP_BlueZoneTimeWidget_C, ReleasingText_Tritanopia);
	static_assert(UBP_BlueZoneTimeWidget_C_ReleasingText_Tritanopia_Offset == 0x3b0, "UBP_BlueZoneTimeWidget_C::ReleasingText_Tritanopia offset is not 3b0");
	auto constexpr UBP_BlueZoneTimeWidget_C_ReleasingText_Protanopia_Offset = offsetof(UBP_BlueZoneTimeWidget_C, ReleasingText_Protanopia);
	static_assert(UBP_BlueZoneTimeWidget_C_ReleasingText_Protanopia_Offset == 0x3b8, "UBP_BlueZoneTimeWidget_C::ReleasingText_Protanopia offset is not 3b8");
	auto constexpr UBP_BlueZoneTimeWidget_C_ReleasingText_Deuteranopia_Offset = offsetof(UBP_BlueZoneTimeWidget_C, ReleasingText_Deuteranopia);
	static_assert(UBP_BlueZoneTimeWidget_C_ReleasingText_Deuteranopia_Offset == 0x3c0, "UBP_BlueZoneTimeWidget_C::ReleasingText_Deuteranopia offset is not 3c0");
	auto constexpr UBP_BlueZoneTimeWidget_C_Warning_Tritanopia_Offset = offsetof(UBP_BlueZoneTimeWidget_C, Warning_Tritanopia);
	static_assert(UBP_BlueZoneTimeWidget_C_Warning_Tritanopia_Offset == 0x3c8, "UBP_BlueZoneTimeWidget_C::Warning_Tritanopia offset is not 3c8");
	auto constexpr UBP_BlueZoneTimeWidget_C_Warning_Protanopia_Offset = offsetof(UBP_BlueZoneTimeWidget_C, Warning_Protanopia);
	static_assert(UBP_BlueZoneTimeWidget_C_Warning_Protanopia_Offset == 0x3d0, "UBP_BlueZoneTimeWidget_C::Warning_Protanopia offset is not 3d0");
	auto constexpr UBP_BlueZoneTimeWidget_C_Warning_Deuteranopia_Offset = offsetof(UBP_BlueZoneTimeWidget_C, Warning_Deuteranopia);
	static_assert(UBP_BlueZoneTimeWidget_C_Warning_Deuteranopia_Offset == 0x3d8, "UBP_BlueZoneTimeWidget_C::Warning_Deuteranopia offset is not 3d8");
	auto constexpr UBP_BlueZoneTimeWidget_C_WidgetVanishing_Offset = offsetof(UBP_BlueZoneTimeWidget_C, WidgetVanishing);
	static_assert(UBP_BlueZoneTimeWidget_C_WidgetVanishing_Offset == 0x3e0, "UBP_BlueZoneTimeWidget_C::WidgetVanishing offset is not 3e0");
	auto constexpr UBP_BlueZoneTimeWidget_C_WidgetEmerging_Offset = offsetof(UBP_BlueZoneTimeWidget_C, WidgetEmerging);
	static_assert(UBP_BlueZoneTimeWidget_C_WidgetEmerging_Offset == 0x3e8, "UBP_BlueZoneTimeWidget_C::WidgetEmerging offset is not 3e8");
	auto constexpr UBP_BlueZoneTimeWidget_C_WaitingText_Offset = offsetof(UBP_BlueZoneTimeWidget_C, WaitingText);
	static_assert(UBP_BlueZoneTimeWidget_C_WaitingText_Offset == 0x3f0, "UBP_BlueZoneTimeWidget_C::WaitingText offset is not 3f0");
	auto constexpr UBP_BlueZoneTimeWidget_C_ReleasingText_Normal_Offset = offsetof(UBP_BlueZoneTimeWidget_C, ReleasingText_Normal);
	static_assert(UBP_BlueZoneTimeWidget_C_ReleasingText_Normal_Offset == 0x3f8, "UBP_BlueZoneTimeWidget_C::ReleasingText_Normal offset is not 3f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
