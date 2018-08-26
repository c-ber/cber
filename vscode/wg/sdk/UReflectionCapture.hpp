#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReflectionCapture // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UReflectionCapture t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1774); // id32("Class Engine.ReflectionCapture")
		return ptr;
	}
//	ExternalPtr<struct UReflectionCaptureComponent> CaptureComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.ReflectionCapture.CaptureComponent */


//	inline bool SetCaptureComponent(t_structHelper inst, ExternalPtr<struct UReflectionCaptureComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReflectionCapture = sizeof(UReflectionCapture); // 1040
    static_assert(sizeof(UReflectionCapture) == 0x410, "Size of UReflectionCapture is not correct.");
//	auto constexpr UReflectionCapture_CaptureComponent_Offset = offsetof(UReflectionCapture, CaptureComponent);
//	static_assert(UReflectionCapture_CaptureComponent_Offset == 0x408, "UReflectionCapture::CaptureComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
