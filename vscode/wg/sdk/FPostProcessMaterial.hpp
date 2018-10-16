#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPostProcessMaterial // Size: 0x10
{
public:
    ExternalPtr<struct UMaterialInterface> EffectMaterial; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.PostProcessMaterial.EffectMaterial */
    float BlendWeight; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.PostProcessMaterial.BlendWeight */
    uint8_t UnknownDataC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPostProcessMaterial = sizeof(FPostProcessMaterial); // 16
    static_assert(sizeof(FPostProcessMaterial) == 0x10, "Size of FPostProcessMaterial is not correct.");
	auto constexpr FPostProcessMaterial_EffectMaterial_Offset = offsetof(FPostProcessMaterial, EffectMaterial);
	static_assert(FPostProcessMaterial_EffectMaterial_Offset == 0x0, "FPostProcessMaterial::EffectMaterial offset is not 0");
	auto constexpr FPostProcessMaterial_BlendWeight_Offset = offsetof(FPostProcessMaterial, BlendWeight);
	static_assert(FPostProcessMaterial_BlendWeight_Offset == 0x8, "FPostProcessMaterial::BlendWeight offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
