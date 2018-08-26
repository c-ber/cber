#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVectorFieldVolume // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UVectorFieldVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1795); // id32("Class Engine.VectorFieldVolume")
		return ptr;
	}
//	ExternalPtr<struct UVectorFieldComponent> VectorFieldComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.VectorFieldVolume.VectorFieldComponent */


//	inline bool SetVectorFieldComponent(t_structHelper inst, ExternalPtr<struct UVectorFieldComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVectorFieldVolume = sizeof(UVectorFieldVolume); // 1040
    static_assert(sizeof(UVectorFieldVolume) == 0x410, "Size of UVectorFieldVolume is not correct.");
//	auto constexpr UVectorFieldVolume_VectorFieldComponent_Offset = offsetof(UVectorFieldVolume, VectorFieldComponent);
//	static_assert(UVectorFieldVolume_VectorFieldComponent_Offset == 0x408, "UVectorFieldVolume::VectorFieldComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
