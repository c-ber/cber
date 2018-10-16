#pragma once
#include "USkeletalMesh.hpp"
#include "FDestructibleParameters.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDestructibleMesh // Size: 0x390
	: public USkeletalMesh // Size: 0x2F0
{
private:
	typedef UDestructibleMesh t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1196); // id32("Class Engine.DestructibleMesh")
		return ptr;
	}
	FDestructibleParameters DefaultDestructibleParameters; /* Ofs: 0x2F0 Size: 0x88 - StructProperty Engine.DestructibleMesh.DefaultDestructibleParameters */
	TArray<struct FFractureEffect> FractureEffects; /* Ofs: 0x378 Size: 0x10 - ArrayProperty Engine.DestructibleMesh.FractureEffects */
	uint8_t UnknownData388[0x8];


	inline bool SetDefaultDestructibleParameters(t_structHelper inst, FDestructibleParameters value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetFractureEffects(t_structHelper inst, TArray<struct FFractureEffect> value) { inst.WriteOffset(0x378, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDestructibleMesh = sizeof(UDestructibleMesh); // 912
    static_assert(sizeof(UDestructibleMesh) == 0x390, "Size of UDestructibleMesh is not correct.");
	auto constexpr UDestructibleMesh_DefaultDestructibleParameters_Offset = offsetof(UDestructibleMesh, DefaultDestructibleParameters);
	static_assert(UDestructibleMesh_DefaultDestructibleParameters_Offset == 0x2f0, "UDestructibleMesh::DefaultDestructibleParameters offset is not 2f0");
	auto constexpr UDestructibleMesh_FractureEffects_Offset = offsetof(UDestructibleMesh, FractureEffects);
	static_assert(UDestructibleMesh_FractureEffects_Offset == 0x378, "UDestructibleMesh::FractureEffects offset is not 378");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
