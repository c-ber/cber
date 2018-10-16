#pragma once
#include "UTslXboxTeamManageWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_XboxTeamManageWidget_C // Size: 0x398
	: public UTslXboxTeamManageWidget // Size: 0x350
{
private:
	typedef UBP_XboxTeamManageWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(184502); // id32("WidgetBlueprintGeneratedClass BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x350 Size: 0x8 - StructProperty BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.UberGraphFrame */
	ExternalPtr<struct UBorder> Border_5; /* Ofs: 0x358 Size: 0x8 - ObjectProperty BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.Border_5 */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x360 Size: 0x8 - ObjectProperty BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.Image_1 */
	ExternalPtr<struct UImage> Image_517; /* Ofs: 0x368 Size: 0x8 - ObjectProperty BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.Image_517 */
	ExternalPtr<struct UImage> Image_518; /* Ofs: 0x370 Size: 0x8 - ObjectProperty BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.Image_518 */
	ExternalPtr<struct UImage> Image_519; /* Ofs: 0x378 Size: 0x8 - ObjectProperty BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.Image_519 */
	ExternalPtr<struct UBP_XboxTeamManageInfoWidget_C> TeamInfo0; /* Ofs: 0x380 Size: 0x8 - ObjectProperty BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.TeamInfo0 */
	ExternalPtr<struct UBP_XboxTeamManageInfoWidget_C> TeamInfo1; /* Ofs: 0x388 Size: 0x8 - ObjectProperty BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.TeamInfo1 */
	ExternalPtr<struct UBP_XboxTeamManageInfoWidget_C> TeamInfo2; /* Ofs: 0x390 Size: 0x8 - ObjectProperty BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.TeamInfo2 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x350, value); }
	inline bool SetBorder_5(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x358, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x360, value); }
	inline bool SetImage_517(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x368, value); }
	inline bool SetImage_518(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x370, value); }
	inline bool SetImage_519(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x378, value); }
	inline bool SetTeamInfo0(t_structHelper inst, ExternalPtr<struct UBP_XboxTeamManageInfoWidget_C> value) { inst.WriteOffset(0x380, value); }
	inline bool SetTeamInfo1(t_structHelper inst, ExternalPtr<struct UBP_XboxTeamManageInfoWidget_C> value) { inst.WriteOffset(0x388, value); }
	inline bool SetTeamInfo2(t_structHelper inst, ExternalPtr<struct UBP_XboxTeamManageInfoWidget_C> value) { inst.WriteOffset(0x390, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_XboxTeamManageWidget_C = sizeof(UBP_XboxTeamManageWidget_C); // 920
    static_assert(sizeof(UBP_XboxTeamManageWidget_C) == 0x398, "Size of UBP_XboxTeamManageWidget_C is not correct.");
	auto constexpr UBP_XboxTeamManageWidget_C_UberGraphFrame_Offset = offsetof(UBP_XboxTeamManageWidget_C, UberGraphFrame);
	static_assert(UBP_XboxTeamManageWidget_C_UberGraphFrame_Offset == 0x350, "UBP_XboxTeamManageWidget_C::UberGraphFrame offset is not 350");
	auto constexpr UBP_XboxTeamManageWidget_C_Border_5_Offset = offsetof(UBP_XboxTeamManageWidget_C, Border_5);
	static_assert(UBP_XboxTeamManageWidget_C_Border_5_Offset == 0x358, "UBP_XboxTeamManageWidget_C::Border_5 offset is not 358");
	auto constexpr UBP_XboxTeamManageWidget_C_Image_1_Offset = offsetof(UBP_XboxTeamManageWidget_C, Image_1);
	static_assert(UBP_XboxTeamManageWidget_C_Image_1_Offset == 0x360, "UBP_XboxTeamManageWidget_C::Image_1 offset is not 360");
	auto constexpr UBP_XboxTeamManageWidget_C_Image_517_Offset = offsetof(UBP_XboxTeamManageWidget_C, Image_517);
	static_assert(UBP_XboxTeamManageWidget_C_Image_517_Offset == 0x368, "UBP_XboxTeamManageWidget_C::Image_517 offset is not 368");
	auto constexpr UBP_XboxTeamManageWidget_C_Image_518_Offset = offsetof(UBP_XboxTeamManageWidget_C, Image_518);
	static_assert(UBP_XboxTeamManageWidget_C_Image_518_Offset == 0x370, "UBP_XboxTeamManageWidget_C::Image_518 offset is not 370");
	auto constexpr UBP_XboxTeamManageWidget_C_Image_519_Offset = offsetof(UBP_XboxTeamManageWidget_C, Image_519);
	static_assert(UBP_XboxTeamManageWidget_C_Image_519_Offset == 0x378, "UBP_XboxTeamManageWidget_C::Image_519 offset is not 378");
	auto constexpr UBP_XboxTeamManageWidget_C_TeamInfo0_Offset = offsetof(UBP_XboxTeamManageWidget_C, TeamInfo0);
	static_assert(UBP_XboxTeamManageWidget_C_TeamInfo0_Offset == 0x380, "UBP_XboxTeamManageWidget_C::TeamInfo0 offset is not 380");
	auto constexpr UBP_XboxTeamManageWidget_C_TeamInfo1_Offset = offsetof(UBP_XboxTeamManageWidget_C, TeamInfo1);
	static_assert(UBP_XboxTeamManageWidget_C_TeamInfo1_Offset == 0x388, "UBP_XboxTeamManageWidget_C::TeamInfo1 offset is not 388");
	auto constexpr UBP_XboxTeamManageWidget_C_TeamInfo2_Offset = offsetof(UBP_XboxTeamManageWidget_C, TeamInfo2);
	static_assert(UBP_XboxTeamManageWidget_C_TeamInfo2_Offset == 0x390, "UBP_XboxTeamManageWidget_C::TeamInfo2 offset is not 390");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
