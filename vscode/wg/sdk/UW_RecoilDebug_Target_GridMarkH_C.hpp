#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UW_RecoilDebug_Target_GridMarkH_C // Size: 0x264
	: public UUserWidget // Size: 0x248
{
private:
	typedef UW_RecoilDebug_Target_GridMarkH_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(90674); // id32("WidgetBlueprintGeneratedClass W_RecoilDebug_Target_GridMarkH.W_RecoilDebug_Target_GridMarkH_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty W_RecoilDebug_Target_GridMarkH.W_RecoilDebug_Target_GridMarkH_C.UberGraphFrame */
	ExternalPtr<struct UImage> Image_125; /* Ofs: 0x250 Size: 0x8 - ObjectProperty W_RecoilDebug_Target_GridMarkH.W_RecoilDebug_Target_GridMarkH_C.Image_125 */
	ExternalPtr<struct UTextBlock> T_MarkerLevel; /* Ofs: 0x258 Size: 0x8 - ObjectProperty W_RecoilDebug_Target_GridMarkH.W_RecoilDebug_Target_GridMarkH_C.T_MarkerLevel */
	float MarkerLevel; /* Ofs: 0x260 Size: 0x4 - FloatProperty W_RecoilDebug_Target_GridMarkH.W_RecoilDebug_Target_GridMarkH_C.MarkerLevel */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetImage_125(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x250, value); }
	inline bool SetT_MarkerLevel(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x258, value); }
	inline bool SetMarkerLevel(t_structHelper inst, float value) { inst.WriteOffset(0x260, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUW_RecoilDebug_Target_GridMarkH_C = sizeof(UW_RecoilDebug_Target_GridMarkH_C); // 612
    static_assert(sizeof(UW_RecoilDebug_Target_GridMarkH_C) == 0x264, "Size of UW_RecoilDebug_Target_GridMarkH_C is not correct.");
	auto constexpr UW_RecoilDebug_Target_GridMarkH_C_UberGraphFrame_Offset = offsetof(UW_RecoilDebug_Target_GridMarkH_C, UberGraphFrame);
	static_assert(UW_RecoilDebug_Target_GridMarkH_C_UberGraphFrame_Offset == 0x248, "UW_RecoilDebug_Target_GridMarkH_C::UberGraphFrame offset is not 248");
	auto constexpr UW_RecoilDebug_Target_GridMarkH_C_Image_125_Offset = offsetof(UW_RecoilDebug_Target_GridMarkH_C, Image_125);
	static_assert(UW_RecoilDebug_Target_GridMarkH_C_Image_125_Offset == 0x250, "UW_RecoilDebug_Target_GridMarkH_C::Image_125 offset is not 250");
	auto constexpr UW_RecoilDebug_Target_GridMarkH_C_T_MarkerLevel_Offset = offsetof(UW_RecoilDebug_Target_GridMarkH_C, T_MarkerLevel);
	static_assert(UW_RecoilDebug_Target_GridMarkH_C_T_MarkerLevel_Offset == 0x258, "UW_RecoilDebug_Target_GridMarkH_C::T_MarkerLevel offset is not 258");
	auto constexpr UW_RecoilDebug_Target_GridMarkH_C_MarkerLevel_Offset = offsetof(UW_RecoilDebug_Target_GridMarkH_C, MarkerLevel);
	static_assert(UW_RecoilDebug_Target_GridMarkH_C_MarkerLevel_Offset == 0x260, "UW_RecoilDebug_Target_GridMarkH_C::MarkerLevel offset is not 260");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
