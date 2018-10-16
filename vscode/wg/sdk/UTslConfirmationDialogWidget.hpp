#pragma once
#include "UUmgBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslConfirmationDialogWidget // Size: 0x3E0
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslConfirmationDialogWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1564); // id32("Class TslGame.TslConfirmationDialogWidget")
		return ptr;
	}
	uint8_t UnknownData300[0xE0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslConfirmationDialogWidget = sizeof(UTslConfirmationDialogWidget); // 992
    static_assert(sizeof(UTslConfirmationDialogWidget) == 0x3E0, "Size of UTslConfirmationDialogWidget is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
