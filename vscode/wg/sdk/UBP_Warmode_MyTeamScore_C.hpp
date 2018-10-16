#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Warmode_MyTeamScore_C // Size: 0x250
	: public UUserWidget // Size: 0x248
{
private:
	typedef UBP_Warmode_MyTeamScore_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(193349); // id32("WidgetBlueprintGeneratedClass BP_Warmode_MyTeamScore.BP_Warmode_MyTeamScore_C")
		return ptr;
	}
	ExternalPtr<struct UTextBlock> MyTeamScoreText; /* Ofs: 0x248 Size: 0x8 - ObjectProperty BP_Warmode_MyTeamScore.BP_Warmode_MyTeamScore_C.MyTeamScoreText */


	inline bool SetMyTeamScoreText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x248, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Warmode_MyTeamScore_C = sizeof(UBP_Warmode_MyTeamScore_C); // 592
    static_assert(sizeof(UBP_Warmode_MyTeamScore_C) == 0x250, "Size of UBP_Warmode_MyTeamScore_C is not correct.");
	auto constexpr UBP_Warmode_MyTeamScore_C_MyTeamScoreText_Offset = offsetof(UBP_Warmode_MyTeamScore_C, MyTeamScoreText);
	static_assert(UBP_Warmode_MyTeamScore_C_MyTeamScoreText_Offset == 0x248, "UBP_Warmode_MyTeamScore_C::MyTeamScoreText offset is not 248");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
