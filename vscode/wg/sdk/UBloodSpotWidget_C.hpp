#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBloodSpotWidget_C // Size: 0x270
	: public UUserWidget // Size: 0x248
{
private:
	typedef UBloodSpotWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(68299); // id32("WidgetBlueprintGeneratedClass BloodSpotWidget.BloodSpotWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty BloodSpotWidget.BloodSpotWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> FadeOut; /* Ofs: 0x250 Size: 0x8 - ObjectProperty BloodSpotWidget.BloodSpotWidget_C.FadeOut */
	ExternalPtr<struct UImage> BloodSpotImage; /* Ofs: 0x258 Size: 0x8 - ObjectProperty BloodSpotWidget.BloodSpotWidget_C.BloodSpotImage */
	TArray<ExternalPtr<struct UTexture2D>> BloodSpotTextures; /* Ofs: 0x260 Size: 0x10 - ArrayProperty BloodSpotWidget.BloodSpotWidget_C.BloodSpotTextures */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetFadeOut(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetBloodSpotImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x258, value); }
	inline bool SetBloodSpotTextures(t_structHelper inst, TArray<ExternalPtr<struct UTexture2D>> value) { inst.WriteOffset(0x260, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBloodSpotWidget_C = sizeof(UBloodSpotWidget_C); // 624
    static_assert(sizeof(UBloodSpotWidget_C) == 0x270, "Size of UBloodSpotWidget_C is not correct.");
	auto constexpr UBloodSpotWidget_C_UberGraphFrame_Offset = offsetof(UBloodSpotWidget_C, UberGraphFrame);
	static_assert(UBloodSpotWidget_C_UberGraphFrame_Offset == 0x248, "UBloodSpotWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UBloodSpotWidget_C_FadeOut_Offset = offsetof(UBloodSpotWidget_C, FadeOut);
	static_assert(UBloodSpotWidget_C_FadeOut_Offset == 0x250, "UBloodSpotWidget_C::FadeOut offset is not 250");
	auto constexpr UBloodSpotWidget_C_BloodSpotImage_Offset = offsetof(UBloodSpotWidget_C, BloodSpotImage);
	static_assert(UBloodSpotWidget_C_BloodSpotImage_Offset == 0x258, "UBloodSpotWidget_C::BloodSpotImage offset is not 258");
	auto constexpr UBloodSpotWidget_C_BloodSpotTextures_Offset = offsetof(UBloodSpotWidget_C, BloodSpotTextures);
	static_assert(UBloodSpotWidget_C_BloodSpotTextures_Offset == 0x260, "UBloodSpotWidget_C::BloodSpotTextures offset is not 260");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
