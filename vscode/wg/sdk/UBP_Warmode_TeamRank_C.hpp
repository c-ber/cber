#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Warmode_TeamRank_C // Size: 0x258
	: public UUserWidget // Size: 0x248
{
private:
	typedef UBP_Warmode_TeamRank_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(193304); // id32("WidgetBlueprintGeneratedClass BP_Warmode_TeamRank.BP_Warmode_TeamRank_C")
		return ptr;
	}
	ExternalPtr<struct UTextBlock> MyTeamRankText; /* Ofs: 0x248 Size: 0x8 - ObjectProperty BP_Warmode_TeamRank.BP_Warmode_TeamRank_C.MyTeamRankText */
	ExternalPtr<struct UTextBlock> TeamCountText; /* Ofs: 0x250 Size: 0x8 - ObjectProperty BP_Warmode_TeamRank.BP_Warmode_TeamRank_C.TeamCountText */


	inline bool SetMyTeamRankText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x248, value); }
	inline bool SetTeamCountText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x250, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Warmode_TeamRank_C = sizeof(UBP_Warmode_TeamRank_C); // 600
    static_assert(sizeof(UBP_Warmode_TeamRank_C) == 0x258, "Size of UBP_Warmode_TeamRank_C is not correct.");
	auto constexpr UBP_Warmode_TeamRank_C_MyTeamRankText_Offset = offsetof(UBP_Warmode_TeamRank_C, MyTeamRankText);
	static_assert(UBP_Warmode_TeamRank_C_MyTeamRankText_Offset == 0x248, "UBP_Warmode_TeamRank_C::MyTeamRankText offset is not 248");
	auto constexpr UBP_Warmode_TeamRank_C_TeamCountText_Offset = offsetof(UBP_Warmode_TeamRank_C, TeamCountText);
	static_assert(UBP_Warmode_TeamRank_C_TeamCountText_Offset == 0x250, "UBP_Warmode_TeamRank_C::TeamCountText offset is not 250");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
