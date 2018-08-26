#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialInstanceActor // Size: 0x420
	: public UActor // Size: 0x410
{
private:
	typedef UMaterialInstanceActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1755); // id32("Class Engine.MaterialInstanceActor")
		return ptr;
	}
//	TArray<ExternalPtr<struct UActor>> TargetActors; /* Ofs: 0x408 Size: 0x10 - ArrayProperty Engine.MaterialInstanceActor.TargetActors */
	uint8_t UnknownData410[0x10];


//	inline bool SetTargetActors(t_structHelper inst, TArray<ExternalPtr<struct UActor>> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialInstanceActor = sizeof(UMaterialInstanceActor); // 1056
    static_assert(sizeof(UMaterialInstanceActor) == 0x420, "Size of UMaterialInstanceActor is not correct.");
//	auto constexpr UMaterialInstanceActor_TargetActors_Offset = offsetof(UMaterialInstanceActor, TargetActors);
//	static_assert(UMaterialInstanceActor_TargetActors_Offset == 0x408, "UMaterialInstanceActor::TargetActors offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
