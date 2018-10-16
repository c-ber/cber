#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParachuteTest_C // Size: 0x420
	: public UActor // Size: 0x410
{
private:
	typedef UParachuteTest_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(126407); // id32("BlueprintGeneratedClass ParachuteTest.ParachuteTest_C")
		return ptr;
	}
	ExternalPtr<struct USkeletalMeshComponent> SkeletalMesh; /* Ofs: 0x410 Size: 0x8 - ObjectProperty ParachuteTest.ParachuteTest_C.SkeletalMesh */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x418 Size: 0x8 - ObjectProperty ParachuteTest.ParachuteTest_C.DefaultSceneRoot */


	inline bool SetSkeletalMesh(t_structHelper inst, ExternalPtr<struct USkeletalMeshComponent> value) { inst.WriteOffset(0x410, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x418, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParachuteTest_C = sizeof(UParachuteTest_C); // 1056
    static_assert(sizeof(UParachuteTest_C) == 0x420, "Size of UParachuteTest_C is not correct.");
	auto constexpr UParachuteTest_C_SkeletalMesh_Offset = offsetof(UParachuteTest_C, SkeletalMesh);
	static_assert(UParachuteTest_C_SkeletalMesh_Offset == 0x410, "UParachuteTest_C::SkeletalMesh offset is not 410");
	auto constexpr UParachuteTest_C_DefaultSceneRoot_Offset = offsetof(UParachuteTest_C, DefaultSceneRoot);
	static_assert(UParachuteTest_C_DefaultSceneRoot_Offset == 0x418, "UParachuteTest_C::DefaultSceneRoot offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
