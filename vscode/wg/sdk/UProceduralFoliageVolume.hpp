#pragma once
#include "UVolume.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProceduralFoliageVolume // Size: 0x450
	: public UVolume // Size: 0x440
{
private:
	typedef UProceduralFoliageVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(400); // id32("Class Foliage.ProceduralFoliageVolume")
		return ptr;
	}
	ExternalPtr<struct UProceduralFoliageComponent> ProceduralComponent; /* Ofs: 0x440 Size: 0x8 - ObjectProperty Foliage.ProceduralFoliageVolume.ProceduralComponent */
	uint8_t UnknownData448[0x8];


	inline bool SetProceduralComponent(t_structHelper inst, ExternalPtr<struct UProceduralFoliageComponent> value) { inst.WriteOffset(0x440, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProceduralFoliageVolume = sizeof(UProceduralFoliageVolume); // 1104
    static_assert(sizeof(UProceduralFoliageVolume) == 0x450, "Size of UProceduralFoliageVolume is not correct.");
	auto constexpr UProceduralFoliageVolume_ProceduralComponent_Offset = offsetof(UProceduralFoliageVolume, ProceduralComponent);
	static_assert(UProceduralFoliageVolume_ProceduralComponent_Offset == 0x440, "UProceduralFoliageVolume::ProceduralComponent offset is not 440");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
