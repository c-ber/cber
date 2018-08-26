#pragma once
#include "UMovieSceneCaptureProtocolSettings.hpp"
#include "FCompositionGraphCapturePasses.hpp"
#include "EHDRCaptureGamut.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCompositionGraphCaptureSettings // Size: 0x60
	: public UMovieSceneCaptureProtocolSettings // Size: 0x30
{
private:
	typedef UCompositionGraphCaptureSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(164); // id32("Class MovieSceneCapture.CompositionGraphCaptureSettings")
		return ptr;
	}
	FCompositionGraphCapturePasses IncludeRenderPasses; /* Ofs: 0x30 Size: 0x10 - StructProperty MovieSceneCapture.CompositionGraphCaptureSettings.IncludeRenderPasses */
	uint8_t boolField40;
	uint8_t UnknownData41[0x3];
	int32_t HDRCompressionQuality; /* Ofs: 0x44 Size: 0x4 - IntProperty MovieSceneCapture.CompositionGraphCaptureSettings.HDRCompressionQuality */
	TEnumAsByte<enum EHDRCaptureGamut> CaptureGamut; /* Ofs: 0x48 Size: 0x1 - ByteProperty MovieSceneCapture.CompositionGraphCaptureSettings.CaptureGamut */
	uint8_t UnknownData49[0x7];
	FStringAssetReference PostProcessingMaterial; /* Ofs: 0x50 Size: 0x10 - StructProperty MovieSceneCapture.CompositionGraphCaptureSettings.PostProcessingMaterial */


	inline bool SetIncludeRenderPasses(t_structHelper inst, FCompositionGraphCapturePasses value) { inst.WriteOffset(0x30, value); }
	inline bool bCaptureFramesInHDR()
	{
		return boolField40& 0x1;
	}
	inline bool SetbCaptureFramesInHDR(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetHDRCompressionQuality(t_structHelper inst, int32_t value) { inst.WriteOffset(0x44, value); }
	inline bool SetCaptureGamut(t_structHelper inst, TEnumAsByte<enum EHDRCaptureGamut> value) { inst.WriteOffset(0x48, value); }
	inline bool SetPostProcessingMaterial(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCompositionGraphCaptureSettings = sizeof(UCompositionGraphCaptureSettings); // 96
    static_assert(sizeof(UCompositionGraphCaptureSettings) == 0x60, "Size of UCompositionGraphCaptureSettings is not correct.");
	auto constexpr UCompositionGraphCaptureSettings_IncludeRenderPasses_Offset = offsetof(UCompositionGraphCaptureSettings, IncludeRenderPasses);
	static_assert(UCompositionGraphCaptureSettings_IncludeRenderPasses_Offset == 0x30, "UCompositionGraphCaptureSettings::IncludeRenderPasses offset is not 30");
	auto constexpr UCompositionGraphCaptureSettings_boolField40_Offset = offsetof(UCompositionGraphCaptureSettings, boolField40);
	static_assert(UCompositionGraphCaptureSettings_boolField40_Offset == 0x40, "UCompositionGraphCaptureSettings::boolField40 offset is not 40");
	auto constexpr UCompositionGraphCaptureSettings_HDRCompressionQuality_Offset = offsetof(UCompositionGraphCaptureSettings, HDRCompressionQuality);
	static_assert(UCompositionGraphCaptureSettings_HDRCompressionQuality_Offset == 0x44, "UCompositionGraphCaptureSettings::HDRCompressionQuality offset is not 44");
	auto constexpr UCompositionGraphCaptureSettings_CaptureGamut_Offset = offsetof(UCompositionGraphCaptureSettings, CaptureGamut);
	static_assert(UCompositionGraphCaptureSettings_CaptureGamut_Offset == 0x48, "UCompositionGraphCaptureSettings::CaptureGamut offset is not 48");
	auto constexpr UCompositionGraphCaptureSettings_PostProcessingMaterial_Offset = offsetof(UCompositionGraphCaptureSettings, PostProcessingMaterial);
	static_assert(UCompositionGraphCaptureSettings_PostProcessingMaterial_Offset == 0x50, "UCompositionGraphCaptureSettings::PostProcessingMaterial offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
