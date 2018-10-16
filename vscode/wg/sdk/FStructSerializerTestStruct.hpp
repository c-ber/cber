#pragma once
#include "FStructSerializerNumericTestStruct.hpp"
#include "FStructSerializerBooleanTestStruct.hpp"
#include "FStructSerializerObjectTestStruct.hpp"
#include "FStructSerializerBuiltinTestStruct.hpp"
#include "FStructSerializerArrayTestStruct.hpp"
#include "FStructSerializerMapTestStruct.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStructSerializerTestStruct // Size: 0x1D8
{
public:
    FStructSerializerNumericTestStruct Numerics; /* Ofs: 0x0 Size: 0x30 StructProperty Serialization.StructSerializerTestStruct.Numerics */
    FStructSerializerBooleanTestStruct Booleans; /* Ofs: 0x30 Size: 0x8 StructProperty Serialization.StructSerializerTestStruct.Booleans */
    FStructSerializerObjectTestStruct Objects; /* Ofs: 0x38 Size: 0x10 StructProperty Serialization.StructSerializerTestStruct.Objects */
    FStructSerializerBuiltinTestStruct Builtins; /* Ofs: 0x48 Size: 0x60 StructProperty Serialization.StructSerializerTestStruct.Builtins */
    FStructSerializerArrayTestStruct Arrays; /* Ofs: 0xA8 Size: 0x40 StructProperty Serialization.StructSerializerTestStruct.Arrays */
    FStructSerializerMapTestStruct Maps; /* Ofs: 0xE8 Size: 0xF0 StructProperty Serialization.StructSerializerTestStruct.Maps */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStructSerializerTestStruct = sizeof(FStructSerializerTestStruct); // 472
    static_assert(sizeof(FStructSerializerTestStruct) == 0x1D8, "Size of FStructSerializerTestStruct is not correct.");
	auto constexpr FStructSerializerTestStruct_Numerics_Offset = offsetof(FStructSerializerTestStruct, Numerics);
	static_assert(FStructSerializerTestStruct_Numerics_Offset == 0x0, "FStructSerializerTestStruct::Numerics offset is not 0");
	auto constexpr FStructSerializerTestStruct_Booleans_Offset = offsetof(FStructSerializerTestStruct, Booleans);
	static_assert(FStructSerializerTestStruct_Booleans_Offset == 0x30, "FStructSerializerTestStruct::Booleans offset is not 30");
	auto constexpr FStructSerializerTestStruct_Objects_Offset = offsetof(FStructSerializerTestStruct, Objects);
	static_assert(FStructSerializerTestStruct_Objects_Offset == 0x38, "FStructSerializerTestStruct::Objects offset is not 38");
	auto constexpr FStructSerializerTestStruct_Builtins_Offset = offsetof(FStructSerializerTestStruct, Builtins);
	static_assert(FStructSerializerTestStruct_Builtins_Offset == 0x48, "FStructSerializerTestStruct::Builtins offset is not 48");
	auto constexpr FStructSerializerTestStruct_Arrays_Offset = offsetof(FStructSerializerTestStruct, Arrays);
	static_assert(FStructSerializerTestStruct_Arrays_Offset == 0xa8, "FStructSerializerTestStruct::Arrays offset is not a8");
	auto constexpr FStructSerializerTestStruct_Maps_Offset = offsetof(FStructSerializerTestStruct, Maps);
	static_assert(FStructSerializerTestStruct_Maps_Offset == 0xe8, "FStructSerializerTestStruct::Maps offset is not e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
