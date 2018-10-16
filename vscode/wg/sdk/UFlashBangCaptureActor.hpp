#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFlashBangCaptureActor // Size: 0x440
	: public UActor // Size: 0x410
{
private:
	typedef UFlashBangCaptureActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1860); // id32("Class TslGame.FlashBangCaptureActor")
		return ptr;
	}
//	ExternalPtr<struct USceneComponent> SceneRootComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty TslGame.FlashBangCaptureActor.SceneRootComponent */
	ExternalPtr<struct USceneCaptureComponent2D> SceneCapture; /* Ofs: 0x410 Size: 0x8 - ObjectProperty TslGame.FlashBangCaptureActor.SceneCapture */
	ExternalPtr<struct UPawn> PlayerPawnReference; /* Ofs: 0x418 Size: 0x8 - ObjectProperty TslGame.FlashBangCaptureActor.PlayerPawnReference */
	ExternalPtr<struct UTextureRenderTarget2D> CaptureTexture; /* Ofs: 0x420 Size: 0x8 - ObjectProperty TslGame.FlashBangCaptureActor.CaptureTexture */
	int32_t TextureDownsampleMultiplier; /* Ofs: 0x428 Size: 0x4 - IntProperty TslGame.FlashBangCaptureActor.TextureDownsampleMultiplier */
	uint8_t UnknownData42C[0x14];


//	inline bool SetSceneRootComponent(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool SetSceneCapture(t_structHelper inst, ExternalPtr<struct USceneCaptureComponent2D> value) { inst.WriteOffset(0x410, value); }
	inline bool SetPlayerPawnReference(t_structHelper inst, ExternalPtr<struct UPawn> value) { inst.WriteOffset(0x418, value); }
	inline bool SetCaptureTexture(t_structHelper inst, ExternalPtr<struct UTextureRenderTarget2D> value) { inst.WriteOffset(0x420, value); }
	inline bool SetTextureDownsampleMultiplier(t_structHelper inst, int32_t value) { inst.WriteOffset(0x428, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFlashBangCaptureActor = sizeof(UFlashBangCaptureActor); // 1088
    static_assert(sizeof(UFlashBangCaptureActor) == 0x440, "Size of UFlashBangCaptureActor is not correct.");
//	auto constexpr UFlashBangCaptureActor_SceneRootComponent_Offset = offsetof(UFlashBangCaptureActor, SceneRootComponent);
//	static_assert(UFlashBangCaptureActor_SceneRootComponent_Offset == 0x408, "UFlashBangCaptureActor::SceneRootComponent offset is not 408");
	auto constexpr UFlashBangCaptureActor_SceneCapture_Offset = offsetof(UFlashBangCaptureActor, SceneCapture);
	static_assert(UFlashBangCaptureActor_SceneCapture_Offset == 0x410, "UFlashBangCaptureActor::SceneCapture offset is not 410");
	auto constexpr UFlashBangCaptureActor_PlayerPawnReference_Offset = offsetof(UFlashBangCaptureActor, PlayerPawnReference);
	static_assert(UFlashBangCaptureActor_PlayerPawnReference_Offset == 0x418, "UFlashBangCaptureActor::PlayerPawnReference offset is not 418");
	auto constexpr UFlashBangCaptureActor_CaptureTexture_Offset = offsetof(UFlashBangCaptureActor, CaptureTexture);
	static_assert(UFlashBangCaptureActor_CaptureTexture_Offset == 0x420, "UFlashBangCaptureActor::CaptureTexture offset is not 420");
	auto constexpr UFlashBangCaptureActor_TextureDownsampleMultiplier_Offset = offsetof(UFlashBangCaptureActor, TextureDownsampleMultiplier);
	static_assert(UFlashBangCaptureActor_TextureDownsampleMultiplier_Offset == 0x428, "UFlashBangCaptureActor::TextureDownsampleMultiplier offset is not 428");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
