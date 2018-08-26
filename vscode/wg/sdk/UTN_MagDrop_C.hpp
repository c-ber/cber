#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTN_MagDrop_C // Size: 0x418
	: public UActor // Size: 0x410
{
private:
	typedef UTN_MagDrop_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88737); // id32("BlueprintGeneratedClass TN_MagDrop.TN_MagDrop_C")
		return ptr;
	}
	ExternalPtr<struct UStaticMeshComponent> StaticMesh; /* Ofs: 0x410 Size: 0x8 - ObjectProperty TN_MagDrop.TN_MagDrop_C.StaticMesh */


	inline bool SetStaticMesh(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x410, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTN_MagDrop_C = sizeof(UTN_MagDrop_C); // 1048
    static_assert(sizeof(UTN_MagDrop_C) == 0x418, "Size of UTN_MagDrop_C is not correct.");
	auto constexpr UTN_MagDrop_C_StaticMesh_Offset = offsetof(UTN_MagDrop_C, StaticMesh);
	static_assert(UTN_MagDrop_C_StaticMesh_Offset == 0x410, "UTN_MagDrop_C::StaticMesh offset is not 410");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
