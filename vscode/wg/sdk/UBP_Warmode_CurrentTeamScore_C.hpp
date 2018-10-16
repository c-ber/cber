#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Warmode_CurrentTeamScore_C // Size: 0x258
	: public UUserWidget // Size: 0x248
{
private:
	typedef UBP_Warmode_CurrentTeamScore_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(193462); // id32("WidgetBlueprintGeneratedClass BP_Warmode_CurrentTeamScore.BP_Warmode_CurrentTeamScore_C")
		return ptr;
	}
	ExternalPtr<struct UTextBlock> GoalScoreText; /* Ofs: 0x248 Size: 0x8 - ObjectProperty BP_Warmode_CurrentTeamScore.BP_Warmode_CurrentTeamScore_C.GoalScoreText */
	ExternalPtr<struct UTextBlock> MyTeamScoreText; /* Ofs: 0x250 Size: 0x8 - ObjectProperty BP_Warmode_CurrentTeamScore.BP_Warmode_CurrentTeamScore_C.MyTeamScoreText */


	inline bool SetGoalScoreText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x248, value); }
	inline bool SetMyTeamScoreText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x250, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Warmode_CurrentTeamScore_C = sizeof(UBP_Warmode_CurrentTeamScore_C); // 600
    static_assert(sizeof(UBP_Warmode_CurrentTeamScore_C) == 0x258, "Size of UBP_Warmode_CurrentTeamScore_C is not correct.");
	auto constexpr UBP_Warmode_CurrentTeamScore_C_GoalScoreText_Offset = offsetof(UBP_Warmode_CurrentTeamScore_C, GoalScoreText);
	static_assert(UBP_Warmode_CurrentTeamScore_C_GoalScoreText_Offset == 0x248, "UBP_Warmode_CurrentTeamScore_C::GoalScoreText offset is not 248");
	auto constexpr UBP_Warmode_CurrentTeamScore_C_MyTeamScoreText_Offset = offsetof(UBP_Warmode_CurrentTeamScore_C, MyTeamScoreText);
	static_assert(UBP_Warmode_CurrentTeamScore_C_MyTeamScoreText_Offset == 0x250, "UBP_Warmode_CurrentTeamScore_C::MyTeamScoreText offset is not 250");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
