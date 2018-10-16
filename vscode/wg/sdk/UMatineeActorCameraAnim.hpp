#pragma once
#include "UMatineeActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMatineeActorCameraAnim // Size: 0x4C0
	: public UMatineeActor // Size: 0x4B0
{
private:
	typedef UMatineeActorCameraAnim t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1757); // id32("Class Engine.MatineeActorCameraAnim")
		return ptr;
	}
	ExternalPtr<struct UCameraAnim> CameraAnim; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty Engine.MatineeActorCameraAnim.CameraAnim */
	uint8_t UnknownData4B8[0x8];


	inline bool SetCameraAnim(t_structHelper inst, ExternalPtr<struct UCameraAnim> value) { inst.WriteOffset(0x4B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMatineeActorCameraAnim = sizeof(UMatineeActorCameraAnim); // 1216
    static_assert(sizeof(UMatineeActorCameraAnim) == 0x4C0, "Size of UMatineeActorCameraAnim is not correct.");
	auto constexpr UMatineeActorCameraAnim_CameraAnim_Offset = offsetof(UMatineeActorCameraAnim, CameraAnim);
	static_assert(UMatineeActorCameraAnim_CameraAnim_Offset == 0x4b0, "UMatineeActorCameraAnim::CameraAnim offset is not 4b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
