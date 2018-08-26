#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBattleListSubTitle_C // Size: 0x268
	: public UUserWidget // Size: 0x248
{
private:
	typedef UBattleListSubTitle_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(187174); // id32("WidgetBlueprintGeneratedClass BattleListSubTitle.BattleListSubTitle_C")
		return ptr;
	}
	ExternalPtr<struct UTextBlock> TextSubTitle; /* Ofs: 0x248 Size: 0x8 - ObjectProperty BattleListSubTitle.BattleListSubTitle_C.TextSubTitle */
	FText SubTitle; /* Ofs: 0x250 Size: 0x18 - TextProperty BattleListSubTitle.BattleListSubTitle_C.SubTitle */


	inline bool SetTextSubTitle(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x248, value); }
	inline bool SetSubTitle(t_structHelper inst, FText value) { inst.WriteOffset(0x250, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBattleListSubTitle_C = sizeof(UBattleListSubTitle_C); // 616
    static_assert(sizeof(UBattleListSubTitle_C) == 0x268, "Size of UBattleListSubTitle_C is not correct.");
	auto constexpr UBattleListSubTitle_C_TextSubTitle_Offset = offsetof(UBattleListSubTitle_C, TextSubTitle);
	static_assert(UBattleListSubTitle_C_TextSubTitle_Offset == 0x248, "UBattleListSubTitle_C::TextSubTitle offset is not 248");
	auto constexpr UBattleListSubTitle_C_SubTitle_Offset = offsetof(UBattleListSubTitle_C, SubTitle);
	static_assert(UBattleListSubTitle_C_SubTitle_Offset == 0x250, "UBattleListSubTitle_C::SubTitle offset is not 250");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
