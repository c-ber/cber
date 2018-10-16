#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UW_RecoilDebugBox_C // Size: 0x270
	: public UUserWidget // Size: 0x248
{
private:
	typedef UW_RecoilDebugBox_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(90797); // id32("WidgetBlueprintGeneratedClass W_RecoilDebugBox.W_RecoilDebugBox_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty W_RecoilDebugBox.W_RecoilDebugBox_C.UberGraphFrame */
	ExternalPtr<struct UImage> BoxImg; /* Ofs: 0x250 Size: 0x8 - ObjectProperty W_RecoilDebugBox.W_RecoilDebugBox_C.BoxImg */
	FLinearColor InitialColor; /* Ofs: 0x258 Size: 0x10 - StructProperty W_RecoilDebugBox.W_RecoilDebugBox_C.InitialColor */
	FVector2D InitialSize; /* Ofs: 0x268 Size: 0x8 - StructProperty W_RecoilDebugBox.W_RecoilDebugBox_C.InitialSize */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetBoxImg(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x250, value); }
	inline bool SetInitialColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x258, value); }
	inline bool SetInitialSize(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x268, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUW_RecoilDebugBox_C = sizeof(UW_RecoilDebugBox_C); // 624
    static_assert(sizeof(UW_RecoilDebugBox_C) == 0x270, "Size of UW_RecoilDebugBox_C is not correct.");
	auto constexpr UW_RecoilDebugBox_C_UberGraphFrame_Offset = offsetof(UW_RecoilDebugBox_C, UberGraphFrame);
	static_assert(UW_RecoilDebugBox_C_UberGraphFrame_Offset == 0x248, "UW_RecoilDebugBox_C::UberGraphFrame offset is not 248");
	auto constexpr UW_RecoilDebugBox_C_BoxImg_Offset = offsetof(UW_RecoilDebugBox_C, BoxImg);
	static_assert(UW_RecoilDebugBox_C_BoxImg_Offset == 0x250, "UW_RecoilDebugBox_C::BoxImg offset is not 250");
	auto constexpr UW_RecoilDebugBox_C_InitialColor_Offset = offsetof(UW_RecoilDebugBox_C, InitialColor);
	static_assert(UW_RecoilDebugBox_C_InitialColor_Offset == 0x258, "UW_RecoilDebugBox_C::InitialColor offset is not 258");
	auto constexpr UW_RecoilDebugBox_C_InitialSize_Offset = offsetof(UW_RecoilDebugBox_C, InitialSize);
	static_assert(UW_RecoilDebugBox_C_InitialSize_Offset == 0x268, "UW_RecoilDebugBox_C::InitialSize offset is not 268");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
