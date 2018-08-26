#pragma once
#include "UPanelWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UContentWidget // Size: 0x148
	: public UPanelWidget // Size: 0x148
{
private:
	typedef UContentWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(480); // id32("Class UMG.ContentWidget")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUContentWidget = sizeof(UContentWidget); // 328
    static_assert(sizeof(UContentWidget) == 0x148, "Size of UContentWidget is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
