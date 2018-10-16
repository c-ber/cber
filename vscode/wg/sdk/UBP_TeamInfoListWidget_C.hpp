#pragma once
#include "UTslTeamInfoListWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_TeamInfoListWidget_C // Size: 0x348
	: public UTslTeamInfoListWidget // Size: 0x340
{
private:
	typedef UBP_TeamInfoListWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(187794); // id32("WidgetBlueprintGeneratedClass BP_TeamInfoListWidget.BP_TeamInfoListWidget_C")
		return ptr;
	}
	ExternalPtr<struct UVerticalBox> TeamList; /* Ofs: 0x340 Size: 0x8 - ObjectProperty BP_TeamInfoListWidget.BP_TeamInfoListWidget_C.TeamList */


	inline bool SetTeamList(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x340, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_TeamInfoListWidget_C = sizeof(UBP_TeamInfoListWidget_C); // 840
    static_assert(sizeof(UBP_TeamInfoListWidget_C) == 0x348, "Size of UBP_TeamInfoListWidget_C is not correct.");
	auto constexpr UBP_TeamInfoListWidget_C_TeamList_Offset = offsetof(UBP_TeamInfoListWidget_C, TeamList);
	static_assert(UBP_TeamInfoListWidget_C_TeamList_Offset == 0x340, "UBP_TeamInfoListWidget_C::TeamList offset is not 340");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
