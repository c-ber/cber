#pragma once
#include "URigidBodyBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPhysicsConstraintActor // Size: 0x430
	: public URigidBodyBase // Size: 0x410
{
private:
	typedef UPhysicsConstraintActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1779); // id32("Class Engine.PhysicsConstraintActor")
		return ptr;
	}
//	ExternalPtr<struct UPhysicsConstraintComponent> ConstraintComp; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.PhysicsConstraintActor.ConstraintComp */
	ExternalPtr<struct UActor> ConstraintActor1; /* Ofs: 0x410 Size: 0x8 - ObjectProperty Engine.PhysicsConstraintActor.ConstraintActor1 */
	ExternalPtr<struct UActor> ConstraintActor2; /* Ofs: 0x418 Size: 0x8 - ObjectProperty Engine.PhysicsConstraintActor.ConstraintActor2 */
	uint8_t boolField420;
	uint8_t UnknownData421[0xF];


//	inline bool SetConstraintComp(t_structHelper inst, ExternalPtr<struct UPhysicsConstraintComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool SetConstraintActor1(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x410, value); }
	inline bool SetConstraintActor2(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x418, value); }
	inline bool bDisableCollision()
	{
		return boolField420& 0x1;
	}
	inline bool SetbDisableCollision(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x420, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPhysicsConstraintActor = sizeof(UPhysicsConstraintActor); // 1072
    static_assert(sizeof(UPhysicsConstraintActor) == 0x430, "Size of UPhysicsConstraintActor is not correct.");
//	auto constexpr UPhysicsConstraintActor_ConstraintComp_Offset = offsetof(UPhysicsConstraintActor, ConstraintComp);
//	static_assert(UPhysicsConstraintActor_ConstraintComp_Offset == 0x408, "UPhysicsConstraintActor::ConstraintComp offset is not 408");
	auto constexpr UPhysicsConstraintActor_ConstraintActor1_Offset = offsetof(UPhysicsConstraintActor, ConstraintActor1);
	static_assert(UPhysicsConstraintActor_ConstraintActor1_Offset == 0x410, "UPhysicsConstraintActor::ConstraintActor1 offset is not 410");
	auto constexpr UPhysicsConstraintActor_ConstraintActor2_Offset = offsetof(UPhysicsConstraintActor, ConstraintActor2);
	static_assert(UPhysicsConstraintActor_ConstraintActor2_Offset == 0x418, "UPhysicsConstraintActor::ConstraintActor2 offset is not 418");
	auto constexpr UPhysicsConstraintActor_boolField420_Offset = offsetof(UPhysicsConstraintActor, boolField420);
	static_assert(UPhysicsConstraintActor_boolField420_Offset == 0x420, "UPhysicsConstraintActor::boolField420 offset is not 420");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
