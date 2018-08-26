#pragma once
#include "FFilePath.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FParticleEditorPromotionSettings // Size: 0x10
{
public:
    FFilePath DefaultParticleAsset; /* Ofs: 0x0 Size: 0x10 StructProperty Engine.ParticleEditorPromotionSettings.DefaultParticleAsset */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFParticleEditorPromotionSettings = sizeof(FParticleEditorPromotionSettings); // 16
    static_assert(sizeof(FParticleEditorPromotionSettings) == 0x10, "Size of FParticleEditorPromotionSettings is not correct.");
	auto constexpr FParticleEditorPromotionSettings_DefaultParticleAsset_Offset = offsetof(FParticleEditorPromotionSettings, DefaultParticleAsset);
	static_assert(FParticleEditorPromotionSettings_DefaultParticleAsset_Offset == 0x0, "FParticleEditorPromotionSettings::DefaultParticleAsset offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
