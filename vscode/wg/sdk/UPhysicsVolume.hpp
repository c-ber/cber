#pragma once
#include "UVolume.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPhysicsVolume // Size: 0x450
	: public UVolume // Size: 0x440
{
private:
	typedef UPhysicsVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1474); // id32("Class Engine.PhysicsVolume")
		return ptr;
	}
	float TerminalVelocity; /* Ofs: 0x440 Size: 0x4 - FloatProperty Engine.PhysicsVolume.TerminalVelocity */
	int32_t Priority; /* Ofs: 0x444 Size: 0x4 - IntProperty Engine.PhysicsVolume.Priority */
	float FluidFriction; /* Ofs: 0x448 Size: 0x4 - FloatProperty Engine.PhysicsVolume.FluidFriction */
	uint8_t boolField44C;
	uint8_t UnknownData44D[0x3];


	inline bool SetTerminalVelocity(t_structHelper inst, float value) { inst.WriteOffset(0x440, value); }
	inline bool SetPriority(t_structHelper inst, int32_t value) { inst.WriteOffset(0x444, value); }
	inline bool SetFluidFriction(t_structHelper inst, float value) { inst.WriteOffset(0x448, value); }
	inline bool bWaterVolume()
	{
		return boolField44C& 0x1;
	}
	inline bool SetbWaterVolume(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x44C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bPhysicsOnContact()
	{
		return boolField44C& 0x2;
	}
	inline bool SetbPhysicsOnContact(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x44C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPhysicsVolume = sizeof(UPhysicsVolume); // 1104
    static_assert(sizeof(UPhysicsVolume) == 0x450, "Size of UPhysicsVolume is not correct.");
	auto constexpr UPhysicsVolume_TerminalVelocity_Offset = offsetof(UPhysicsVolume, TerminalVelocity);
	static_assert(UPhysicsVolume_TerminalVelocity_Offset == 0x440, "UPhysicsVolume::TerminalVelocity offset is not 440");
	auto constexpr UPhysicsVolume_Priority_Offset = offsetof(UPhysicsVolume, Priority);
	static_assert(UPhysicsVolume_Priority_Offset == 0x444, "UPhysicsVolume::Priority offset is not 444");
	auto constexpr UPhysicsVolume_FluidFriction_Offset = offsetof(UPhysicsVolume, FluidFriction);
	static_assert(UPhysicsVolume_FluidFriction_Offset == 0x448, "UPhysicsVolume::FluidFriction offset is not 448");
	auto constexpr UPhysicsVolume_boolField44C_Offset = offsetof(UPhysicsVolume, boolField44C);
	static_assert(UPhysicsVolume_boolField44C_Offset == 0x44c, "UPhysicsVolume::boolField44C offset is not 44c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
