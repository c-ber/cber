#pragma once
#include "USceneCapture.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USceneCaptureCube // Size: 0x420
	: public USceneCapture // Size: 0x410
{
private:
	typedef USceneCaptureCube t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1785); // id32("Class Engine.SceneCaptureCube")
		return ptr;
	}
	ExternalPtr<struct USceneCaptureComponentCube> CaptureComponentCube; /* Ofs: 0x410 Size: 0x8 - ObjectProperty Engine.SceneCaptureCube.CaptureComponentCube */
	ExternalPtr<struct UDrawFrustumComponent> DrawFrustum; /* Ofs: 0x418 Size: 0x8 - ObjectProperty Engine.SceneCaptureCube.DrawFrustum */


	inline bool SetCaptureComponentCube(t_structHelper inst, ExternalPtr<struct USceneCaptureComponentCube> value) { inst.WriteOffset(0x410, value); }
	inline bool SetDrawFrustum(t_structHelper inst, ExternalPtr<struct UDrawFrustumComponent> value) { inst.WriteOffset(0x418, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSceneCaptureCube = sizeof(USceneCaptureCube); // 1056
    static_assert(sizeof(USceneCaptureCube) == 0x420, "Size of USceneCaptureCube is not correct.");
	auto constexpr USceneCaptureCube_CaptureComponentCube_Offset = offsetof(USceneCaptureCube, CaptureComponentCube);
	static_assert(USceneCaptureCube_CaptureComponentCube_Offset == 0x410, "USceneCaptureCube::CaptureComponentCube offset is not 410");
	auto constexpr USceneCaptureCube_DrawFrustum_Offset = offsetof(USceneCaptureCube, DrawFrustum);
	static_assert(USceneCaptureCube_DrawFrustum_Offset == 0x418, "USceneCaptureCube::DrawFrustum offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
