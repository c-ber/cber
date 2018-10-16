#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCheckBoxHelp_C // Size: 0x260
	: public UUserWidget // Size: 0x248
{
private:
	typedef UCheckBoxHelp_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(168876); // id32("WidgetBlueprintGeneratedClass CheckBoxHelp.CheckBoxHelp_C")
		return ptr;
	}
	ExternalPtr<struct UImage> Image_12; /* Ofs: 0x248 Size: 0x8 - ObjectProperty CheckBoxHelp.CheckBoxHelp_C.Image_12 */
	ExternalPtr<struct UImage> Image_13; /* Ofs: 0x250 Size: 0x8 - ObjectProperty CheckBoxHelp.CheckBoxHelp_C.Image_13 */
	ExternalPtr<struct UImage> Image_16; /* Ofs: 0x258 Size: 0x8 - ObjectProperty CheckBoxHelp.CheckBoxHelp_C.Image_16 */


	inline bool SetImage_12(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x248, value); }
	inline bool SetImage_13(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x250, value); }
	inline bool SetImage_16(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x258, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCheckBoxHelp_C = sizeof(UCheckBoxHelp_C); // 608
    static_assert(sizeof(UCheckBoxHelp_C) == 0x260, "Size of UCheckBoxHelp_C is not correct.");
	auto constexpr UCheckBoxHelp_C_Image_12_Offset = offsetof(UCheckBoxHelp_C, Image_12);
	static_assert(UCheckBoxHelp_C_Image_12_Offset == 0x248, "UCheckBoxHelp_C::Image_12 offset is not 248");
	auto constexpr UCheckBoxHelp_C_Image_13_Offset = offsetof(UCheckBoxHelp_C, Image_13);
	static_assert(UCheckBoxHelp_C_Image_13_Offset == 0x250, "UCheckBoxHelp_C::Image_13 offset is not 250");
	auto constexpr UCheckBoxHelp_C_Image_16_Offset = offsetof(UCheckBoxHelp_C, Image_16);
	static_assert(UCheckBoxHelp_C_Image_16_Offset == 0x258, "UCheckBoxHelp_C::Image_16 offset is not 258");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
