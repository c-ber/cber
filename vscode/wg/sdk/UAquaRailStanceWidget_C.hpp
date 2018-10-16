#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAquaRailStanceWidget_C // Size: 0x250
	: public UUserWidget // Size: 0x248
{
private:
	typedef UAquaRailStanceWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(116028); // id32("WidgetBlueprintGeneratedClass AquaRailStanceWidget.AquaRailStanceWidget_C")
		return ptr;
	}
	ExternalPtr<struct UImage> AquaImage; /* Ofs: 0x248 Size: 0x8 - ObjectProperty AquaRailStanceWidget.AquaRailStanceWidget_C.AquaImage */


	inline bool SetAquaImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x248, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAquaRailStanceWidget_C = sizeof(UAquaRailStanceWidget_C); // 592
    static_assert(sizeof(UAquaRailStanceWidget_C) == 0x250, "Size of UAquaRailStanceWidget_C is not correct.");
	auto constexpr UAquaRailStanceWidget_C_AquaImage_Offset = offsetof(UAquaRailStanceWidget_C, AquaImage);
	static_assert(UAquaRailStanceWidget_C_AquaImage_Offset == 0x248, "UAquaRailStanceWidget_C::AquaImage offset is not 248");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
