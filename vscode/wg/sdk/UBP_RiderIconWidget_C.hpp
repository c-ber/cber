#pragma once
#include "URiderIconWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_RiderIconWidget_C // Size: 0x328
	: public URiderIconWidget // Size: 0x328
{
private:
	typedef UBP_RiderIconWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(64481); // id32("WidgetBlueprintGeneratedClass BP_RiderIconWidget.BP_RiderIconWidget_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_RiderIconWidget_C = sizeof(UBP_RiderIconWidget_C); // 808
    static_assert(sizeof(UBP_RiderIconWidget_C) == 0x328, "Size of UBP_RiderIconWidget_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
