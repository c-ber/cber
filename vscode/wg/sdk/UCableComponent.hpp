#pragma once
#include "UMeshComponent.hpp"
#include "FComponentReference.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCableComponent // Size: 0xA70
	: public UMeshComponent // Size: 0x9F0
{
private:
	typedef UCableComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2126); // id32("Class CableComponent.CableComponent")
		return ptr;
	}
	uint8_t boolField9F0;
	uint8_t boolField9F1;
	uint8_t UnknownData9F2[0x6];
	FComponentReference AttachEndTo; /* Ofs: 0x9F8 Size: 0x18 - StructProperty CableComponent.CableComponent.AttachEndTo */
	FName AttachEndToSocketName; /* Ofs: 0xA10 Size: 0x8 - NameProperty CableComponent.CableComponent.AttachEndToSocketName */
	FVector EndLocation; /* Ofs: 0xA18 Size: 0xC - StructProperty CableComponent.CableComponent.EndLocation */
	float CableLength; /* Ofs: 0xA24 Size: 0x4 - FloatProperty CableComponent.CableComponent.CableLength */
	int32_t NumSegments; /* Ofs: 0xA28 Size: 0x4 - IntProperty CableComponent.CableComponent.NumSegments */
	float SubstepTime; /* Ofs: 0xA2C Size: 0x4 - FloatProperty CableComponent.CableComponent.SubstepTime */
	int32_t SolverIterations; /* Ofs: 0xA30 Size: 0x4 - IntProperty CableComponent.CableComponent.SolverIterations */
	uint8_t boolFieldA34;
	uint8_t boolFieldA35;
	uint8_t UnknownDataA36[0x2];
	float CollisionFriction; /* Ofs: 0xA38 Size: 0x4 - FloatProperty CableComponent.CableComponent.CollisionFriction */
	FVector CableForce; /* Ofs: 0xA3C Size: 0xC - StructProperty CableComponent.CableComponent.CableForce */
	float CableGravityScale; /* Ofs: 0xA48 Size: 0x4 - FloatProperty CableComponent.CableComponent.CableGravityScale */
	float CableWidth; /* Ofs: 0xA4C Size: 0x4 - FloatProperty CableComponent.CableComponent.CableWidth */
	int32_t NumSides; /* Ofs: 0xA50 Size: 0x4 - IntProperty CableComponent.CableComponent.NumSides */
	float TileMaterial; /* Ofs: 0xA54 Size: 0x4 - FloatProperty CableComponent.CableComponent.TileMaterial */
	uint8_t UnknownDataA58[0x18];


	inline bool bAttachStart()
	{
		return boolField9F0& 0x1;
	}
	inline bool SetbAttachStart(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9F0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAttachEnd()
	{
		return boolField9F1& 0x1;
	}
	inline bool SetbAttachEnd(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9F1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAttachEndTo(t_structHelper inst, FComponentReference value) { inst.WriteOffset(0x9F8, value); }
	inline bool SetAttachEndToSocketName(t_structHelper inst, FName value) { inst.WriteOffset(0xA10, value); }
	inline bool SetEndLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0xA18, value); }
	inline bool SetCableLength(t_structHelper inst, float value) { inst.WriteOffset(0xA24, value); }
	inline bool SetNumSegments(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA28, value); }
	inline bool SetSubstepTime(t_structHelper inst, float value) { inst.WriteOffset(0xA2C, value); }
	inline bool SetSolverIterations(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA30, value); }
	inline bool bEnableStiffness()
	{
		return boolFieldA34& 0x1;
	}
	inline bool SetbEnableStiffness(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA34, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableCollision()
	{
		return boolFieldA35& 0x1;
	}
	inline bool SetbEnableCollision(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA35, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCollisionFriction(t_structHelper inst, float value) { inst.WriteOffset(0xA38, value); }
	inline bool SetCableForce(t_structHelper inst, FVector value) { inst.WriteOffset(0xA3C, value); }
	inline bool SetCableGravityScale(t_structHelper inst, float value) { inst.WriteOffset(0xA48, value); }
	inline bool SetCableWidth(t_structHelper inst, float value) { inst.WriteOffset(0xA4C, value); }
	inline bool SetNumSides(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA50, value); }
	inline bool SetTileMaterial(t_structHelper inst, float value) { inst.WriteOffset(0xA54, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCableComponent = sizeof(UCableComponent); // 2672
    static_assert(sizeof(UCableComponent) == 0xA70, "Size of UCableComponent is not correct.");
	auto constexpr UCableComponent_boolField9F0_Offset = offsetof(UCableComponent, boolField9F0);
	static_assert(UCableComponent_boolField9F0_Offset == 0x9f0, "UCableComponent::boolField9F0 offset is not 9f0");
	auto constexpr UCableComponent_boolField9F1_Offset = offsetof(UCableComponent, boolField9F1);
	static_assert(UCableComponent_boolField9F1_Offset == 0x9f1, "UCableComponent::boolField9F1 offset is not 9f1");
	auto constexpr UCableComponent_AttachEndTo_Offset = offsetof(UCableComponent, AttachEndTo);
	static_assert(UCableComponent_AttachEndTo_Offset == 0x9f8, "UCableComponent::AttachEndTo offset is not 9f8");
	auto constexpr UCableComponent_AttachEndToSocketName_Offset = offsetof(UCableComponent, AttachEndToSocketName);
	static_assert(UCableComponent_AttachEndToSocketName_Offset == 0xa10, "UCableComponent::AttachEndToSocketName offset is not a10");
	auto constexpr UCableComponent_EndLocation_Offset = offsetof(UCableComponent, EndLocation);
	static_assert(UCableComponent_EndLocation_Offset == 0xa18, "UCableComponent::EndLocation offset is not a18");
	auto constexpr UCableComponent_CableLength_Offset = offsetof(UCableComponent, CableLength);
	static_assert(UCableComponent_CableLength_Offset == 0xa24, "UCableComponent::CableLength offset is not a24");
	auto constexpr UCableComponent_NumSegments_Offset = offsetof(UCableComponent, NumSegments);
	static_assert(UCableComponent_NumSegments_Offset == 0xa28, "UCableComponent::NumSegments offset is not a28");
	auto constexpr UCableComponent_SubstepTime_Offset = offsetof(UCableComponent, SubstepTime);
	static_assert(UCableComponent_SubstepTime_Offset == 0xa2c, "UCableComponent::SubstepTime offset is not a2c");
	auto constexpr UCableComponent_SolverIterations_Offset = offsetof(UCableComponent, SolverIterations);
	static_assert(UCableComponent_SolverIterations_Offset == 0xa30, "UCableComponent::SolverIterations offset is not a30");
	auto constexpr UCableComponent_boolFieldA34_Offset = offsetof(UCableComponent, boolFieldA34);
	static_assert(UCableComponent_boolFieldA34_Offset == 0xa34, "UCableComponent::boolFieldA34 offset is not a34");
	auto constexpr UCableComponent_boolFieldA35_Offset = offsetof(UCableComponent, boolFieldA35);
	static_assert(UCableComponent_boolFieldA35_Offset == 0xa35, "UCableComponent::boolFieldA35 offset is not a35");
	auto constexpr UCableComponent_CollisionFriction_Offset = offsetof(UCableComponent, CollisionFriction);
	static_assert(UCableComponent_CollisionFriction_Offset == 0xa38, "UCableComponent::CollisionFriction offset is not a38");
	auto constexpr UCableComponent_CableForce_Offset = offsetof(UCableComponent, CableForce);
	static_assert(UCableComponent_CableForce_Offset == 0xa3c, "UCableComponent::CableForce offset is not a3c");
	auto constexpr UCableComponent_CableGravityScale_Offset = offsetof(UCableComponent, CableGravityScale);
	static_assert(UCableComponent_CableGravityScale_Offset == 0xa48, "UCableComponent::CableGravityScale offset is not a48");
	auto constexpr UCableComponent_CableWidth_Offset = offsetof(UCableComponent, CableWidth);
	static_assert(UCableComponent_CableWidth_Offset == 0xa4c, "UCableComponent::CableWidth offset is not a4c");
	auto constexpr UCableComponent_NumSides_Offset = offsetof(UCableComponent, NumSides);
	static_assert(UCableComponent_NumSides_Offset == 0xa50, "UCableComponent::NumSides offset is not a50");
	auto constexpr UCableComponent_TileMaterial_Offset = offsetof(UCableComponent, TileMaterial);
	static_assert(UCableComponent_TileMaterial_Offset == 0xa54, "UCableComponent::TileMaterial offset is not a54");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
