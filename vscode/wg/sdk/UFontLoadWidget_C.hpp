#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFontLoadWidget_C // Size: 0x25C
	: public UUserWidget // Size: 0x248
{
private:
	typedef UFontLoadWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(194690); // id32("WidgetBlueprintGeneratedClass FontLoadWidget.FontLoadWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty FontLoadWidget.FontLoadWidget_C.UberGraphFrame */
	ExternalPtr<struct UTextBlock> Loading; /* Ofs: 0x250 Size: 0x8 - ObjectProperty FontLoadWidget.FontLoadWidget_C.Loading */
	int32_t Count; /* Ofs: 0x258 Size: 0x4 - IntProperty FontLoadWidget.FontLoadWidget_C.Count */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetLoading(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x250, value); }
	inline bool SetCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x258, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFontLoadWidget_C = sizeof(UFontLoadWidget_C); // 604
    static_assert(sizeof(UFontLoadWidget_C) == 0x25C, "Size of UFontLoadWidget_C is not correct.");
	auto constexpr UFontLoadWidget_C_UberGraphFrame_Offset = offsetof(UFontLoadWidget_C, UberGraphFrame);
	static_assert(UFontLoadWidget_C_UberGraphFrame_Offset == 0x248, "UFontLoadWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UFontLoadWidget_C_Loading_Offset = offsetof(UFontLoadWidget_C, Loading);
	static_assert(UFontLoadWidget_C_Loading_Offset == 0x250, "UFontLoadWidget_C::Loading offset is not 250");
	auto constexpr UFontLoadWidget_C_Count_Offset = offsetof(UFontLoadWidget_C, Count);
	static_assert(UFontLoadWidget_C_Count_Offset == 0x258, "UFontLoadWidget_C::Count offset is not 258");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
