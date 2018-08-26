#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPropertyPathSegment // Size: 0x20
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty UMG.PropertyPathSegment.Name */
    int32_t ArrayIndex; /* Ofs: 0x8 Size: 0x4 IntProperty UMG.PropertyPathSegment.ArrayIndex */
    uint8_t UnknownDataC[0x4];
    ExternalPtr<struct UStruct> Struct; /* Ofs: 0x10 Size: 0x8 ObjectProperty UMG.PropertyPathSegment.Struct */
    ExternalPtr<struct UField> Field; /* Ofs: 0x18 Size: 0x8 ObjectProperty UMG.PropertyPathSegment.Field */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPropertyPathSegment = sizeof(FPropertyPathSegment); // 32
    static_assert(sizeof(FPropertyPathSegment) == 0x20, "Size of FPropertyPathSegment is not correct.");
	auto constexpr FPropertyPathSegment_Name_Offset = offsetof(FPropertyPathSegment, Name);
	static_assert(FPropertyPathSegment_Name_Offset == 0x0, "FPropertyPathSegment::Name offset is not 0");
	auto constexpr FPropertyPathSegment_ArrayIndex_Offset = offsetof(FPropertyPathSegment, ArrayIndex);
	static_assert(FPropertyPathSegment_ArrayIndex_Offset == 0x8, "FPropertyPathSegment::ArrayIndex offset is not 8");
	auto constexpr FPropertyPathSegment_Struct_Offset = offsetof(FPropertyPathSegment, Struct);
	static_assert(FPropertyPathSegment_Struct_Offset == 0x10, "FPropertyPathSegment::Struct offset is not 10");
	auto constexpr FPropertyPathSegment_Field_Offset = offsetof(FPropertyPathSegment, Field);
	static_assert(FPropertyPathSegment_Field_Offset == 0x18, "FPropertyPathSegment::Field offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
