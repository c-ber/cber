#pragma once
#include "FBox.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVectorField // Size: 0x50
	: public UObject // Size: 0x30
{
private:
	typedef UVectorField t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1256); // id32("Class Engine.VectorField")
		return ptr;
	}
	FBox Bounds; /* Ofs: 0x30 Size: 0x1C - StructProperty Engine.VectorField.Bounds */
	float Intensity; /* Ofs: 0x4C Size: 0x4 - FloatProperty Engine.VectorField.Intensity */


	inline bool SetBounds(t_structHelper inst, FBox value) { inst.WriteOffset(0x30, value); }
	inline bool SetIntensity(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVectorField = sizeof(UVectorField); // 80
    static_assert(sizeof(UVectorField) == 0x50, "Size of UVectorField is not correct.");
	auto constexpr UVectorField_Bounds_Offset = offsetof(UVectorField, Bounds);
	static_assert(UVectorField_Bounds_Offset == 0x30, "UVectorField::Bounds offset is not 30");
	auto constexpr UVectorField_Intensity_Offset = offsetof(UVectorField, Intensity);
	static_assert(UVectorField_Intensity_Offset == 0x4c, "UVectorField::Intensity offset is not 4c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
