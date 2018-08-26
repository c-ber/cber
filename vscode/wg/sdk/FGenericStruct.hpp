#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGenericStruct // Size: 0x4
{
public:
    int32_t Data; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.GenericStruct.Data */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGenericStruct = sizeof(FGenericStruct); // 4
    static_assert(sizeof(FGenericStruct) == 0x4, "Size of FGenericStruct is not correct.");
	auto constexpr FGenericStruct_Data_Offset = offsetof(FGenericStruct, Data);
	static_assert(FGenericStruct_Data_Offset == 0x0, "FGenericStruct::Data offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
