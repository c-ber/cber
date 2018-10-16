#pragma once
#include "FVector_NetQuantize.hpp"
#include "FVector_NetQuantizeNormal.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FHitResult // Size: 0x88
{
public:
    bool bBlockingHit : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.HitResult.bBlockingHit */
    bool bStartPenetrating : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty Engine.HitResult.bStartPenetrating */
    uint8_t UnknownData1[0x3];
    float Time; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.HitResult.Time */
    float Distance; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.HitResult.Distance */
    FVector_NetQuantize Location; /* Ofs: 0xC Size: 0xC StructProperty Engine.HitResult.Location */
    FVector_NetQuantize ImpactPoint; /* Ofs: 0x18 Size: 0xC StructProperty Engine.HitResult.ImpactPoint */
    FVector_NetQuantizeNormal Normal; /* Ofs: 0x24 Size: 0xC StructProperty Engine.HitResult.Normal */
    FVector_NetQuantizeNormal ImpactNormal; /* Ofs: 0x30 Size: 0xC StructProperty Engine.HitResult.ImpactNormal */
    FVector_NetQuantize TraceStart; /* Ofs: 0x3C Size: 0xC StructProperty Engine.HitResult.TraceStart */
    FVector_NetQuantize TraceEnd; /* Ofs: 0x48 Size: 0xC StructProperty Engine.HitResult.TraceEnd */
    float PenetrationDepth; /* Ofs: 0x54 Size: 0x4 FloatProperty Engine.HitResult.PenetrationDepth */
    int32_t Item; /* Ofs: 0x58 Size: 0x4 IntProperty Engine.HitResult.Item */
    TWeakObjectPtr<ExternalPtr<struct UPhysicalMaterial>> PhysMaterial; /* Ofs: 0x5C Size: 0x8 WeakObjectProperty Engine.HitResult.PhysMaterial */
    TWeakObjectPtr<ExternalPtr<struct UActor>> Actor; /* Ofs: 0x64 Size: 0x8 WeakObjectProperty Engine.HitResult.Actor */
    TWeakObjectPtr<ExternalPtr<struct UPrimitiveComponent>> Component; /* Ofs: 0x6C Size: 0x8 WeakObjectProperty Engine.HitResult.Component */
    uint8_t UnknownData74[0x4];
    FName BoneName; /* Ofs: 0x78 Size: 0x8 NameProperty Engine.HitResult.BoneName */
    int32_t FaceIndex; /* Ofs: 0x80 Size: 0x4 IntProperty Engine.HitResult.FaceIndex */
    uint8_t UnknownData84[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFHitResult = sizeof(FHitResult); // 136
    static_assert(sizeof(FHitResult) == 0x88, "Size of FHitResult is not correct.");
	auto constexpr FHitResult_Time_Offset = offsetof(FHitResult, Time);
	static_assert(FHitResult_Time_Offset == 0x4, "FHitResult::Time offset is not 4");
	auto constexpr FHitResult_Distance_Offset = offsetof(FHitResult, Distance);
	static_assert(FHitResult_Distance_Offset == 0x8, "FHitResult::Distance offset is not 8");
	auto constexpr FHitResult_Location_Offset = offsetof(FHitResult, Location);
	static_assert(FHitResult_Location_Offset == 0xc, "FHitResult::Location offset is not c");
	auto constexpr FHitResult_ImpactPoint_Offset = offsetof(FHitResult, ImpactPoint);
	static_assert(FHitResult_ImpactPoint_Offset == 0x18, "FHitResult::ImpactPoint offset is not 18");
	auto constexpr FHitResult_Normal_Offset = offsetof(FHitResult, Normal);
	static_assert(FHitResult_Normal_Offset == 0x24, "FHitResult::Normal offset is not 24");
	auto constexpr FHitResult_ImpactNormal_Offset = offsetof(FHitResult, ImpactNormal);
	static_assert(FHitResult_ImpactNormal_Offset == 0x30, "FHitResult::ImpactNormal offset is not 30");
	auto constexpr FHitResult_TraceStart_Offset = offsetof(FHitResult, TraceStart);
	static_assert(FHitResult_TraceStart_Offset == 0x3c, "FHitResult::TraceStart offset is not 3c");
	auto constexpr FHitResult_TraceEnd_Offset = offsetof(FHitResult, TraceEnd);
	static_assert(FHitResult_TraceEnd_Offset == 0x48, "FHitResult::TraceEnd offset is not 48");
	auto constexpr FHitResult_PenetrationDepth_Offset = offsetof(FHitResult, PenetrationDepth);
	static_assert(FHitResult_PenetrationDepth_Offset == 0x54, "FHitResult::PenetrationDepth offset is not 54");
	auto constexpr FHitResult_Item_Offset = offsetof(FHitResult, Item);
	static_assert(FHitResult_Item_Offset == 0x58, "FHitResult::Item offset is not 58");
	auto constexpr FHitResult_PhysMaterial_Offset = offsetof(FHitResult, PhysMaterial);
	static_assert(FHitResult_PhysMaterial_Offset == 0x5c, "FHitResult::PhysMaterial offset is not 5c");
	auto constexpr FHitResult_Actor_Offset = offsetof(FHitResult, Actor);
	static_assert(FHitResult_Actor_Offset == 0x64, "FHitResult::Actor offset is not 64");
	auto constexpr FHitResult_Component_Offset = offsetof(FHitResult, Component);
	static_assert(FHitResult_Component_Offset == 0x6c, "FHitResult::Component offset is not 6c");
	auto constexpr FHitResult_BoneName_Offset = offsetof(FHitResult, BoneName);
	static_assert(FHitResult_BoneName_Offset == 0x78, "FHitResult::BoneName offset is not 78");
	auto constexpr FHitResult_FaceIndex_Offset = offsetof(FHitResult, FaceIndex);
	static_assert(FHitResult_FaceIndex_Offset == 0x80, "FHitResult::FaceIndex offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
