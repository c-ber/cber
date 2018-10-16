#pragma once
#include "UMapCarePackageItemIconBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_MapCarePackageItemIconWidget_C // Size: 0x380
	: public UMapCarePackageItemIconBaseWidget // Size: 0x370
{
private:
	typedef UBP_MapCarePackageItemIconWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(67722); // id32("WidgetBlueprintGeneratedClass BP_MapCarePackageItemIconWidget.BP_MapCarePackageItemIconWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> Hitted; /* Ofs: 0x370 Size: 0x8 - ObjectProperty BP_MapCarePackageItemIconWidget.BP_MapCarePackageItemIconWidget_C.Hitted */
	ExternalPtr<struct UWidgetAnimation> Attacked; /* Ofs: 0x378 Size: 0x8 - ObjectProperty BP_MapCarePackageItemIconWidget.BP_MapCarePackageItemIconWidget_C.Attacked */


	inline bool SetHitted(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x370, value); }
	inline bool SetAttacked(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x378, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_MapCarePackageItemIconWidget_C = sizeof(UBP_MapCarePackageItemIconWidget_C); // 896
    static_assert(sizeof(UBP_MapCarePackageItemIconWidget_C) == 0x380, "Size of UBP_MapCarePackageItemIconWidget_C is not correct.");
	auto constexpr UBP_MapCarePackageItemIconWidget_C_Hitted_Offset = offsetof(UBP_MapCarePackageItemIconWidget_C, Hitted);
	static_assert(UBP_MapCarePackageItemIconWidget_C_Hitted_Offset == 0x370, "UBP_MapCarePackageItemIconWidget_C::Hitted offset is not 370");
	auto constexpr UBP_MapCarePackageItemIconWidget_C_Attacked_Offset = offsetof(UBP_MapCarePackageItemIconWidget_C, Attacked);
	static_assert(UBP_MapCarePackageItemIconWidget_C_Attacked_Offset == 0x378, "UBP_MapCarePackageItemIconWidget_C::Attacked offset is not 378");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
