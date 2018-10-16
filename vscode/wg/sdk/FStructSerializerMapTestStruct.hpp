#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStructSerializerMapTestStruct // Size: 0xF0
{
public:
    TMap<int32_t, struct FString> IntToStr; /* Ofs: 0x0 Size: 0x50 MapProperty Serialization.StructSerializerMapTestStruct.IntToStr */
    TMap<struct FString, struct FString> StrToStr; /* Ofs: 0x50 Size: 0x50 MapProperty Serialization.StructSerializerMapTestStruct.StrToStr */
    TMap<struct FString, struct FVector> StrToVec; /* Ofs: 0xA0 Size: 0x50 MapProperty Serialization.StructSerializerMapTestStruct.StrToVec */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStructSerializerMapTestStruct = sizeof(FStructSerializerMapTestStruct); // 240
    static_assert(sizeof(FStructSerializerMapTestStruct) == 0xF0, "Size of FStructSerializerMapTestStruct is not correct.");
	auto constexpr FStructSerializerMapTestStruct_IntToStr_Offset = offsetof(FStructSerializerMapTestStruct, IntToStr);
	static_assert(FStructSerializerMapTestStruct_IntToStr_Offset == 0x0, "FStructSerializerMapTestStruct::IntToStr offset is not 0");
	auto constexpr FStructSerializerMapTestStruct_StrToStr_Offset = offsetof(FStructSerializerMapTestStruct, StrToStr);
	static_assert(FStructSerializerMapTestStruct_StrToStr_Offset == 0x50, "FStructSerializerMapTestStruct::StrToStr offset is not 50");
	auto constexpr FStructSerializerMapTestStruct_StrToVec_Offset = offsetof(FStructSerializerMapTestStruct, StrToVec);
	static_assert(FStructSerializerMapTestStruct_StrToVec_Offset == 0xa0, "FStructSerializerMapTestStruct::StrToVec offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
