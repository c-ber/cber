#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDecalActor // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UDecalActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1734); // id32("Class Engine.DecalActor")
		return ptr;
	}
//	ExternalPtr<struct UDecalComponent> Decal; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.DecalActor.Decal */


//	inline bool SetDecal(t_structHelper inst, ExternalPtr<struct UDecalComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDecalActor = sizeof(UDecalActor); // 1040
    static_assert(sizeof(UDecalActor) == 0x410, "Size of UDecalActor is not correct.");
//	auto constexpr UDecalActor_Decal_Offset = offsetof(UDecalActor, Decal);
//	static_assert(UDecalActor_Decal_Offset == 0x408, "UDecalActor::Decal offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
