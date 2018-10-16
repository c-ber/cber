#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStructSerializerNumericTestStruct // Size: 0x30
{
public:
    int8_t Int8; /* Ofs: 0x0 Size: 0x1 Int8Property Serialization.StructSerializerNumericTestStruct.Int8 */
    uint8_t UnknownData1[0x1];
    int16_t Int16; /* Ofs: 0x2 Size: 0x2 Int16Property Serialization.StructSerializerNumericTestStruct.Int16 */
    int32_t Int32; /* Ofs: 0x4 Size: 0x4 IntProperty Serialization.StructSerializerNumericTestStruct.Int32 */
    int64_t Int64; /* Ofs: 0x8 Size: 0x8 Int64Property Serialization.StructSerializerNumericTestStruct.Int64 */
    uint8_t UInt8; /* Ofs: 0x10 Size: 0x1 ByteProperty Serialization.StructSerializerNumericTestStruct.UInt8 */
    uint8_t UnknownData11[0x1];
    uint16_t UInt16; /* Ofs: 0x12 Size: 0x2 UInt16Property Serialization.StructSerializerNumericTestStruct.UInt16 */
    uint32_t UInt32; /* Ofs: 0x14 Size: 0x4 UInt32Property Serialization.StructSerializerNumericTestStruct.UInt32 */
    uint64_t UInt64; /* Ofs: 0x18 Size: 0x8 UInt64Property Serialization.StructSerializerNumericTestStruct.UInt64 */
    float Float; /* Ofs: 0x20 Size: 0x4 FloatProperty Serialization.StructSerializerNumericTestStruct.Float */
    uint8_t UnknownData24[0x4];
    double Double; /* Ofs: 0x28 Size: 0x8 DoubleProperty Serialization.StructSerializerNumericTestStruct.Double */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStructSerializerNumericTestStruct = sizeof(FStructSerializerNumericTestStruct); // 48
    static_assert(sizeof(FStructSerializerNumericTestStruct) == 0x30, "Size of FStructSerializerNumericTestStruct is not correct.");
	auto constexpr FStructSerializerNumericTestStruct_Int8_Offset = offsetof(FStructSerializerNumericTestStruct, Int8);
	static_assert(FStructSerializerNumericTestStruct_Int8_Offset == 0x0, "FStructSerializerNumericTestStruct::Int8 offset is not 0");
	auto constexpr FStructSerializerNumericTestStruct_Int16_Offset = offsetof(FStructSerializerNumericTestStruct, Int16);
	static_assert(FStructSerializerNumericTestStruct_Int16_Offset == 0x2, "FStructSerializerNumericTestStruct::Int16 offset is not 2");
	auto constexpr FStructSerializerNumericTestStruct_Int32_Offset = offsetof(FStructSerializerNumericTestStruct, Int32);
	static_assert(FStructSerializerNumericTestStruct_Int32_Offset == 0x4, "FStructSerializerNumericTestStruct::Int32 offset is not 4");
	auto constexpr FStructSerializerNumericTestStruct_Int64_Offset = offsetof(FStructSerializerNumericTestStruct, Int64);
	static_assert(FStructSerializerNumericTestStruct_Int64_Offset == 0x8, "FStructSerializerNumericTestStruct::Int64 offset is not 8");
	auto constexpr FStructSerializerNumericTestStruct_UInt8_Offset = offsetof(FStructSerializerNumericTestStruct, UInt8);
	static_assert(FStructSerializerNumericTestStruct_UInt8_Offset == 0x10, "FStructSerializerNumericTestStruct::UInt8 offset is not 10");
	auto constexpr FStructSerializerNumericTestStruct_UInt16_Offset = offsetof(FStructSerializerNumericTestStruct, UInt16);
	static_assert(FStructSerializerNumericTestStruct_UInt16_Offset == 0x12, "FStructSerializerNumericTestStruct::UInt16 offset is not 12");
	auto constexpr FStructSerializerNumericTestStruct_UInt32_Offset = offsetof(FStructSerializerNumericTestStruct, UInt32);
	static_assert(FStructSerializerNumericTestStruct_UInt32_Offset == 0x14, "FStructSerializerNumericTestStruct::UInt32 offset is not 14");
	auto constexpr FStructSerializerNumericTestStruct_UInt64_Offset = offsetof(FStructSerializerNumericTestStruct, UInt64);
	static_assert(FStructSerializerNumericTestStruct_UInt64_Offset == 0x18, "FStructSerializerNumericTestStruct::UInt64 offset is not 18");
	auto constexpr FStructSerializerNumericTestStruct_Float_Offset = offsetof(FStructSerializerNumericTestStruct, Float);
	static_assert(FStructSerializerNumericTestStruct_Float_Offset == 0x20, "FStructSerializerNumericTestStruct::Float offset is not 20");
	auto constexpr FStructSerializerNumericTestStruct_Double_Offset = offsetof(FStructSerializerNumericTestStruct, Double);
	static_assert(FStructSerializerNumericTestStruct_Double_Offset == 0x28, "FStructSerializerNumericTestStruct::Double offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
