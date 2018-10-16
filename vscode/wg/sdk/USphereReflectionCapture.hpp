#pragma once
#include "UReflectionCapture.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USphereReflectionCapture // Size: 0x420
	: public UReflectionCapture // Size: 0x410
{
private:
	typedef USphereReflectionCapture t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1777); // id32("Class Engine.SphereReflectionCapture")
		return ptr;
	}
	ExternalPtr<struct UDrawSphereComponent> DrawCaptureRadius; /* Ofs: 0x410 Size: 0x8 - ObjectProperty Engine.SphereReflectionCapture.DrawCaptureRadius */
	uint8_t UnknownData418[0x8];


	inline bool SetDrawCaptureRadius(t_structHelper inst, ExternalPtr<struct UDrawSphereComponent> value) { inst.WriteOffset(0x410, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSphereReflectionCapture = sizeof(USphereReflectionCapture); // 1056
    static_assert(sizeof(USphereReflectionCapture) == 0x420, "Size of USphereReflectionCapture is not correct.");
	auto constexpr USphereReflectionCapture_DrawCaptureRadius_Offset = offsetof(USphereReflectionCapture, DrawCaptureRadius);
	static_assert(USphereReflectionCapture_DrawCaptureRadius_Offset == 0x410, "USphereReflectionCapture::DrawCaptureRadius offset is not 410");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
