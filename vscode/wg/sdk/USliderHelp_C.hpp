#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USliderHelp_C // Size: 0x258
	: public UUserWidget // Size: 0x248
{
private:
	typedef USliderHelp_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(168921); // id32("WidgetBlueprintGeneratedClass SliderHelp.SliderHelp_C")
		return ptr;
	}
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x248 Size: 0x8 - ObjectProperty SliderHelp.SliderHelp_C.Image_1 */
	ExternalPtr<struct UImage> Image_2; /* Ofs: 0x250 Size: 0x8 - ObjectProperty SliderHelp.SliderHelp_C.Image_2 */


	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x248, value); }
	inline bool SetImage_2(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x250, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSliderHelp_C = sizeof(USliderHelp_C); // 600
    static_assert(sizeof(USliderHelp_C) == 0x258, "Size of USliderHelp_C is not correct.");
	auto constexpr USliderHelp_C_Image_1_Offset = offsetof(USliderHelp_C, Image_1);
	static_assert(USliderHelp_C_Image_1_Offset == 0x248, "USliderHelp_C::Image_1 offset is not 248");
	auto constexpr USliderHelp_C_Image_2_Offset = offsetof(USliderHelp_C, Image_2);
	static_assert(USliderHelp_C_Image_2_Offset == 0x250, "USliderHelp_C::Image_2 offset is not 250");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
