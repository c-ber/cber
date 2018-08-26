#pragma once
#include "UCharacterStanceBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_CharacterStanceWidget_C // Size: 0x338
	: public UCharacterStanceBaseWidget // Size: 0x338
{
private:
	typedef UBP_CharacterStanceWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(68847); // id32("WidgetBlueprintGeneratedClass BP_CharacterStanceWidget.BP_CharacterStanceWidget_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_CharacterStanceWidget_C = sizeof(UBP_CharacterStanceWidget_C); // 824
    static_assert(sizeof(UBP_CharacterStanceWidget_C) == 0x338, "Size of UBP_CharacterStanceWidget_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
