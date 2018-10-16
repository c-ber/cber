#pragma once
#include "UTslDamageFieldContainer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProjMolotov_DamageFieldContainer_C // Size: 0x458
	: public UTslDamageFieldContainer // Size: 0x450
{
private:
	typedef UProjMolotov_DamageFieldContainer_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(128532); // id32("BlueprintGeneratedClass ProjMolotov_DamageFieldContainer.ProjMolotov_DamageFieldContainer_C")
		return ptr;
	}
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x450 Size: 0x8 - ObjectProperty ProjMolotov_DamageFieldContainer.ProjMolotov_DamageFieldContainer_C.DefaultSceneRoot */


	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x450, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProjMolotov_DamageFieldContainer_C = sizeof(UProjMolotov_DamageFieldContainer_C); // 1112
    static_assert(sizeof(UProjMolotov_DamageFieldContainer_C) == 0x458, "Size of UProjMolotov_DamageFieldContainer_C is not correct.");
	auto constexpr UProjMolotov_DamageFieldContainer_C_DefaultSceneRoot_Offset = offsetof(UProjMolotov_DamageFieldContainer_C, DefaultSceneRoot);
	static_assert(UProjMolotov_DamageFieldContainer_C_DefaultSceneRoot_Offset == 0x450, "UProjMolotov_DamageFieldContainer_C::DefaultSceneRoot offset is not 450");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
