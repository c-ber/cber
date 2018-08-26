#pragma once
#include "UCameraModifier.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCameraModifier_CameraShake // Size: 0x68
	: public UCameraModifier // Size: 0x50
{
private:
	typedef UCameraModifier_CameraShake t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(689); // id32("Class Engine.CameraModifier_CameraShake")
		return ptr;
	}
	TArray<ExternalPtr<struct UCameraShake>> ActiveShakes; /* Ofs: 0x50 Size: 0x10 - ArrayProperty Engine.CameraModifier_CameraShake.ActiveShakes */
	float SplitScreenShakeScale; /* Ofs: 0x60 Size: 0x4 - FloatProperty Engine.CameraModifier_CameraShake.SplitScreenShakeScale */
	uint8_t UnknownData64[0x4];


	inline bool SetActiveShakes(t_structHelper inst, TArray<ExternalPtr<struct UCameraShake>> value) { inst.WriteOffset(0x50, value); }
	inline bool SetSplitScreenShakeScale(t_structHelper inst, float value) { inst.WriteOffset(0x60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCameraModifier_CameraShake = sizeof(UCameraModifier_CameraShake); // 104
    static_assert(sizeof(UCameraModifier_CameraShake) == 0x68, "Size of UCameraModifier_CameraShake is not correct.");
	auto constexpr UCameraModifier_CameraShake_ActiveShakes_Offset = offsetof(UCameraModifier_CameraShake, ActiveShakes);
	static_assert(UCameraModifier_CameraShake_ActiveShakes_Offset == 0x50, "UCameraModifier_CameraShake::ActiveShakes offset is not 50");
	auto constexpr UCameraModifier_CameraShake_SplitScreenShakeScale_Offset = offsetof(UCameraModifier_CameraShake, SplitScreenShakeScale);
	static_assert(UCameraModifier_CameraShake_SplitScreenShakeScale_Offset == 0x60, "UCameraModifier_CameraShake::SplitScreenShakeScale offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
