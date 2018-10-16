#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBoatStanceWidget_C // Size: 0x250
	: public UUserWidget // Size: 0x248
{
private:
	typedef UBoatStanceWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(115708); // id32("WidgetBlueprintGeneratedClass BoatStanceWidget.BoatStanceWidget_C")
		return ptr;
	}
	ExternalPtr<struct UImage> BoatImage; /* Ofs: 0x248 Size: 0x8 - ObjectProperty BoatStanceWidget.BoatStanceWidget_C.BoatImage */


	inline bool SetBoatImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x248, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBoatStanceWidget_C = sizeof(UBoatStanceWidget_C); // 592
    static_assert(sizeof(UBoatStanceWidget_C) == 0x250, "Size of UBoatStanceWidget_C is not correct.");
	auto constexpr UBoatStanceWidget_C_BoatImage_Offset = offsetof(UBoatStanceWidget_C, BoatImage);
	static_assert(UBoatStanceWidget_C_BoatImage_Offset == 0x248, "UBoatStanceWidget_C::BoatImage offset is not 248");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
