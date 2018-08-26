#pragma once
#include "UTslDamageFieldContainer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProjMolotov_DamageFieldContainerInWall_C // Size: 0x458
	: public UTslDamageFieldContainer // Size: 0x450
{
private:
	typedef UProjMolotov_DamageFieldContainerInWall_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(128526); // id32("BlueprintGeneratedClass ProjMolotov_DamageFieldContainerInWall.ProjMolotov_DamageFieldContainerInWall_C")
		return ptr;
	}
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x450 Size: 0x8 - ObjectProperty ProjMolotov_DamageFieldContainerInWall.ProjMolotov_DamageFieldContainerInWall_C.DefaultSceneRoot */


	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x450, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProjMolotov_DamageFieldContainerInWall_C = sizeof(UProjMolotov_DamageFieldContainerInWall_C); // 1112
    static_assert(sizeof(UProjMolotov_DamageFieldContainerInWall_C) == 0x458, "Size of UProjMolotov_DamageFieldContainerInWall_C is not correct.");
	auto constexpr UProjMolotov_DamageFieldContainerInWall_C_DefaultSceneRoot_Offset = offsetof(UProjMolotov_DamageFieldContainerInWall_C, DefaultSceneRoot);
	static_assert(UProjMolotov_DamageFieldContainerInWall_C_DefaultSceneRoot_Offset == 0x450, "UProjMolotov_DamageFieldContainerInWall_C::DefaultSceneRoot offset is not 450");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
