#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_GrenadeRing_C // Size: 0x420
	: public UActor // Size: 0x410
{
private:
	typedef UBP_GrenadeRing_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(127498); // id32("BlueprintGeneratedClass BP_GrenadeRing.BP_GrenadeRing_C")
		return ptr;
	}
	ExternalPtr<struct UStaticMeshComponent> StaticMesh; /* Ofs: 0x410 Size: 0x8 - ObjectProperty BP_GrenadeRing.BP_GrenadeRing_C.StaticMesh */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x418 Size: 0x8 - ObjectProperty BP_GrenadeRing.BP_GrenadeRing_C.DefaultSceneRoot */


	inline bool SetStaticMesh(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x410, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x418, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_GrenadeRing_C = sizeof(UBP_GrenadeRing_C); // 1056
    static_assert(sizeof(UBP_GrenadeRing_C) == 0x420, "Size of UBP_GrenadeRing_C is not correct.");
	auto constexpr UBP_GrenadeRing_C_StaticMesh_Offset = offsetof(UBP_GrenadeRing_C, StaticMesh);
	static_assert(UBP_GrenadeRing_C_StaticMesh_Offset == 0x410, "UBP_GrenadeRing_C::StaticMesh offset is not 410");
	auto constexpr UBP_GrenadeRing_C_DefaultSceneRoot_Offset = offsetof(UBP_GrenadeRing_C, DefaultSceneRoot);
	static_assert(UBP_GrenadeRing_C_DefaultSceneRoot_Offset == 0x418, "UBP_GrenadeRing_C::DefaultSceneRoot offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
