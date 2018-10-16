#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStructSerializerBooleanTestStruct // Size: 0x8
{
public:
    bool BoolFalse; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Serialization.StructSerializerBooleanTestStruct.BoolFalse */
    bool BoolTrue; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty Serialization.StructSerializerBooleanTestStruct.BoolTrue */
    uint8_t UnknownData2[0x2];
    uint32_t Bitfield; /* Ofs: 0x4 Size: 0x4 UInt32Property Serialization.StructSerializerBooleanTestStruct.Bitfield */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStructSerializerBooleanTestStruct = sizeof(FStructSerializerBooleanTestStruct); // 8
    static_assert(sizeof(FStructSerializerBooleanTestStruct) == 0x8, "Size of FStructSerializerBooleanTestStruct is not correct.");
	auto constexpr FStructSerializerBooleanTestStruct_Bitfield_Offset = offsetof(FStructSerializerBooleanTestStruct, Bitfield);
	static_assert(FStructSerializerBooleanTestStruct_Bitfield_Offset == 0x4, "FStructSerializerBooleanTestStruct::Bitfield offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
