#pragma once
#include "UMaterialInstanceConstant.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscapeMaterialInstanceConstant // Size: 0x1C0
	: public UMaterialInstanceConstant // Size: 0x1B8
{
private:
	typedef ULandscapeMaterialInstanceConstant t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1292); // id32("Class Landscape.LandscapeMaterialInstanceConstant")
		return ptr;
	}
	uint8_t boolField1B8;
	uint8_t UnknownData1B9[0x7];


	inline bool bIsLayerThumbnail()
	{
		return boolField1B8& 0x1;
	}
	inline bool SetbIsLayerThumbnail(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1B8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDisableTessellation()
	{
		return boolField1B8& 0x2;
	}
	inline bool SetbDisableTessellation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1B8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscapeMaterialInstanceConstant = sizeof(ULandscapeMaterialInstanceConstant); // 448
    static_assert(sizeof(ULandscapeMaterialInstanceConstant) == 0x1C0, "Size of ULandscapeMaterialInstanceConstant is not correct.");
	auto constexpr ULandscapeMaterialInstanceConstant_boolField1B8_Offset = offsetof(ULandscapeMaterialInstanceConstant, boolField1B8);
	static_assert(ULandscapeMaterialInstanceConstant_boolField1B8_Offset == 0x1b8, "ULandscapeMaterialInstanceConstant::boolField1B8 offset is not 1b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
