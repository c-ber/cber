#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UListBaseGroupWidget_C // Size: 0x250
	: public UUserWidget // Size: 0x248
{
private:
	typedef UListBaseGroupWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(59794); // id32("WidgetBlueprintGeneratedClass ListBaseGroupWidget.ListBaseGroupWidget_C")
		return ptr;
	}
	ExternalPtr<struct UVerticalBox> List; /* Ofs: 0x248 Size: 0x8 - ObjectProperty ListBaseGroupWidget.ListBaseGroupWidget_C.List */


	inline bool SetList(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x248, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUListBaseGroupWidget_C = sizeof(UListBaseGroupWidget_C); // 592
    static_assert(sizeof(UListBaseGroupWidget_C) == 0x250, "Size of UListBaseGroupWidget_C is not correct.");
	auto constexpr UListBaseGroupWidget_C_List_Offset = offsetof(UListBaseGroupWidget_C, List);
	static_assert(UListBaseGroupWidget_C_List_Offset == 0x248, "UListBaseGroupWidget_C::List offset is not 248");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
