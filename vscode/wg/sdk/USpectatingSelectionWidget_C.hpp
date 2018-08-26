#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USpectatingSelectionWidget_C // Size: 0x268
	: public UUserWidget // Size: 0x248
{
private:
	typedef USpectatingSelectionWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(195520); // id32("WidgetBlueprintGeneratedClass SpectatingSelectionWidget.SpectatingSelectionWidget_C")
		return ptr;
	}
	ExternalPtr<struct UBorder> Border_1; /* Ofs: 0x248 Size: 0x8 - ObjectProperty SpectatingSelectionWidget.SpectatingSelectionWidget_C.Border_1 */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x250 Size: 0x8 - ObjectProperty SpectatingSelectionWidget.SpectatingSelectionWidget_C.Image_1 */
	ExternalPtr<struct UImage> Image_2; /* Ofs: 0x258 Size: 0x8 - ObjectProperty SpectatingSelectionWidget.SpectatingSelectionWidget_C.Image_2 */
	ExternalPtr<struct UTextBlock> SelectionTextName; /* Ofs: 0x260 Size: 0x8 - ObjectProperty SpectatingSelectionWidget.SpectatingSelectionWidget_C.SelectionTextName */


	inline bool SetBorder_1(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x248, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x250, value); }
	inline bool SetImage_2(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x258, value); }
	inline bool SetSelectionTextName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x260, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSpectatingSelectionWidget_C = sizeof(USpectatingSelectionWidget_C); // 616
    static_assert(sizeof(USpectatingSelectionWidget_C) == 0x268, "Size of USpectatingSelectionWidget_C is not correct.");
	auto constexpr USpectatingSelectionWidget_C_Border_1_Offset = offsetof(USpectatingSelectionWidget_C, Border_1);
	static_assert(USpectatingSelectionWidget_C_Border_1_Offset == 0x248, "USpectatingSelectionWidget_C::Border_1 offset is not 248");
	auto constexpr USpectatingSelectionWidget_C_Image_1_Offset = offsetof(USpectatingSelectionWidget_C, Image_1);
	static_assert(USpectatingSelectionWidget_C_Image_1_Offset == 0x250, "USpectatingSelectionWidget_C::Image_1 offset is not 250");
	auto constexpr USpectatingSelectionWidget_C_Image_2_Offset = offsetof(USpectatingSelectionWidget_C, Image_2);
	static_assert(USpectatingSelectionWidget_C_Image_2_Offset == 0x258, "USpectatingSelectionWidget_C::Image_2 offset is not 258");
	auto constexpr USpectatingSelectionWidget_C_SelectionTextName_Offset = offsetof(USpectatingSelectionWidget_C, SelectionTextName);
	static_assert(USpectatingSelectionWidget_C_SelectionTextName_Offset == 0x260, "USpectatingSelectionWidget_C::SelectionTextName offset is not 260");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
