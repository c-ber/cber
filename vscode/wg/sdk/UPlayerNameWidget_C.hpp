#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlayerNameWidget_C // Size: 0x250
	: public UUserWidget // Size: 0x248
{
private:
	typedef UPlayerNameWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(62212); // id32("WidgetBlueprintGeneratedClass PlayerNameWidget.PlayerNameWidget_C")
		return ptr;
	}
	ExternalPtr<struct UTextBlock> TextBlock_1; /* Ofs: 0x248 Size: 0x8 - ObjectProperty PlayerNameWidget.PlayerNameWidget_C.TextBlock_1 */


	inline bool SetTextBlock_1(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x248, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlayerNameWidget_C = sizeof(UPlayerNameWidget_C); // 592
    static_assert(sizeof(UPlayerNameWidget_C) == 0x250, "Size of UPlayerNameWidget_C is not correct.");
	auto constexpr UPlayerNameWidget_C_TextBlock_1_Offset = offsetof(UPlayerNameWidget_C, TextBlock_1);
	static_assert(UPlayerNameWidget_C_TextBlock_1_Offset == 0x248, "UPlayerNameWidget_C::TextBlock_1 offset is not 248");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
