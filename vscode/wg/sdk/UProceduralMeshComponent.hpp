#pragma once
#include "UMeshComponent.hpp"
#include "FBoxSphereBounds.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProceduralMeshComponent // Size: 0xA50
	: public UMeshComponent // Size: 0x9F0
{
private:
	typedef UProceduralMeshComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2048); // id32("Class ProceduralMeshComponent.ProceduralMeshComponent")
		return ptr;
	}
	uint8_t UnknownData9F0[0x8];
	uint8_t boolField9F8;
	uint8_t UnknownData9F9[0x7];
	ExternalPtr<struct UBodySetup> ProcMeshBodySetup; /* Ofs: 0xA00 Size: 0x8 - ObjectProperty ProceduralMeshComponent.ProceduralMeshComponent.ProcMeshBodySetup */
	TArray<struct FProcMeshSection> ProcMeshSections; /* Ofs: 0xA08 Size: 0x10 - ArrayProperty ProceduralMeshComponent.ProceduralMeshComponent.ProcMeshSections */
	TArray<struct FKConvexElem> CollisionConvexElems; /* Ofs: 0xA18 Size: 0x10 - ArrayProperty ProceduralMeshComponent.ProceduralMeshComponent.CollisionConvexElems */
	FBoxSphereBounds LocalBounds; /* Ofs: 0xA28 Size: 0x1C - StructProperty ProceduralMeshComponent.ProceduralMeshComponent.LocalBounds */
	uint8_t UnknownDataA44[0xC];


	inline bool bUseComplexAsSimpleCollision()
	{
		return boolField9F8& 0x1;
	}
	inline bool SetbUseComplexAsSimpleCollision(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9F8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetProcMeshBodySetup(t_structHelper inst, ExternalPtr<struct UBodySetup> value) { inst.WriteOffset(0xA00, value); }
	inline bool SetProcMeshSections(t_structHelper inst, TArray<struct FProcMeshSection> value) { inst.WriteOffset(0xA08, value); }
	inline bool SetCollisionConvexElems(t_structHelper inst, TArray<struct FKConvexElem> value) { inst.WriteOffset(0xA18, value); }
	inline bool SetLocalBounds(t_structHelper inst, FBoxSphereBounds value) { inst.WriteOffset(0xA28, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProceduralMeshComponent = sizeof(UProceduralMeshComponent); // 2640
    static_assert(sizeof(UProceduralMeshComponent) == 0xA50, "Size of UProceduralMeshComponent is not correct.");
	auto constexpr UProceduralMeshComponent_boolField9F8_Offset = offsetof(UProceduralMeshComponent, boolField9F8);
	static_assert(UProceduralMeshComponent_boolField9F8_Offset == 0x9f8, "UProceduralMeshComponent::boolField9F8 offset is not 9f8");
	auto constexpr UProceduralMeshComponent_ProcMeshBodySetup_Offset = offsetof(UProceduralMeshComponent, ProcMeshBodySetup);
	static_assert(UProceduralMeshComponent_ProcMeshBodySetup_Offset == 0xa00, "UProceduralMeshComponent::ProcMeshBodySetup offset is not a00");
	auto constexpr UProceduralMeshComponent_ProcMeshSections_Offset = offsetof(UProceduralMeshComponent, ProcMeshSections);
	static_assert(UProceduralMeshComponent_ProcMeshSections_Offset == 0xa08, "UProceduralMeshComponent::ProcMeshSections offset is not a08");
	auto constexpr UProceduralMeshComponent_CollisionConvexElems_Offset = offsetof(UProceduralMeshComponent, CollisionConvexElems);
	static_assert(UProceduralMeshComponent_CollisionConvexElems_Offset == 0xa18, "UProceduralMeshComponent::CollisionConvexElems offset is not a18");
	auto constexpr UProceduralMeshComponent_LocalBounds_Offset = offsetof(UProceduralMeshComponent, LocalBounds);
	static_assert(UProceduralMeshComponent_LocalBounds_Offset == 0xa28, "UProceduralMeshComponent::LocalBounds offset is not a28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
