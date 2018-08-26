#pragma once
#include "USceneComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPhysicsThrusterComponent // Size: 0x4A0
	: public USceneComponent // Size: 0x490
{
private:
	typedef UPhysicsThrusterComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(196); // id32("Class Engine.PhysicsThrusterComponent")
		return ptr;
	}
	float ThrustStrength; /* Ofs: 0x490 Size: 0x4 - FloatProperty Engine.PhysicsThrusterComponent.ThrustStrength */
	uint8_t UnknownData494[0xC];


	inline bool SetThrustStrength(t_structHelper inst, float value) { inst.WriteOffset(0x490, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPhysicsThrusterComponent = sizeof(UPhysicsThrusterComponent); // 1184
    static_assert(sizeof(UPhysicsThrusterComponent) == 0x4A0, "Size of UPhysicsThrusterComponent is not correct.");
	auto constexpr UPhysicsThrusterComponent_ThrustStrength_Offset = offsetof(UPhysicsThrusterComponent, ThrustStrength);
	static_assert(UPhysicsThrusterComponent_ThrustStrength_Offset == 0x490, "UPhysicsThrusterComponent::ThrustStrength offset is not 490");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
