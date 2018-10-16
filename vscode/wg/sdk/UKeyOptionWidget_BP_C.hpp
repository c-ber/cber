#pragma once
#include "UTslKeyOptionWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UKeyOptionWidget_BP_C // Size: 0x448
	: public UTslKeyOptionWidget // Size: 0x440
{
private:
	typedef UKeyOptionWidget_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169922); // id32("WidgetBlueprintGeneratedClass KeyOptionWidget_BP.KeyOptionWidget_BP_C")
		return ptr;
	}
	ExternalPtr<struct UScrollBox> List; /* Ofs: 0x440 Size: 0x8 - ObjectProperty KeyOptionWidget_BP.KeyOptionWidget_BP_C.List */


	inline bool SetList(t_structHelper inst, ExternalPtr<struct UScrollBox> value) { inst.WriteOffset(0x440, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUKeyOptionWidget_BP_C = sizeof(UKeyOptionWidget_BP_C); // 1096
    static_assert(sizeof(UKeyOptionWidget_BP_C) == 0x448, "Size of UKeyOptionWidget_BP_C is not correct.");
	auto constexpr UKeyOptionWidget_BP_C_List_Offset = offsetof(UKeyOptionWidget_BP_C, List);
	static_assert(UKeyOptionWidget_BP_C_List_Offset == 0x440, "UKeyOptionWidget_BP_C::List offset is not 440");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
