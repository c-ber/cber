#pragma once
#include "UTslSelfBuff.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslFlashbangDebuff // Size: 0x500
	: public UTslSelfBuff // Size: 0x470
{
private:
	typedef UTslFlashbangDebuff t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1340); // id32("Class TslGame.TslFlashbangDebuff")
		return ptr;
	}
//	ExternalPtr<struct UFlashbangDebuffCurve> DebuffCurve; /* Ofs: 0x468 Size: 0x8 - ObjectProperty TslGame.TslFlashbangDebuff.DebuffCurve */
	TArray<ExternalPtr<struct UAkAudioEvent>> TinnitusLevels; /* Ofs: 0x470 Size: 0x10 - ArrayProperty TslGame.TslFlashbangDebuff.TinnitusLevels */
	TArray<struct FPostProcessEffectParameter> PostProcessEffectParametersArray; /* Ofs: 0x480 Size: 0x10 - ArrayProperty TslGame.TslFlashbangDebuff.PostProcessEffectParametersArray */
	ExternalPtr<struct UClass> EffectActorClass; /* Ofs: 0x490 Size: 0x8 - ClassProperty TslGame.TslFlashbangDebuff.EffectActorClass */
	float CaptureDelay; /* Ofs: 0x498 Size: 0x4 - FloatProperty TslGame.TslFlashbangDebuff.CaptureDelay */
	float DebuffDistance; /* Ofs: 0x49C Size: 0x4 - FloatProperty TslGame.TslFlashbangDebuff.DebuffDistance */
	uint8_t UnknownData4A0[0x60];


//	inline bool SetDebuffCurve(t_structHelper inst, ExternalPtr<struct UFlashbangDebuffCurve> value) { inst.WriteOffset(0x468, value); }
	inline bool SetTinnitusLevels(t_structHelper inst, TArray<ExternalPtr<struct UAkAudioEvent>> value) { inst.WriteOffset(0x470, value); }
	inline bool SetPostProcessEffectParametersArray(t_structHelper inst, TArray<struct FPostProcessEffectParameter> value) { inst.WriteOffset(0x480, value); }
	inline bool SetEffectActorClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x490, value); }
	inline bool SetCaptureDelay(t_structHelper inst, float value) { inst.WriteOffset(0x498, value); }
	inline bool SetDebuffDistance(t_structHelper inst, float value) { inst.WriteOffset(0x49C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslFlashbangDebuff = sizeof(UTslFlashbangDebuff); // 1280
    static_assert(sizeof(UTslFlashbangDebuff) == 0x500, "Size of UTslFlashbangDebuff is not correct.");
//	auto constexpr UTslFlashbangDebuff_DebuffCurve_Offset = offsetof(UTslFlashbangDebuff, DebuffCurve);
//	static_assert(UTslFlashbangDebuff_DebuffCurve_Offset == 0x468, "UTslFlashbangDebuff::DebuffCurve offset is not 468");
	auto constexpr UTslFlashbangDebuff_TinnitusLevels_Offset = offsetof(UTslFlashbangDebuff, TinnitusLevels);
	static_assert(UTslFlashbangDebuff_TinnitusLevels_Offset == 0x470, "UTslFlashbangDebuff::TinnitusLevels offset is not 470");
	auto constexpr UTslFlashbangDebuff_PostProcessEffectParametersArray_Offset = offsetof(UTslFlashbangDebuff, PostProcessEffectParametersArray);
	static_assert(UTslFlashbangDebuff_PostProcessEffectParametersArray_Offset == 0x480, "UTslFlashbangDebuff::PostProcessEffectParametersArray offset is not 480");
	auto constexpr UTslFlashbangDebuff_EffectActorClass_Offset = offsetof(UTslFlashbangDebuff, EffectActorClass);
	static_assert(UTslFlashbangDebuff_EffectActorClass_Offset == 0x490, "UTslFlashbangDebuff::EffectActorClass offset is not 490");
	auto constexpr UTslFlashbangDebuff_CaptureDelay_Offset = offsetof(UTslFlashbangDebuff, CaptureDelay);
	static_assert(UTslFlashbangDebuff_CaptureDelay_Offset == 0x498, "UTslFlashbangDebuff::CaptureDelay offset is not 498");
	auto constexpr UTslFlashbangDebuff_DebuffDistance_Offset = offsetof(UTslFlashbangDebuff, DebuffDistance);
	static_assert(UTslFlashbangDebuff_DebuffDistance_Offset == 0x49c, "UTslFlashbangDebuff::DebuffDistance offset is not 49c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
