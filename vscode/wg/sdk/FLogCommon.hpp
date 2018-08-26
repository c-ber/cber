#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLogCommon // Size: 0x28
{
public:
    FString MatchId; /* Ofs: 0x0 Size: 0x10 StrProperty TslCommon.LogCommon.MatchId */
    FString MapName; /* Ofs: 0x10 Size: 0x10 StrProperty TslCommon.LogCommon.MapName */
    float IsGame; /* Ofs: 0x20 Size: 0x4 FloatProperty TslCommon.LogCommon.IsGame */
    uint8_t UnknownData24[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLogCommon = sizeof(FLogCommon); // 40
    static_assert(sizeof(FLogCommon) == 0x28, "Size of FLogCommon is not correct.");
	auto constexpr FLogCommon_MatchId_Offset = offsetof(FLogCommon, MatchId);
	static_assert(FLogCommon_MatchId_Offset == 0x0, "FLogCommon::MatchId offset is not 0");
	auto constexpr FLogCommon_MapName_Offset = offsetof(FLogCommon, MapName);
	static_assert(FLogCommon_MapName_Offset == 0x10, "FLogCommon::MapName offset is not 10");
	auto constexpr FLogCommon_IsGame_Offset = offsetof(FLogCommon, IsGame);
	static_assert(FLogCommon_IsGame_Offset == 0x20, "FLogCommon::IsGame offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
