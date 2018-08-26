#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslPostProcessEffect // Size: 0x460
	: public UActor // Size: 0x410
{
private:
	typedef UTslPostProcessEffect t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1861); // id32("Class TslGame.TslPostProcessEffect")
		return ptr;
	}
//	FName TargetPostProcessVolumeName; /* Ofs: 0x408 Size: 0x8 - NameProperty TslGame.TslPostProcessEffect.TargetPostProcessVolumeName */
	TArray<struct FPostProcessMaterial> PostProcessMaterials; /* Ofs: 0x410 Size: 0x10 - ArrayProperty TslGame.TslPostProcessEffect.PostProcessMaterials */
	TArray<struct FPostProcessEffectParameter> DefaultPostProcessEffectParameter; /* Ofs: 0x420 Size: 0x10 - ArrayProperty TslGame.TslPostProcessEffect.DefaultPostProcessEffectParameter */
	TArray<struct FPostProcessEffectDynamicMaterialState> PostProcessEffectDynamicMaterialStates; /* Ofs: 0x430 Size: 0x10 - ArrayProperty TslGame.TslPostProcessEffect.PostProcessEffectDynamicMaterialStates */
	ExternalPtr<struct UPostProcessVolume> PostProcessVolume; /* Ofs: 0x440 Size: 0x8 - ObjectProperty TslGame.TslPostProcessEffect.PostProcessVolume */
	uint8_t UnknownData448[0x18];


//	inline bool SetTargetPostProcessVolumeName(t_structHelper inst, FName value) { inst.WriteOffset(0x408, value); }
	inline bool SetPostProcessMaterials(t_structHelper inst, TArray<struct FPostProcessMaterial> value) { inst.WriteOffset(0x410, value); }
	inline bool SetDefaultPostProcessEffectParameter(t_structHelper inst, TArray<struct FPostProcessEffectParameter> value) { inst.WriteOffset(0x420, value); }
	inline bool SetPostProcessEffectDynamicMaterialStates(t_structHelper inst, TArray<struct FPostProcessEffectDynamicMaterialState> value) { inst.WriteOffset(0x430, value); }
	inline bool SetPostProcessVolume(t_structHelper inst, ExternalPtr<struct UPostProcessVolume> value) { inst.WriteOffset(0x440, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslPostProcessEffect = sizeof(UTslPostProcessEffect); // 1120
    static_assert(sizeof(UTslPostProcessEffect) == 0x460, "Size of UTslPostProcessEffect is not correct.");
//	auto constexpr UTslPostProcessEffect_TargetPostProcessVolumeName_Offset = offsetof(UTslPostProcessEffect, TargetPostProcessVolumeName);
//	static_assert(UTslPostProcessEffect_TargetPostProcessVolumeName_Offset == 0x408, "UTslPostProcessEffect::TargetPostProcessVolumeName offset is not 408");
	auto constexpr UTslPostProcessEffect_PostProcessMaterials_Offset = offsetof(UTslPostProcessEffect, PostProcessMaterials);
	static_assert(UTslPostProcessEffect_PostProcessMaterials_Offset == 0x410, "UTslPostProcessEffect::PostProcessMaterials offset is not 410");
	auto constexpr UTslPostProcessEffect_DefaultPostProcessEffectParameter_Offset = offsetof(UTslPostProcessEffect, DefaultPostProcessEffectParameter);
	static_assert(UTslPostProcessEffect_DefaultPostProcessEffectParameter_Offset == 0x420, "UTslPostProcessEffect::DefaultPostProcessEffectParameter offset is not 420");
	auto constexpr UTslPostProcessEffect_PostProcessEffectDynamicMaterialStates_Offset = offsetof(UTslPostProcessEffect, PostProcessEffectDynamicMaterialStates);
	static_assert(UTslPostProcessEffect_PostProcessEffectDynamicMaterialStates_Offset == 0x430, "UTslPostProcessEffect::PostProcessEffectDynamicMaterialStates offset is not 430");
	auto constexpr UTslPostProcessEffect_PostProcessVolume_Offset = offsetof(UTslPostProcessEffect, PostProcessVolume);
	static_assert(UTslPostProcessEffect_PostProcessVolume_Offset == 0x440, "UTslPostProcessEffect::PostProcessVolume offset is not 440");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
