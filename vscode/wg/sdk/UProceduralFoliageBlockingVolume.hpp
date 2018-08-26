#pragma once
#include "UVolume.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProceduralFoliageBlockingVolume // Size: 0x450
	: public UVolume // Size: 0x440
{
private:
	typedef UProceduralFoliageBlockingVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(396); // id32("Class Foliage.ProceduralFoliageBlockingVolume")
		return ptr;
	}
	ExternalPtr<struct UProceduralFoliageVolume> ProceduralFoliageVolume; /* Ofs: 0x440 Size: 0x8 - ObjectProperty Foliage.ProceduralFoliageBlockingVolume.ProceduralFoliageVolume */
	uint8_t UnknownData448[0x8];


	inline bool SetProceduralFoliageVolume(t_structHelper inst, ExternalPtr<struct UProceduralFoliageVolume> value) { inst.WriteOffset(0x440, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProceduralFoliageBlockingVolume = sizeof(UProceduralFoliageBlockingVolume); // 1104
    static_assert(sizeof(UProceduralFoliageBlockingVolume) == 0x450, "Size of UProceduralFoliageBlockingVolume is not correct.");
	auto constexpr UProceduralFoliageBlockingVolume_ProceduralFoliageVolume_Offset = offsetof(UProceduralFoliageBlockingVolume, ProceduralFoliageVolume);
	static_assert(UProceduralFoliageBlockingVolume_ProceduralFoliageVolume_Offset == 0x440, "UProceduralFoliageBlockingVolume::ProceduralFoliageVolume offset is not 440");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
