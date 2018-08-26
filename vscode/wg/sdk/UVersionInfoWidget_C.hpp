#pragma once
#include "UVersionInfoBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVersionInfoWidget_C // Size: 0x358
	: public UVersionInfoBaseWidget // Size: 0x358
{
private:
	typedef UVersionInfoWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(193218); // id32("WidgetBlueprintGeneratedClass VersionInfoWidget.VersionInfoWidget_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVersionInfoWidget_C = sizeof(UVersionInfoWidget_C); // 856
    static_assert(sizeof(UVersionInfoWidget_C) == 0x358, "Size of UVersionInfoWidget_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
