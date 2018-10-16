#pragma once
#include "UPawn.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDefaultPawn // Size: 0x4A0
	: public UPawn // Size: 0x470
{
private:
	typedef UDefaultPawn t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1499); // id32("Class Engine.DefaultPawn")
		return ptr;
	}
	float BaseTurnRate; /* Ofs: 0x470 Size: 0x4 - FloatProperty Engine.DefaultPawn.BaseTurnRate */
	float BaseLookUpRate; /* Ofs: 0x474 Size: 0x4 - FloatProperty Engine.DefaultPawn.BaseLookUpRate */
	ExternalPtr<struct UPawnMovementComponent> MovementComponent; /* Ofs: 0x478 Size: 0x8 - ObjectProperty Engine.DefaultPawn.MovementComponent */
	ExternalPtr<struct USphereComponent> CollisionComponent; /* Ofs: 0x480 Size: 0x8 - ObjectProperty Engine.DefaultPawn.CollisionComponent */
	ExternalPtr<struct UStaticMeshComponent> MeshComponent; /* Ofs: 0x488 Size: 0x8 - ObjectProperty Engine.DefaultPawn.MeshComponent */
	uint8_t boolField490;
	uint8_t UnknownData491[0xF];


	inline bool SetBaseTurnRate(t_structHelper inst, float value) { inst.WriteOffset(0x470, value); }
	inline bool SetBaseLookUpRate(t_structHelper inst, float value) { inst.WriteOffset(0x474, value); }
	inline bool SetMovementComponent(t_structHelper inst, ExternalPtr<struct UPawnMovementComponent> value) { inst.WriteOffset(0x478, value); }
	inline bool SetCollisionComponent(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x480, value); }
	inline bool SetMeshComponent(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x488, value); }
	inline bool bAddDefaultMovementBindings()
	{
		return boolField490& 0x1;
	}
	inline bool SetbAddDefaultMovementBindings(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x490, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDefaultPawn = sizeof(UDefaultPawn); // 1184
    static_assert(sizeof(UDefaultPawn) == 0x4A0, "Size of UDefaultPawn is not correct.");
	auto constexpr UDefaultPawn_BaseTurnRate_Offset = offsetof(UDefaultPawn, BaseTurnRate);
	static_assert(UDefaultPawn_BaseTurnRate_Offset == 0x470, "UDefaultPawn::BaseTurnRate offset is not 470");
	auto constexpr UDefaultPawn_BaseLookUpRate_Offset = offsetof(UDefaultPawn, BaseLookUpRate);
	static_assert(UDefaultPawn_BaseLookUpRate_Offset == 0x474, "UDefaultPawn::BaseLookUpRate offset is not 474");
	auto constexpr UDefaultPawn_MovementComponent_Offset = offsetof(UDefaultPawn, MovementComponent);
	static_assert(UDefaultPawn_MovementComponent_Offset == 0x478, "UDefaultPawn::MovementComponent offset is not 478");
	auto constexpr UDefaultPawn_CollisionComponent_Offset = offsetof(UDefaultPawn, CollisionComponent);
	static_assert(UDefaultPawn_CollisionComponent_Offset == 0x480, "UDefaultPawn::CollisionComponent offset is not 480");
	auto constexpr UDefaultPawn_MeshComponent_Offset = offsetof(UDefaultPawn, MeshComponent);
	static_assert(UDefaultPawn_MeshComponent_Offset == 0x488, "UDefaultPawn::MeshComponent offset is not 488");
	auto constexpr UDefaultPawn_boolField490_Offset = offsetof(UDefaultPawn, boolField490);
	static_assert(UDefaultPawn_boolField490_Offset == 0x490, "UDefaultPawn::boolField490 offset is not 490");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
