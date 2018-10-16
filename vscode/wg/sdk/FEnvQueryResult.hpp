#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEnvQueryResult // Size: 0x40
{
public:
    uint8_t UnknownData0[0x10];
    ExternalPtr<struct UClass> ItemType; /* Ofs: 0x10 Size: 0x8 ClassProperty AIModule.EnvQueryResult.ItemType */
    uint8_t UnknownData18[0x14];
    int32_t OptionIndex; /* Ofs: 0x2C Size: 0x4 IntProperty AIModule.EnvQueryResult.OptionIndex */
    int32_t QueryID; /* Ofs: 0x30 Size: 0x4 IntProperty AIModule.EnvQueryResult.QueryID */
    uint8_t UnknownData34[0xC];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEnvQueryResult = sizeof(FEnvQueryResult); // 64
    static_assert(sizeof(FEnvQueryResult) == 0x40, "Size of FEnvQueryResult is not correct.");
	auto constexpr FEnvQueryResult_ItemType_Offset = offsetof(FEnvQueryResult, ItemType);
	static_assert(FEnvQueryResult_ItemType_Offset == 0x10, "FEnvQueryResult::ItemType offset is not 10");
	auto constexpr FEnvQueryResult_OptionIndex_Offset = offsetof(FEnvQueryResult, OptionIndex);
	static_assert(FEnvQueryResult_OptionIndex_Offset == 0x2c, "FEnvQueryResult::OptionIndex offset is not 2c");
	auto constexpr FEnvQueryResult_QueryID_Offset = offsetof(FEnvQueryResult, QueryID);
	static_assert(FEnvQueryResult_QueryID_Offset == 0x30, "FEnvQueryResult::QueryID offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
