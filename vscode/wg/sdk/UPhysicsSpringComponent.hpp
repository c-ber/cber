#pragma once
#include "USceneComponent.hpp"
#include "ECollisionChannel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPhysicsSpringComponent // Size: 0x4C0
	: public USceneComponent // Size: 0x490
{
private:
	typedef UPhysicsSpringComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(195); // id32("Class Engine.PhysicsSpringComponent")
		return ptr;
	}
	float SpringStiffness; /* Ofs: 0x490 Size: 0x4 - FloatProperty Engine.PhysicsSpringComponent.SpringStiffness */
	float SpringDamping; /* Ofs: 0x494 Size: 0x4 - FloatProperty Engine.PhysicsSpringComponent.SpringDamping */
	float SpringLengthAtRest; /* Ofs: 0x498 Size: 0x4 - FloatProperty Engine.PhysicsSpringComponent.SpringLengthAtRest */
	float SpringRadius; /* Ofs: 0x49C Size: 0x4 - FloatProperty Engine.PhysicsSpringComponent.SpringRadius */
	TEnumAsByte<enum ECollisionChannel> SpringChannel; /* Ofs: 0x4A0 Size: 0x1 - ByteProperty Engine.PhysicsSpringComponent.SpringChannel */
	uint8_t boolField4A1;
	uint8_t UnknownData4A2[0x2];
	float SpringCompression; /* Ofs: 0x4A4 Size: 0x4 - FloatProperty Engine.PhysicsSpringComponent.SpringCompression */
	uint8_t UnknownData4A8[0x18];


	inline bool SetSpringStiffness(t_structHelper inst, float value) { inst.WriteOffset(0x490, value); }
	inline bool SetSpringDamping(t_structHelper inst, float value) { inst.WriteOffset(0x494, value); }
	inline bool SetSpringLengthAtRest(t_structHelper inst, float value) { inst.WriteOffset(0x498, value); }
	inline bool SetSpringRadius(t_structHelper inst, float value) { inst.WriteOffset(0x49C, value); }
	inline bool SetSpringChannel(t_structHelper inst, TEnumAsByte<enum ECollisionChannel> value) { inst.WriteOffset(0x4A0, value); }
	inline bool bIgnoreSelf()
	{
		return boolField4A1& 0x1;
	}
	inline bool SetbIgnoreSelf(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSpringCompression(t_structHelper inst, float value) { inst.WriteOffset(0x4A4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPhysicsSpringComponent = sizeof(UPhysicsSpringComponent); // 1216
    static_assert(sizeof(UPhysicsSpringComponent) == 0x4C0, "Size of UPhysicsSpringComponent is not correct.");
	auto constexpr UPhysicsSpringComponent_SpringStiffness_Offset = offsetof(UPhysicsSpringComponent, SpringStiffness);
	static_assert(UPhysicsSpringComponent_SpringStiffness_Offset == 0x490, "UPhysicsSpringComponent::SpringStiffness offset is not 490");
	auto constexpr UPhysicsSpringComponent_SpringDamping_Offset = offsetof(UPhysicsSpringComponent, SpringDamping);
	static_assert(UPhysicsSpringComponent_SpringDamping_Offset == 0x494, "UPhysicsSpringComponent::SpringDamping offset is not 494");
	auto constexpr UPhysicsSpringComponent_SpringLengthAtRest_Offset = offsetof(UPhysicsSpringComponent, SpringLengthAtRest);
	static_assert(UPhysicsSpringComponent_SpringLengthAtRest_Offset == 0x498, "UPhysicsSpringComponent::SpringLengthAtRest offset is not 498");
	auto constexpr UPhysicsSpringComponent_SpringRadius_Offset = offsetof(UPhysicsSpringComponent, SpringRadius);
	static_assert(UPhysicsSpringComponent_SpringRadius_Offset == 0x49c, "UPhysicsSpringComponent::SpringRadius offset is not 49c");
	auto constexpr UPhysicsSpringComponent_SpringChannel_Offset = offsetof(UPhysicsSpringComponent, SpringChannel);
	static_assert(UPhysicsSpringComponent_SpringChannel_Offset == 0x4a0, "UPhysicsSpringComponent::SpringChannel offset is not 4a0");
	auto constexpr UPhysicsSpringComponent_boolField4A1_Offset = offsetof(UPhysicsSpringComponent, boolField4A1);
	static_assert(UPhysicsSpringComponent_boolField4A1_Offset == 0x4a1, "UPhysicsSpringComponent::boolField4A1 offset is not 4a1");
	auto constexpr UPhysicsSpringComponent_SpringCompression_Offset = offsetof(UPhysicsSpringComponent, SpringCompression);
	static_assert(UPhysicsSpringComponent_SpringCompression_Offset == 0x4a4, "UPhysicsSpringComponent::SpringCompression offset is not 4a4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
