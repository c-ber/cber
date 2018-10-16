#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPhysicsAsset // Size: 0x118
	: public UObject // Size: 0x30
{
private:
	typedef UPhysicsAsset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(678); // id32("Class Engine.PhysicsAsset")
		return ptr;
	}
	TArray<int32_t> BoundsBodies; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.PhysicsAsset.BoundsBodies */
	TArray<ExternalPtr<struct USkeletalBodySetup>> SkeletalBodySetups; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.PhysicsAsset.SkeletalBodySetups */
	TArray<ExternalPtr<struct UPhysicsConstraintTemplate>> ConstraintSetup; /* Ofs: 0x50 Size: 0x10 - ArrayProperty Engine.PhysicsAsset.ConstraintSetup */
	uint8_t boolField60;
	uint8_t UnknownData61[0xA7];
	TArray<ExternalPtr<struct UBodySetup>> BodySetup; /* Ofs: 0x108 Size: 0x10 - ArrayProperty Engine.PhysicsAsset.BodySetup */


	inline bool SetBoundsBodies(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x30, value); }
	inline bool SetSkeletalBodySetups(t_structHelper inst, TArray<ExternalPtr<struct USkeletalBodySetup>> value) { inst.WriteOffset(0x40, value); }
	inline bool SetConstraintSetup(t_structHelper inst, TArray<ExternalPtr<struct UPhysicsConstraintTemplate>> value) { inst.WriteOffset(0x50, value); }
	inline bool bUseAsyncScene()
	{
		return boolField60& 0x1;
	}
	inline bool SetbUseAsyncScene(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x60, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBodySetup(t_structHelper inst, TArray<ExternalPtr<struct UBodySetup>> value) { inst.WriteOffset(0x108, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPhysicsAsset = sizeof(UPhysicsAsset); // 280
    static_assert(sizeof(UPhysicsAsset) == 0x118, "Size of UPhysicsAsset is not correct.");
	auto constexpr UPhysicsAsset_BoundsBodies_Offset = offsetof(UPhysicsAsset, BoundsBodies);
	static_assert(UPhysicsAsset_BoundsBodies_Offset == 0x30, "UPhysicsAsset::BoundsBodies offset is not 30");
	auto constexpr UPhysicsAsset_SkeletalBodySetups_Offset = offsetof(UPhysicsAsset, SkeletalBodySetups);
	static_assert(UPhysicsAsset_SkeletalBodySetups_Offset == 0x40, "UPhysicsAsset::SkeletalBodySetups offset is not 40");
	auto constexpr UPhysicsAsset_ConstraintSetup_Offset = offsetof(UPhysicsAsset, ConstraintSetup);
	static_assert(UPhysicsAsset_ConstraintSetup_Offset == 0x50, "UPhysicsAsset::ConstraintSetup offset is not 50");
	auto constexpr UPhysicsAsset_boolField60_Offset = offsetof(UPhysicsAsset, boolField60);
	static_assert(UPhysicsAsset_boolField60_Offset == 0x60, "UPhysicsAsset::boolField60 offset is not 60");
	auto constexpr UPhysicsAsset_BodySetup_Offset = offsetof(UPhysicsAsset, BodySetup);
	static_assert(UPhysicsAsset_BodySetup_Offset == 0x108, "UPhysicsAsset::BodySetup offset is not 108");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
