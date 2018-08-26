#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStructSerializerArrayTestStruct // Size: 0x40
{
public:
    TArray<int32_t> Int32Array; /* Ofs: 0x0 Size: 0x10 ArrayProperty Serialization.StructSerializerArrayTestStruct.Int32Array */
    int32_t StaticSingleElement; /* Ofs: 0x10 Size: 0x4 IntProperty Serialization.StructSerializerArrayTestStruct.StaticSingleElement */
    int32_t StaticInt32Array[3]; /* Ofs: 0x14 Size: 0x4 IntProperty Serialization.StructSerializerArrayTestStruct.StaticInt32Array */
    float StaticFloatArray[3]; /* Ofs: 0x20 Size: 0x4 FloatProperty Serialization.StructSerializerArrayTestStruct.StaticFloatArray */
    uint8_t UnknownData2C[0x4];
    TArray<struct FVector> VectorArray; /* Ofs: 0x30 Size: 0x10 ArrayProperty Serialization.StructSerializerArrayTestStruct.VectorArray */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStructSerializerArrayTestStruct = sizeof(FStructSerializerArrayTestStruct); // 64
    static_assert(sizeof(FStructSerializerArrayTestStruct) == 0x40, "Size of FStructSerializerArrayTestStruct is not correct.");
	auto constexpr FStructSerializerArrayTestStruct_Int32Array_Offset = offsetof(FStructSerializerArrayTestStruct, Int32Array);
	static_assert(FStructSerializerArrayTestStruct_Int32Array_Offset == 0x0, "FStructSerializerArrayTestStruct::Int32Array offset is not 0");
	auto constexpr FStructSerializerArrayTestStruct_StaticSingleElement_Offset = offsetof(FStructSerializerArrayTestStruct, StaticSingleElement);
	static_assert(FStructSerializerArrayTestStruct_StaticSingleElement_Offset == 0x10, "FStructSerializerArrayTestStruct::StaticSingleElement offset is not 10");
	auto constexpr FStructSerializerArrayTestStruct_StaticInt32Array_Offset = offsetof(FStructSerializerArrayTestStruct, StaticInt32Array);
	static_assert(FStructSerializerArrayTestStruct_StaticInt32Array_Offset == 0x14, "FStructSerializerArrayTestStruct::StaticInt32Array offset is not 14");
	auto constexpr FStructSerializerArrayTestStruct_StaticFloatArray_Offset = offsetof(FStructSerializerArrayTestStruct, StaticFloatArray);
	static_assert(FStructSerializerArrayTestStruct_StaticFloatArray_Offset == 0x20, "FStructSerializerArrayTestStruct::StaticFloatArray offset is not 20");
	auto constexpr FStructSerializerArrayTestStruct_VectorArray_Offset = offsetof(FStructSerializerArrayTestStruct, VectorArray);
	static_assert(FStructSerializerArrayTestStruct_VectorArray_Offset == 0x30, "FStructSerializerArrayTestStruct::VectorArray offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
