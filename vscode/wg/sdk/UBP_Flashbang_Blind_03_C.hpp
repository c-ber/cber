#pragma once
#include "UTslPostProcessEffect.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Flashbang_Blind_03_C // Size: 0x480
	: public UTslPostProcessEffect // Size: 0x460
{
private:
	typedef UBP_Flashbang_Blind_03_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(125768); // id32("BlueprintGeneratedClass BP_Flashbang_Blind_03.BP_Flashbang_Blind_03_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x460 Size: 0x8 - StructProperty BP_Flashbang_Blind_03.BP_Flashbang_Blind_03_C.UberGraphFrame */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x468 Size: 0x8 - ObjectProperty BP_Flashbang_Blind_03.BP_Flashbang_Blind_03_C.DefaultSceneRoot */
	float FlashAlpha; /* Ofs: 0x470 Size: 0x4 - FloatProperty BP_Flashbang_Blind_03.BP_Flashbang_Blind_03_C.FlashAlpha */
	float FlashAlpha_Fall; /* Ofs: 0x474 Size: 0x4 - FloatProperty BP_Flashbang_Blind_03.BP_Flashbang_Blind_03_C.FlashAlpha_Fall */
	ExternalPtr<struct UCurveFloat> FlashCurve; /* Ofs: 0x478 Size: 0x8 - ObjectProperty BP_Flashbang_Blind_03.BP_Flashbang_Blind_03_C.FlashCurve */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x460, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x468, value); }
	inline bool SetFlashAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x470, value); }
	inline bool SetFlashAlpha_Fall(t_structHelper inst, float value) { inst.WriteOffset(0x474, value); }
	inline bool SetFlashCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x478, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Flashbang_Blind_03_C = sizeof(UBP_Flashbang_Blind_03_C); // 1152
    static_assert(sizeof(UBP_Flashbang_Blind_03_C) == 0x480, "Size of UBP_Flashbang_Blind_03_C is not correct.");
	auto constexpr UBP_Flashbang_Blind_03_C_UberGraphFrame_Offset = offsetof(UBP_Flashbang_Blind_03_C, UberGraphFrame);
	static_assert(UBP_Flashbang_Blind_03_C_UberGraphFrame_Offset == 0x460, "UBP_Flashbang_Blind_03_C::UberGraphFrame offset is not 460");
	auto constexpr UBP_Flashbang_Blind_03_C_DefaultSceneRoot_Offset = offsetof(UBP_Flashbang_Blind_03_C, DefaultSceneRoot);
	static_assert(UBP_Flashbang_Blind_03_C_DefaultSceneRoot_Offset == 0x468, "UBP_Flashbang_Blind_03_C::DefaultSceneRoot offset is not 468");
	auto constexpr UBP_Flashbang_Blind_03_C_FlashAlpha_Offset = offsetof(UBP_Flashbang_Blind_03_C, FlashAlpha);
	static_assert(UBP_Flashbang_Blind_03_C_FlashAlpha_Offset == 0x470, "UBP_Flashbang_Blind_03_C::FlashAlpha offset is not 470");
	auto constexpr UBP_Flashbang_Blind_03_C_FlashAlpha_Fall_Offset = offsetof(UBP_Flashbang_Blind_03_C, FlashAlpha_Fall);
	static_assert(UBP_Flashbang_Blind_03_C_FlashAlpha_Fall_Offset == 0x474, "UBP_Flashbang_Blind_03_C::FlashAlpha_Fall offset is not 474");
	auto constexpr UBP_Flashbang_Blind_03_C_FlashCurve_Offset = offsetof(UBP_Flashbang_Blind_03_C, FlashCurve);
	static_assert(UBP_Flashbang_Blind_03_C_FlashCurve_Offset == 0x478, "UBP_Flashbang_Blind_03_C::FlashCurve offset is not 478");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
