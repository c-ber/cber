#pragma once
#include "UWarModeRankingWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWarModeRankingWidgetBP_C // Size: 0x340
	: public UWarModeRankingWidget // Size: 0x338
{
private:
	typedef UWarModeRankingWidgetBP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(194647); // id32("WidgetBlueprintGeneratedClass WarModeRankingWidgetBP.WarModeRankingWidgetBP_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x338 Size: 0x8 - StructProperty WarModeRankingWidgetBP.WarModeRankingWidgetBP_C.UberGraphFrame */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x338, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWarModeRankingWidgetBP_C = sizeof(UWarModeRankingWidgetBP_C); // 832
    static_assert(sizeof(UWarModeRankingWidgetBP_C) == 0x340, "Size of UWarModeRankingWidgetBP_C is not correct.");
	auto constexpr UWarModeRankingWidgetBP_C_UberGraphFrame_Offset = offsetof(UWarModeRankingWidgetBP_C, UberGraphFrame);
	static_assert(UWarModeRankingWidgetBP_C_UberGraphFrame_Offset == 0x338, "UWarModeRankingWidgetBP_C::UberGraphFrame offset is not 338");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
