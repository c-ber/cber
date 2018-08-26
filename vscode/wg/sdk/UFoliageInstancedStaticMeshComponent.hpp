#pragma once
#include "UHierarchicalInstancedStaticMeshComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFoliageInstancedStaticMeshComponent // Size: 0xCC0
	: public UHierarchicalInstancedStaticMeshComponent // Size: 0xCA0
{
private:
	typedef UFoliageInstancedStaticMeshComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(386); // id32("Class Foliage.FoliageInstancedStaticMeshComponent")
		return ptr;
	}
//	FScriptMulticastDelegate OnInstanceTakePointDamage; /* Ofs: 0xC98 Size: 0x10 - MulticastDelegateProperty Foliage.FoliageInstancedStaticMeshComponent.OnInstanceTakePointDamage */
	uint8_t UnknownDataCA0[0x8];
	FScriptMulticastDelegate OnInstanceTakeRadialDamage; /* Ofs: 0xCA8 Size: 0x10 - MulticastDelegateProperty Foliage.FoliageInstancedStaticMeshComponent.OnInstanceTakeRadialDamage */
	uint8_t UnknownDataCB8[0x8];


//	inline bool SetOnInstanceTakePointDamage(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xC98, value); }
	inline bool SetOnInstanceTakeRadialDamage(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xCA8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFoliageInstancedStaticMeshComponent = sizeof(UFoliageInstancedStaticMeshComponent); // 3264
    static_assert(sizeof(UFoliageInstancedStaticMeshComponent) == 0xCC0, "Size of UFoliageInstancedStaticMeshComponent is not correct.");
//	auto constexpr UFoliageInstancedStaticMeshComponent_OnInstanceTakePointDamage_Offset = offsetof(UFoliageInstancedStaticMeshComponent, OnInstanceTakePointDamage);
//	static_assert(UFoliageInstancedStaticMeshComponent_OnInstanceTakePointDamage_Offset == 0xc98, "UFoliageInstancedStaticMeshComponent::OnInstanceTakePointDamage offset is not c98");
	auto constexpr UFoliageInstancedStaticMeshComponent_OnInstanceTakeRadialDamage_Offset = offsetof(UFoliageInstancedStaticMeshComponent, OnInstanceTakeRadialDamage);
	static_assert(UFoliageInstancedStaticMeshComponent_OnInstanceTakeRadialDamage_Offset == 0xca8, "UFoliageInstancedStaticMeshComponent::OnInstanceTakeRadialDamage offset is not ca8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
