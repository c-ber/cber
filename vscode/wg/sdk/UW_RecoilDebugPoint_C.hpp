#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UW_RecoilDebugPoint_C // Size: 0x268
	: public UUserWidget // Size: 0x248
{
private:
	typedef UW_RecoilDebugPoint_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(90808); // id32("WidgetBlueprintGeneratedClass W_RecoilDebugPoint.W_RecoilDebugPoint_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty W_RecoilDebugPoint.W_RecoilDebugPoint_C.UberGraphFrame */
	ExternalPtr<struct UImage> PointImg; /* Ofs: 0x250 Size: 0x8 - ObjectProperty W_RecoilDebugPoint.W_RecoilDebugPoint_C.PointImg */
	FLinearColor InitialColor; /* Ofs: 0x258 Size: 0x10 - StructProperty W_RecoilDebugPoint.W_RecoilDebugPoint_C.InitialColor */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetPointImg(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x250, value); }
	inline bool SetInitialColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x258, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUW_RecoilDebugPoint_C = sizeof(UW_RecoilDebugPoint_C); // 616
    static_assert(sizeof(UW_RecoilDebugPoint_C) == 0x268, "Size of UW_RecoilDebugPoint_C is not correct.");
	auto constexpr UW_RecoilDebugPoint_C_UberGraphFrame_Offset = offsetof(UW_RecoilDebugPoint_C, UberGraphFrame);
	static_assert(UW_RecoilDebugPoint_C_UberGraphFrame_Offset == 0x248, "UW_RecoilDebugPoint_C::UberGraphFrame offset is not 248");
	auto constexpr UW_RecoilDebugPoint_C_PointImg_Offset = offsetof(UW_RecoilDebugPoint_C, PointImg);
	static_assert(UW_RecoilDebugPoint_C_PointImg_Offset == 0x250, "UW_RecoilDebugPoint_C::PointImg offset is not 250");
	auto constexpr UW_RecoilDebugPoint_C_InitialColor_Offset = offsetof(UW_RecoilDebugPoint_C, InitialColor);
	static_assert(UW_RecoilDebugPoint_C_InitialColor_Offset == 0x258, "UW_RecoilDebugPoint_C::InitialColor offset is not 258");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
