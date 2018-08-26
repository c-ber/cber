#pragma once
#include "USceneCaptureComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USceneCaptureComponentCube // Size: 0x520
	: public USceneCaptureComponent // Size: 0x510
{
private:
	typedef USceneCaptureComponentCube t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(240); // id32("Class Engine.SceneCaptureComponentCube")
		return ptr;
	}
	ExternalPtr<struct UTextureRenderTargetCube> TextureTarget; /* Ofs: 0x510 Size: 0x8 - ObjectProperty Engine.SceneCaptureComponentCube.TextureTarget */
	uint8_t UnknownData518[0x8];


	inline bool SetTextureTarget(t_structHelper inst, ExternalPtr<struct UTextureRenderTargetCube> value) { inst.WriteOffset(0x510, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSceneCaptureComponentCube = sizeof(USceneCaptureComponentCube); // 1312
    static_assert(sizeof(USceneCaptureComponentCube) == 0x520, "Size of USceneCaptureComponentCube is not correct.");
	auto constexpr USceneCaptureComponentCube_TextureTarget_Offset = offsetof(USceneCaptureComponentCube, TextureTarget);
	static_assert(USceneCaptureComponentCube_TextureTarget_Offset == 0x510, "USceneCaptureComponentCube::TextureTarget offset is not 510");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
