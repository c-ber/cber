#pragma once
#include "UTslDamageField.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProjMolotov_DamageFieldInWall_C // Size: 0x468
	: public UTslDamageField // Size: 0x460
{
private:
	typedef UProjMolotov_DamageFieldInWall_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(128149); // id32("BlueprintGeneratedClass ProjMolotov_DamageFieldInWall.ProjMolotov_DamageFieldInWall_C")
		return ptr;
	}
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x460 Size: 0x8 - ObjectProperty ProjMolotov_DamageFieldInWall.ProjMolotov_DamageFieldInWall_C.DefaultSceneRoot */


	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x460, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProjMolotov_DamageFieldInWall_C = sizeof(UProjMolotov_DamageFieldInWall_C); // 1128
    static_assert(sizeof(UProjMolotov_DamageFieldInWall_C) == 0x468, "Size of UProjMolotov_DamageFieldInWall_C is not correct.");
	auto constexpr UProjMolotov_DamageFieldInWall_C_DefaultSceneRoot_Offset = offsetof(UProjMolotov_DamageFieldInWall_C, DefaultSceneRoot);
	static_assert(UProjMolotov_DamageFieldInWall_C_DefaultSceneRoot_Offset == 0x460, "UProjMolotov_DamageFieldInWall_C::DefaultSceneRoot offset is not 460");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
