#pragma once
#include "UWarModeRankingItemWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWarModeRankingItemWidgetBP_C // Size: 0x368
	: public UWarModeRankingItemWidget // Size: 0x368
{
private:
	typedef UWarModeRankingItemWidgetBP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(194626); // id32("WidgetBlueprintGeneratedClass WarModeRankingItemWidgetBP.WarModeRankingItemWidgetBP_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWarModeRankingItemWidgetBP_C = sizeof(UWarModeRankingItemWidgetBP_C); // 872
    static_assert(sizeof(UWarModeRankingItemWidgetBP_C) == 0x368, "Size of UWarModeRankingItemWidgetBP_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
