#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDistanceFieldCapture // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UDistanceFieldCapture t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1736); // id32("Class Engine.DistanceFieldCapture")
		return ptr;
	}
//	ExternalPtr<struct UDistanceFieldCaptureComponent> CaptureComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.DistanceFieldCapture.CaptureComponent */


//	inline bool SetCaptureComponent(t_structHelper inst, ExternalPtr<struct UDistanceFieldCaptureComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDistanceFieldCapture = sizeof(UDistanceFieldCapture); // 1040
    static_assert(sizeof(UDistanceFieldCapture) == 0x410, "Size of UDistanceFieldCapture is not correct.");
//	auto constexpr UDistanceFieldCapture_CaptureComponent_Offset = offsetof(UDistanceFieldCapture, CaptureComponent);
//	static_assert(UDistanceFieldCapture_CaptureComponent_Offset == 0x408, "UDistanceFieldCapture::CaptureComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
