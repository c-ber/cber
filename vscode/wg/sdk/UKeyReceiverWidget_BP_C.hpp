#pragma once
#include "UTslKeyReceiverWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UKeyReceiverWidget_BP_C // Size: 0x3B0
	: public UTslKeyReceiverWidget // Size: 0x3A0
{
private:
	typedef UKeyReceiverWidget_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(168778); // id32("WidgetBlueprintGeneratedClass KeyReceiverWidget_BP.KeyReceiverWidget_BP_C")
		return ptr;
	}
	ExternalPtr<struct UBorder> Border_3; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty KeyReceiverWidget_BP.KeyReceiverWidget_BP_C.Border_3 */
	ExternalPtr<struct UTextBlock> TextBlock_4; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty KeyReceiverWidget_BP.KeyReceiverWidget_BP_C.TextBlock_4 */


	inline bool SetBorder_3(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetTextBlock_4(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x3A8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUKeyReceiverWidget_BP_C = sizeof(UKeyReceiverWidget_BP_C); // 944
    static_assert(sizeof(UKeyReceiverWidget_BP_C) == 0x3B0, "Size of UKeyReceiverWidget_BP_C is not correct.");
	auto constexpr UKeyReceiverWidget_BP_C_Border_3_Offset = offsetof(UKeyReceiverWidget_BP_C, Border_3);
	static_assert(UKeyReceiverWidget_BP_C_Border_3_Offset == 0x3a0, "UKeyReceiverWidget_BP_C::Border_3 offset is not 3a0");
	auto constexpr UKeyReceiverWidget_BP_C_TextBlock_4_Offset = offsetof(UKeyReceiverWidget_BP_C, TextBlock_4);
	static_assert(UKeyReceiverWidget_BP_C_TextBlock_4_Offset == 0x3a8, "UKeyReceiverWidget_BP_C::TextBlock_4 offset is not 3a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
