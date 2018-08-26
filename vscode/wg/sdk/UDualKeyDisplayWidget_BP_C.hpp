#pragma once
#include "UTslKeyDisplayWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDualKeyDisplayWidget_BP_C // Size: 0x448
	: public UTslKeyDisplayWidget // Size: 0x430
{
private:
	typedef UDualKeyDisplayWidget_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(168842); // id32("WidgetBlueprintGeneratedClass DualKeyDisplayWidget_BP.DualKeyDisplayWidget_BP_C")
		return ptr;
	}
	ExternalPtr<struct UKeyReceiverWidget_BP_C> KeyReceiverWidget0; /* Ofs: 0x430 Size: 0x8 - ObjectProperty DualKeyDisplayWidget_BP.DualKeyDisplayWidget_BP_C.KeyReceiverWidget0 */
	ExternalPtr<struct UKeyReceiverWidget_BP_C> KeyReceiverWidget1; /* Ofs: 0x438 Size: 0x8 - ObjectProperty DualKeyDisplayWidget_BP.DualKeyDisplayWidget_BP_C.KeyReceiverWidget1 */
	ExternalPtr<struct UTextBlock> TextBlock_1; /* Ofs: 0x440 Size: 0x8 - ObjectProperty DualKeyDisplayWidget_BP.DualKeyDisplayWidget_BP_C.TextBlock_1 */


	inline bool SetKeyReceiverWidget0(t_structHelper inst, ExternalPtr<struct UKeyReceiverWidget_BP_C> value) { inst.WriteOffset(0x430, value); }
	inline bool SetKeyReceiverWidget1(t_structHelper inst, ExternalPtr<struct UKeyReceiverWidget_BP_C> value) { inst.WriteOffset(0x438, value); }
	inline bool SetTextBlock_1(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x440, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDualKeyDisplayWidget_BP_C = sizeof(UDualKeyDisplayWidget_BP_C); // 1096
    static_assert(sizeof(UDualKeyDisplayWidget_BP_C) == 0x448, "Size of UDualKeyDisplayWidget_BP_C is not correct.");
	auto constexpr UDualKeyDisplayWidget_BP_C_KeyReceiverWidget0_Offset = offsetof(UDualKeyDisplayWidget_BP_C, KeyReceiverWidget0);
	static_assert(UDualKeyDisplayWidget_BP_C_KeyReceiverWidget0_Offset == 0x430, "UDualKeyDisplayWidget_BP_C::KeyReceiverWidget0 offset is not 430");
	auto constexpr UDualKeyDisplayWidget_BP_C_KeyReceiverWidget1_Offset = offsetof(UDualKeyDisplayWidget_BP_C, KeyReceiverWidget1);
	static_assert(UDualKeyDisplayWidget_BP_C_KeyReceiverWidget1_Offset == 0x438, "UDualKeyDisplayWidget_BP_C::KeyReceiverWidget1 offset is not 438");
	auto constexpr UDualKeyDisplayWidget_BP_C_TextBlock_1_Offset = offsetof(UDualKeyDisplayWidget_BP_C, TextBlock_1);
	static_assert(UDualKeyDisplayWidget_BP_C_TextBlock_1_Offset == 0x440, "UDualKeyDisplayWidget_BP_C::TextBlock_1 offset is not 440");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
