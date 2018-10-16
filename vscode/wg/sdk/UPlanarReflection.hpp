#pragma once
#include "USceneCapture.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlanarReflection // Size: 0x420
	: public USceneCapture // Size: 0x410
{
private:
	typedef UPlanarReflection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1783); // id32("Class Engine.PlanarReflection")
		return ptr;
	}
	ExternalPtr<struct UPlanarReflectionComponent> PlanarReflectionComponent; /* Ofs: 0x410 Size: 0x8 - ObjectProperty Engine.PlanarReflection.PlanarReflectionComponent */
	uint8_t boolField418;
	uint8_t UnknownData419[0x7];


	inline bool SetPlanarReflectionComponent(t_structHelper inst, ExternalPtr<struct UPlanarReflectionComponent> value) { inst.WriteOffset(0x410, value); }
	inline bool bShowPreviewPlane()
	{
		return boolField418& 0x1;
	}
	inline bool SetbShowPreviewPlane(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x418, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlanarReflection = sizeof(UPlanarReflection); // 1056
    static_assert(sizeof(UPlanarReflection) == 0x420, "Size of UPlanarReflection is not correct.");
	auto constexpr UPlanarReflection_PlanarReflectionComponent_Offset = offsetof(UPlanarReflection, PlanarReflectionComponent);
	static_assert(UPlanarReflection_PlanarReflectionComponent_Offset == 0x410, "UPlanarReflection::PlanarReflectionComponent offset is not 410");
	auto constexpr UPlanarReflection_boolField418_Offset = offsetof(UPlanarReflection, boolField418);
	static_assert(UPlanarReflection_boolField418_Offset == 0x418, "UPlanarReflection::boolField418 offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
