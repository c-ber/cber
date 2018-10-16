#pragma once
#include "UInterpGroup.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpGroupCamera // Size: 0x68
	: public UInterpGroup // Size: 0x58
{
private:
	typedef UInterpGroupCamera t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(791); // id32("Class Engine.InterpGroupCamera")
		return ptr;
	}
	ExternalPtr<struct UCameraAnim> CameraAnimInst; /* Ofs: 0x58 Size: 0x8 - ObjectProperty Engine.InterpGroupCamera.CameraAnimInst */
	float CompressTolerance; /* Ofs: 0x60 Size: 0x4 - FloatProperty Engine.InterpGroupCamera.CompressTolerance */
	uint8_t UnknownData64[0x4];


	inline bool SetCameraAnimInst(t_structHelper inst, ExternalPtr<struct UCameraAnim> value) { inst.WriteOffset(0x58, value); }
	inline bool SetCompressTolerance(t_structHelper inst, float value) { inst.WriteOffset(0x60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpGroupCamera = sizeof(UInterpGroupCamera); // 104
    static_assert(sizeof(UInterpGroupCamera) == 0x68, "Size of UInterpGroupCamera is not correct.");
	auto constexpr UInterpGroupCamera_CameraAnimInst_Offset = offsetof(UInterpGroupCamera, CameraAnimInst);
	static_assert(UInterpGroupCamera_CameraAnimInst_Offset == 0x58, "UInterpGroupCamera::CameraAnimInst offset is not 58");
	auto constexpr UInterpGroupCamera_CompressTolerance_Offset = offsetof(UInterpGroupCamera, CompressTolerance);
	static_assert(UInterpGroupCamera_CompressTolerance_Offset == 0x60, "UInterpGroupCamera::CompressTolerance offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
