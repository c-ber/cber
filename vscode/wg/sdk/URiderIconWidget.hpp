#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Image.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URiderIconWidget // Size: 0x328
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef URiderIconWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1544); // id32("Class TslGame.RiderIconWidget")
		return ptr;
	}
	FUmgWidgetBinder_Image RiderIcon; /* Ofs: 0x300 Size: 0x28 - StructProperty TslGame.RiderIconWidget.RiderIcon */


	inline bool SetRiderIcon(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x300, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURiderIconWidget = sizeof(URiderIconWidget); // 808
    static_assert(sizeof(URiderIconWidget) == 0x328, "Size of URiderIconWidget is not correct.");
	auto constexpr URiderIconWidget_RiderIcon_Offset = offsetof(URiderIconWidget, RiderIcon);
	static_assert(URiderIconWidget_RiderIcon_Offset == 0x300, "URiderIconWidget::RiderIcon offset is not 300");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
