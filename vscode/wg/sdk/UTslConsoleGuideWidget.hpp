#pragma once
#include "UUmgBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslConsoleGuideWidget // Size: 0x300
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslConsoleGuideWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1565); // id32("Class TslGame.TslConsoleGuideWidget")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslConsoleGuideWidget = sizeof(UTslConsoleGuideWidget); // 768
    static_assert(sizeof(UTslConsoleGuideWidget) == 0x300, "Size of UTslConsoleGuideWidget is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
