#pragma once
#include "USceneCapture.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USceneCapture2D // Size: 0x420
	: public USceneCapture // Size: 0x410
{
private:
	typedef USceneCapture2D t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1784); // id32("Class Engine.SceneCapture2D")
		return ptr;
	}
	ExternalPtr<struct USceneCaptureComponent2D> CaptureComponent2D; /* Ofs: 0x410 Size: 0x8 - ObjectProperty Engine.SceneCapture2D.CaptureComponent2D */
	ExternalPtr<struct UDrawFrustumComponent> DrawFrustum; /* Ofs: 0x418 Size: 0x8 - ObjectProperty Engine.SceneCapture2D.DrawFrustum */


	inline bool SetCaptureComponent2D(t_structHelper inst, ExternalPtr<struct USceneCaptureComponent2D> value) { inst.WriteOffset(0x410, value); }
	inline bool SetDrawFrustum(t_structHelper inst, ExternalPtr<struct UDrawFrustumComponent> value) { inst.WriteOffset(0x418, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSceneCapture2D = sizeof(USceneCapture2D); // 1056
    static_assert(sizeof(USceneCapture2D) == 0x420, "Size of USceneCapture2D is not correct.");
	auto constexpr USceneCapture2D_CaptureComponent2D_Offset = offsetof(USceneCapture2D, CaptureComponent2D);
	static_assert(USceneCapture2D_CaptureComponent2D_Offset == 0x410, "USceneCapture2D::CaptureComponent2D offset is not 410");
	auto constexpr USceneCapture2D_DrawFrustum_Offset = offsetof(USceneCapture2D, DrawFrustum);
	static_assert(USceneCapture2D_DrawFrustum_Offset == 0x418, "USceneCapture2D::DrawFrustum offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
