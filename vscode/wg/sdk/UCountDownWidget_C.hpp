#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCountDownWidget_C // Size: 0x260
	: public UUserWidget // Size: 0x248
{
private:
	typedef UCountDownWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(191305); // id32("WidgetBlueprintGeneratedClass CountDownWidget.CountDownWidget_C")
		return ptr;
	}
	ExternalPtr<struct UVerticalBox> CountDownBlock; /* Ofs: 0x248 Size: 0x8 - ObjectProperty CountDownWidget.CountDownWidget_C.CountDownBlock */
	ExternalPtr<struct UTextBlock> CountDownText; /* Ofs: 0x250 Size: 0x8 - ObjectProperty CountDownWidget.CountDownWidget_C.CountDownText */
	ExternalPtr<struct UTslGameState> TslGameState; /* Ofs: 0x258 Size: 0x8 - ObjectProperty CountDownWidget.CountDownWidget_C.TslGameState */


	inline bool SetCountDownBlock(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x248, value); }
	inline bool SetCountDownText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x250, value); }
	inline bool SetTslGameState(t_structHelper inst, ExternalPtr<struct UTslGameState> value) { inst.WriteOffset(0x258, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCountDownWidget_C = sizeof(UCountDownWidget_C); // 608
    static_assert(sizeof(UCountDownWidget_C) == 0x260, "Size of UCountDownWidget_C is not correct.");
	auto constexpr UCountDownWidget_C_CountDownBlock_Offset = offsetof(UCountDownWidget_C, CountDownBlock);
	static_assert(UCountDownWidget_C_CountDownBlock_Offset == 0x248, "UCountDownWidget_C::CountDownBlock offset is not 248");
	auto constexpr UCountDownWidget_C_CountDownText_Offset = offsetof(UCountDownWidget_C, CountDownText);
	static_assert(UCountDownWidget_C_CountDownText_Offset == 0x250, "UCountDownWidget_C::CountDownText offset is not 250");
	auto constexpr UCountDownWidget_C_TslGameState_Offset = offsetof(UCountDownWidget_C, TslGameState);
	static_assert(UCountDownWidget_C_TslGameState_Offset == 0x258, "UCountDownWidget_C::TslGameState offset is not 258");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
