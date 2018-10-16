#pragma once
#include "UVectorField.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVectorFieldStatic // Size: 0xE0
	: public UVectorField // Size: 0x50
{
private:
	typedef UVectorFieldStatic t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1258); // id32("Class Engine.VectorFieldStatic")
		return ptr;
	}
	int32_t SizeX; /* Ofs: 0x50 Size: 0x4 - IntProperty Engine.VectorFieldStatic.SizeX */
	int32_t SizeY; /* Ofs: 0x54 Size: 0x4 - IntProperty Engine.VectorFieldStatic.SizeY */
	int32_t SizeZ; /* Ofs: 0x58 Size: 0x4 - IntProperty Engine.VectorFieldStatic.SizeZ */
	uint8_t UnknownData5C[0x84];


	inline bool SetSizeX(t_structHelper inst, int32_t value) { inst.WriteOffset(0x50, value); }
	inline bool SetSizeY(t_structHelper inst, int32_t value) { inst.WriteOffset(0x54, value); }
	inline bool SetSizeZ(t_structHelper inst, int32_t value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVectorFieldStatic = sizeof(UVectorFieldStatic); // 224
    static_assert(sizeof(UVectorFieldStatic) == 0xE0, "Size of UVectorFieldStatic is not correct.");
	auto constexpr UVectorFieldStatic_SizeX_Offset = offsetof(UVectorFieldStatic, SizeX);
	static_assert(UVectorFieldStatic_SizeX_Offset == 0x50, "UVectorFieldStatic::SizeX offset is not 50");
	auto constexpr UVectorFieldStatic_SizeY_Offset = offsetof(UVectorFieldStatic, SizeY);
	static_assert(UVectorFieldStatic_SizeY_Offset == 0x54, "UVectorFieldStatic::SizeY offset is not 54");
	auto constexpr UVectorFieldStatic_SizeZ_Offset = offsetof(UVectorFieldStatic, SizeZ);
	static_assert(UVectorFieldStatic_SizeZ_Offset == 0x58, "UVectorFieldStatic::SizeZ offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
