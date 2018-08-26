#pragma once
#include "UWarModeRankingWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnticheatCenterBarWidget_C // Size: 0x348
	: public UWarModeRankingWidget // Size: 0x338
{
private:
	typedef UAnticheatCenterBarWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(195671); // id32("WidgetBlueprintGeneratedClass AnticheatCenterBarWidget.AnticheatCenterBarWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x338 Size: 0x8 - StructProperty AnticheatCenterBarWidget.AnticheatCenterBarWidget_C.UberGraphFrame */
	ExternalPtr<struct UImage> Image_63; /* Ofs: 0x340 Size: 0x8 - ObjectProperty AnticheatCenterBarWidget.AnticheatCenterBarWidget_C.Image_63 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x338, value); }
	inline bool SetImage_63(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x340, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnticheatCenterBarWidget_C = sizeof(UAnticheatCenterBarWidget_C); // 840
    static_assert(sizeof(UAnticheatCenterBarWidget_C) == 0x348, "Size of UAnticheatCenterBarWidget_C is not correct.");
	auto constexpr UAnticheatCenterBarWidget_C_UberGraphFrame_Offset = offsetof(UAnticheatCenterBarWidget_C, UberGraphFrame);
	static_assert(UAnticheatCenterBarWidget_C_UberGraphFrame_Offset == 0x338, "UAnticheatCenterBarWidget_C::UberGraphFrame offset is not 338");
	auto constexpr UAnticheatCenterBarWidget_C_Image_63_Offset = offsetof(UAnticheatCenterBarWidget_C, Image_63);
	static_assert(UAnticheatCenterBarWidget_C_Image_63_Offset == 0x340, "UAnticheatCenterBarWidget_C::Image_63 offset is not 340");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
