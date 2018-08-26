#pragma once
#include "UActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "ETimelineDirection.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Underwater_C // Size: 0x499
	: public UActor // Size: 0x410
{
private:
	typedef UBP_Underwater_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(146917); // id32("BlueprintGeneratedClass BP_Underwater.BP_Underwater_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x410 Size: 0x8 - StructProperty BP_Underwater.BP_Underwater_C.UberGraphFrame */
	ExternalPtr<struct UDirectionalLightComponent> CausticsDirectionalLight; /* Ofs: 0x418 Size: 0x8 - ObjectProperty BP_Underwater.BP_Underwater_C.CausticsDirectionalLight */
	ExternalPtr<struct UBillboardComponent> Billboard; /* Ofs: 0x420 Size: 0x8 - ObjectProperty BP_Underwater.BP_Underwater_C.Billboard */
	float WetLensBlurFade_Blur_B2C70C3E4A4917173B3F64B8E8588721; /* Ofs: 0x428 Size: 0x4 - FloatProperty BP_Underwater.BP_Underwater_C.WetLensBlurFade_Blur_B2C70C3E4A4917173B3F64B8E8588721 */
	TEnumAsByte<enum ETimelineDirection> WetLensBlurFade__Direction_B2C70C3E4A4917173B3F64B8E8588721; /* Ofs: 0x42C Size: 0x1 - ByteProperty BP_Underwater.BP_Underwater_C.WetLensBlurFade__Direction_B2C70C3E4A4917173B3F64B8E8588721 */
	uint8_t UnknownData42D[0x3];
	ExternalPtr<struct UTimelineComponent> WetLensBlurFade; /* Ofs: 0x430 Size: 0x8 - ObjectProperty BP_Underwater.BP_Underwater_C.WetLensBlurFade */
	float WetLensDistortFade_Distort_DB03BB894275DA67C2B7AE9C6381C460; /* Ofs: 0x438 Size: 0x4 - FloatProperty BP_Underwater.BP_Underwater_C.WetLensDistortFade_Distort_DB03BB894275DA67C2B7AE9C6381C460 */
	TEnumAsByte<enum ETimelineDirection> WetLensDistortFade__Direction_DB03BB894275DA67C2B7AE9C6381C460; /* Ofs: 0x43C Size: 0x1 - ByteProperty BP_Underwater.BP_Underwater_C.WetLensDistortFade__Direction_DB03BB894275DA67C2B7AE9C6381C460 */
	uint8_t UnknownData43D[0x3];
	ExternalPtr<struct UTimelineComponent> WetLensDistortFade; /* Ofs: 0x440 Size: 0x8 - ObjectProperty BP_Underwater.BP_Underwater_C.WetLensDistortFade */
	ExternalPtr<struct UDirectionalLight> SunLightRef; /* Ofs: 0x448 Size: 0x8 - ObjectProperty BP_Underwater.BP_Underwater_C.SunLightRef */
	ExternalPtr<struct UPostProcessVolume> UnderwaterPPVolumeRef; /* Ofs: 0x450 Size: 0x8 - ObjectProperty BP_Underwater.BP_Underwater_C.UnderwaterPPVolumeRef */
	ExternalPtr<struct UPostProcessVolume> MainPPVolumeRef; /* Ofs: 0x458 Size: 0x8 - ObjectProperty BP_Underwater.BP_Underwater_C.MainPPVolumeRef */
	ExternalPtr<struct UMaterialInstanceDynamic> LightFunctionInstance; /* Ofs: 0x460 Size: 0x8 - ObjectProperty BP_Underwater.BP_Underwater_C.LightFunctionInstance */
	ExternalPtr<struct UBP_Ocean_C> BP_OceanRef; /* Ofs: 0x468 Size: 0x8 - ObjectProperty BP_Underwater.BP_Underwater_C.BP_OceanRef */
	ExternalPtr<struct UPhysicsVolume> SwimVolumeRef; /* Ofs: 0x470 Size: 0x8 - ObjectProperty BP_Underwater.BP_Underwater_C.SwimVolumeRef */
	uint8_t boolField478;
	uint8_t UnknownData479[0x3];
	FVector LL; /* Ofs: 0x47C Size: 0xC - StructProperty BP_Underwater.BP_Underwater_C.LL */
	uint8_t boolField488;
	uint8_t boolField489;
	uint8_t boolField48A;
	uint8_t boolField48B;
	uint8_t boolField48C;
	uint8_t UnknownData48D[0x3];
	ExternalPtr<struct UMaterialInstanceDynamic> WetLensMatInst; /* Ofs: 0x490 Size: 0x8 - ObjectProperty BP_Underwater.BP_Underwater_C.WetLensMatInst */
	uint8_t boolField498;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x410, value); }
	inline bool SetCausticsDirectionalLight(t_structHelper inst, ExternalPtr<struct UDirectionalLightComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetBillboard(t_structHelper inst, ExternalPtr<struct UBillboardComponent> value) { inst.WriteOffset(0x420, value); }
	inline bool SetWetLensBlurFade_Blur_B2C70C3E4A4917173B3F64B8E8588721(t_structHelper inst, float value) { inst.WriteOffset(0x428, value); }
	inline bool SetWetLensBlurFade__Direction_B2C70C3E4A4917173B3F64B8E8588721(t_structHelper inst, TEnumAsByte<enum ETimelineDirection> value) { inst.WriteOffset(0x42C, value); }
	inline bool SetWetLensBlurFade(t_structHelper inst, ExternalPtr<struct UTimelineComponent> value) { inst.WriteOffset(0x430, value); }
	inline bool SetWetLensDistortFade_Distort_DB03BB894275DA67C2B7AE9C6381C460(t_structHelper inst, float value) { inst.WriteOffset(0x438, value); }
	inline bool SetWetLensDistortFade__Direction_DB03BB894275DA67C2B7AE9C6381C460(t_structHelper inst, TEnumAsByte<enum ETimelineDirection> value) { inst.WriteOffset(0x43C, value); }
	inline bool SetWetLensDistortFade(t_structHelper inst, ExternalPtr<struct UTimelineComponent> value) { inst.WriteOffset(0x440, value); }
	inline bool SetSunLightRef(t_structHelper inst, ExternalPtr<struct UDirectionalLight> value) { inst.WriteOffset(0x448, value); }
	inline bool SetUnderwaterPPVolumeRef(t_structHelper inst, ExternalPtr<struct UPostProcessVolume> value) { inst.WriteOffset(0x450, value); }
	inline bool SetMainPPVolumeRef(t_structHelper inst, ExternalPtr<struct UPostProcessVolume> value) { inst.WriteOffset(0x458, value); }
	inline bool SetLightFunctionInstance(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x460, value); }
	inline bool SetBP_OceanRef(t_structHelper inst, ExternalPtr<struct UBP_Ocean_C> value) { inst.WriteOffset(0x468, value); }
	inline bool SetSwimVolumeRef(t_structHelper inst, ExternalPtr<struct UPhysicsVolume> value) { inst.WriteOffset(0x470, value); }
	inline bool Tick()
	{
		return boolField478& 0x1;
	}
	inline bool SetTick(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x478, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLL(t_structHelper inst, FVector value) { inst.WriteOffset(0x47C, value); }
	inline bool EnableCausticsLight()
	{
		return boolField488& 0x1;
	}
	inline bool SetEnableCausticsLight(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x488, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool UpdateUnderwaterPP()
	{
		return boolField489& 0x1;
	}
	inline bool SetUpdateUnderwaterPP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x489, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool EnableWetLensPP()
	{
		return boolField48A& 0x1;
	}
	inline bool SetEnableWetLensPP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SwimVolumeFollowsChar()
	{
		return boolField48B& 0x1;
	}
	inline bool SetSwimVolumeFollowsChar(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48B, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool ShowDebugVolumes()
	{
		return boolField48C& 0x1;
	}
	inline bool SetShowDebugVolumes(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWetLensMatInst(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x490, value); }
	inline bool IsUnder()
	{
		return boolField498& 0x1;
	}
	inline bool SetIsUnder(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x498, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Underwater_C = sizeof(UBP_Underwater_C); // 1177
    static_assert(sizeof(UBP_Underwater_C) == 0x499, "Size of UBP_Underwater_C is not correct.");
	auto constexpr UBP_Underwater_C_UberGraphFrame_Offset = offsetof(UBP_Underwater_C, UberGraphFrame);
	static_assert(UBP_Underwater_C_UberGraphFrame_Offset == 0x410, "UBP_Underwater_C::UberGraphFrame offset is not 410");
	auto constexpr UBP_Underwater_C_CausticsDirectionalLight_Offset = offsetof(UBP_Underwater_C, CausticsDirectionalLight);
	static_assert(UBP_Underwater_C_CausticsDirectionalLight_Offset == 0x418, "UBP_Underwater_C::CausticsDirectionalLight offset is not 418");
	auto constexpr UBP_Underwater_C_Billboard_Offset = offsetof(UBP_Underwater_C, Billboard);
	static_assert(UBP_Underwater_C_Billboard_Offset == 0x420, "UBP_Underwater_C::Billboard offset is not 420");
	auto constexpr UBP_Underwater_C_WetLensBlurFade_Blur_B2C70C3E4A4917173B3F64B8E8588721_Offset = offsetof(UBP_Underwater_C, WetLensBlurFade_Blur_B2C70C3E4A4917173B3F64B8E8588721);
	static_assert(UBP_Underwater_C_WetLensBlurFade_Blur_B2C70C3E4A4917173B3F64B8E8588721_Offset == 0x428, "UBP_Underwater_C::WetLensBlurFade_Blur_B2C70C3E4A4917173B3F64B8E8588721 offset is not 428");
	auto constexpr UBP_Underwater_C_WetLensBlurFade__Direction_B2C70C3E4A4917173B3F64B8E8588721_Offset = offsetof(UBP_Underwater_C, WetLensBlurFade__Direction_B2C70C3E4A4917173B3F64B8E8588721);
	static_assert(UBP_Underwater_C_WetLensBlurFade__Direction_B2C70C3E4A4917173B3F64B8E8588721_Offset == 0x42c, "UBP_Underwater_C::WetLensBlurFade__Direction_B2C70C3E4A4917173B3F64B8E8588721 offset is not 42c");
	auto constexpr UBP_Underwater_C_WetLensBlurFade_Offset = offsetof(UBP_Underwater_C, WetLensBlurFade);
	static_assert(UBP_Underwater_C_WetLensBlurFade_Offset == 0x430, "UBP_Underwater_C::WetLensBlurFade offset is not 430");
	auto constexpr UBP_Underwater_C_WetLensDistortFade_Distort_DB03BB894275DA67C2B7AE9C6381C460_Offset = offsetof(UBP_Underwater_C, WetLensDistortFade_Distort_DB03BB894275DA67C2B7AE9C6381C460);
	static_assert(UBP_Underwater_C_WetLensDistortFade_Distort_DB03BB894275DA67C2B7AE9C6381C460_Offset == 0x438, "UBP_Underwater_C::WetLensDistortFade_Distort_DB03BB894275DA67C2B7AE9C6381C460 offset is not 438");
	auto constexpr UBP_Underwater_C_WetLensDistortFade__Direction_DB03BB894275DA67C2B7AE9C6381C460_Offset = offsetof(UBP_Underwater_C, WetLensDistortFade__Direction_DB03BB894275DA67C2B7AE9C6381C460);
	static_assert(UBP_Underwater_C_WetLensDistortFade__Direction_DB03BB894275DA67C2B7AE9C6381C460_Offset == 0x43c, "UBP_Underwater_C::WetLensDistortFade__Direction_DB03BB894275DA67C2B7AE9C6381C460 offset is not 43c");
	auto constexpr UBP_Underwater_C_WetLensDistortFade_Offset = offsetof(UBP_Underwater_C, WetLensDistortFade);
	static_assert(UBP_Underwater_C_WetLensDistortFade_Offset == 0x440, "UBP_Underwater_C::WetLensDistortFade offset is not 440");
	auto constexpr UBP_Underwater_C_SunLightRef_Offset = offsetof(UBP_Underwater_C, SunLightRef);
	static_assert(UBP_Underwater_C_SunLightRef_Offset == 0x448, "UBP_Underwater_C::SunLightRef offset is not 448");
	auto constexpr UBP_Underwater_C_UnderwaterPPVolumeRef_Offset = offsetof(UBP_Underwater_C, UnderwaterPPVolumeRef);
	static_assert(UBP_Underwater_C_UnderwaterPPVolumeRef_Offset == 0x450, "UBP_Underwater_C::UnderwaterPPVolumeRef offset is not 450");
	auto constexpr UBP_Underwater_C_MainPPVolumeRef_Offset = offsetof(UBP_Underwater_C, MainPPVolumeRef);
	static_assert(UBP_Underwater_C_MainPPVolumeRef_Offset == 0x458, "UBP_Underwater_C::MainPPVolumeRef offset is not 458");
	auto constexpr UBP_Underwater_C_LightFunctionInstance_Offset = offsetof(UBP_Underwater_C, LightFunctionInstance);
	static_assert(UBP_Underwater_C_LightFunctionInstance_Offset == 0x460, "UBP_Underwater_C::LightFunctionInstance offset is not 460");
	auto constexpr UBP_Underwater_C_BP_OceanRef_Offset = offsetof(UBP_Underwater_C, BP_OceanRef);
	static_assert(UBP_Underwater_C_BP_OceanRef_Offset == 0x468, "UBP_Underwater_C::BP_OceanRef offset is not 468");
	auto constexpr UBP_Underwater_C_SwimVolumeRef_Offset = offsetof(UBP_Underwater_C, SwimVolumeRef);
	static_assert(UBP_Underwater_C_SwimVolumeRef_Offset == 0x470, "UBP_Underwater_C::SwimVolumeRef offset is not 470");
	auto constexpr UBP_Underwater_C_boolField478_Offset = offsetof(UBP_Underwater_C, boolField478);
	static_assert(UBP_Underwater_C_boolField478_Offset == 0x478, "UBP_Underwater_C::boolField478 offset is not 478");
	auto constexpr UBP_Underwater_C_LL_Offset = offsetof(UBP_Underwater_C, LL);
	static_assert(UBP_Underwater_C_LL_Offset == 0x47c, "UBP_Underwater_C::LL offset is not 47c");
	auto constexpr UBP_Underwater_C_boolField488_Offset = offsetof(UBP_Underwater_C, boolField488);
	static_assert(UBP_Underwater_C_boolField488_Offset == 0x488, "UBP_Underwater_C::boolField488 offset is not 488");
	auto constexpr UBP_Underwater_C_boolField489_Offset = offsetof(UBP_Underwater_C, boolField489);
	static_assert(UBP_Underwater_C_boolField489_Offset == 0x489, "UBP_Underwater_C::boolField489 offset is not 489");
	auto constexpr UBP_Underwater_C_boolField48A_Offset = offsetof(UBP_Underwater_C, boolField48A);
	static_assert(UBP_Underwater_C_boolField48A_Offset == 0x48a, "UBP_Underwater_C::boolField48A offset is not 48a");
	auto constexpr UBP_Underwater_C_boolField48B_Offset = offsetof(UBP_Underwater_C, boolField48B);
	static_assert(UBP_Underwater_C_boolField48B_Offset == 0x48b, "UBP_Underwater_C::boolField48B offset is not 48b");
	auto constexpr UBP_Underwater_C_boolField48C_Offset = offsetof(UBP_Underwater_C, boolField48C);
	static_assert(UBP_Underwater_C_boolField48C_Offset == 0x48c, "UBP_Underwater_C::boolField48C offset is not 48c");
	auto constexpr UBP_Underwater_C_WetLensMatInst_Offset = offsetof(UBP_Underwater_C, WetLensMatInst);
	static_assert(UBP_Underwater_C_WetLensMatInst_Offset == 0x490, "UBP_Underwater_C::WetLensMatInst offset is not 490");
	auto constexpr UBP_Underwater_C_boolField498_Offset = offsetof(UBP_Underwater_C, boolField498);
	static_assert(UBP_Underwater_C_boolField498_Offset == 0x498, "UBP_Underwater_C::boolField498 offset is not 498");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
