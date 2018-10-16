#pragma once
#include "FGuid.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStructSerializerBuiltinTestStruct // Size: 0x60
{
public:
    FGuid Guid; /* Ofs: 0x0 Size: 0x10 StructProperty Serialization.StructSerializerBuiltinTestStruct.Guid */
    FName Name; /* Ofs: 0x10 Size: 0x8 NameProperty Serialization.StructSerializerBuiltinTestStruct.Name */
    FString String; /* Ofs: 0x18 Size: 0x10 StrProperty Serialization.StructSerializerBuiltinTestStruct.String */
    FRotator Rotator; /* Ofs: 0x28 Size: 0xC StructProperty Serialization.StructSerializerBuiltinTestStruct.Rotator */
    uint8_t UnknownData34[0x4];
    FText Text; /* Ofs: 0x38 Size: 0x18 TextProperty Serialization.StructSerializerBuiltinTestStruct.Text */
    FVector Vector; /* Ofs: 0x50 Size: 0xC StructProperty Serialization.StructSerializerBuiltinTestStruct.Vector */
    uint8_t UnknownData5C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStructSerializerBuiltinTestStruct = sizeof(FStructSerializerBuiltinTestStruct); // 96
    static_assert(sizeof(FStructSerializerBuiltinTestStruct) == 0x60, "Size of FStructSerializerBuiltinTestStruct is not correct.");
	auto constexpr FStructSerializerBuiltinTestStruct_Guid_Offset = offsetof(FStructSerializerBuiltinTestStruct, Guid);
	static_assert(FStructSerializerBuiltinTestStruct_Guid_Offset == 0x0, "FStructSerializerBuiltinTestStruct::Guid offset is not 0");
	auto constexpr FStructSerializerBuiltinTestStruct_Name_Offset = offsetof(FStructSerializerBuiltinTestStruct, Name);
	static_assert(FStructSerializerBuiltinTestStruct_Name_Offset == 0x10, "FStructSerializerBuiltinTestStruct::Name offset is not 10");
	auto constexpr FStructSerializerBuiltinTestStruct_String_Offset = offsetof(FStructSerializerBuiltinTestStruct, String);
	static_assert(FStructSerializerBuiltinTestStruct_String_Offset == 0x18, "FStructSerializerBuiltinTestStruct::String offset is not 18");
	auto constexpr FStructSerializerBuiltinTestStruct_Rotator_Offset = offsetof(FStructSerializerBuiltinTestStruct, Rotator);
	static_assert(FStructSerializerBuiltinTestStruct_Rotator_Offset == 0x28, "FStructSerializerBuiltinTestStruct::Rotator offset is not 28");
	auto constexpr FStructSerializerBuiltinTestStruct_Text_Offset = offsetof(FStructSerializerBuiltinTestStruct, Text);
	static_assert(FStructSerializerBuiltinTestStruct_Text_Offset == 0x38, "FStructSerializerBuiltinTestStruct::Text offset is not 38");
	auto constexpr FStructSerializerBuiltinTestStruct_Vector_Offset = offsetof(FStructSerializerBuiltinTestStruct, Vector);
	static_assert(FStructSerializerBuiltinTestStruct_Vector_Offset == 0x50, "FStructSerializerBuiltinTestStruct::Vector offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
