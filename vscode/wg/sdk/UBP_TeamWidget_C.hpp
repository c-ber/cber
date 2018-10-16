#pragma once
#include "UTslTeamWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_TeamWidget_C // Size: 0x338
	: public UTslTeamWidget // Size: 0x338
{
private:
	typedef UBP_TeamWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(187709); // id32("WidgetBlueprintGeneratedClass BP_TeamWidget.BP_TeamWidget_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_TeamWidget_C = sizeof(UBP_TeamWidget_C); // 824
    static_assert(sizeof(UBP_TeamWidget_C) == 0x338, "Size of UBP_TeamWidget_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
