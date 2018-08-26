#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Shield_C // Size: 0x428
	: public UActor // Size: 0x410
{
private:
	typedef UBP_Shield_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88703); // id32("BlueprintGeneratedClass BP_Shield.BP_Shield_C")
		return ptr;
	}
	ExternalPtr<struct UStaticMeshComponent> DecalMesh; /* Ofs: 0x410 Size: 0x8 - ObjectProperty BP_Shield.BP_Shield_C.DecalMesh */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh; /* Ofs: 0x418 Size: 0x8 - ObjectProperty BP_Shield.BP_Shield_C.StaticMesh */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x420 Size: 0x8 - ObjectProperty BP_Shield.BP_Shield_C.DefaultSceneRoot */


	inline bool SetDecalMesh(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x410, value); }
	inline bool SetStaticMesh(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x420, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Shield_C = sizeof(UBP_Shield_C); // 1064
    static_assert(sizeof(UBP_Shield_C) == 0x428, "Size of UBP_Shield_C is not correct.");
	auto constexpr UBP_Shield_C_DecalMesh_Offset = offsetof(UBP_Shield_C, DecalMesh);
	static_assert(UBP_Shield_C_DecalMesh_Offset == 0x410, "UBP_Shield_C::DecalMesh offset is not 410");
	auto constexpr UBP_Shield_C_StaticMesh_Offset = offsetof(UBP_Shield_C, StaticMesh);
	static_assert(UBP_Shield_C_StaticMesh_Offset == 0x418, "UBP_Shield_C::StaticMesh offset is not 418");
	auto constexpr UBP_Shield_C_DefaultSceneRoot_Offset = offsetof(UBP_Shield_C, DefaultSceneRoot);
	static_assert(UBP_Shield_C_DefaultSceneRoot_Offset == 0x420, "UBP_Shield_C::DefaultSceneRoot offset is not 420");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
