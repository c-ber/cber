#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInGameWeb_C // Size: 0x250
	: public UUserWidget // Size: 0x248
{
private:
	typedef UInGameWeb_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(176826); // id32("WidgetBlueprintGeneratedClass InGameWeb.InGameWeb_C")
		return ptr;
	}
	ExternalPtr<struct UTslCoherentWidget> TslCoherentWidget_66; /* Ofs: 0x248 Size: 0x8 - ObjectProperty InGameWeb.InGameWeb_C.TslCoherentWidget_66 */


	inline bool SetTslCoherentWidget_66(t_structHelper inst, ExternalPtr<struct UTslCoherentWidget> value) { inst.WriteOffset(0x248, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInGameWeb_C = sizeof(UInGameWeb_C); // 592
    static_assert(sizeof(UInGameWeb_C) == 0x250, "Size of UInGameWeb_C is not correct.");
	auto constexpr UInGameWeb_C_TslCoherentWidget_66_Offset = offsetof(UInGameWeb_C, TslCoherentWidget_66);
	static_assert(UInGameWeb_C_TslCoherentWidget_66_Offset == 0x248, "UInGameWeb_C::TslCoherentWidget_66 offset is not 248");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
