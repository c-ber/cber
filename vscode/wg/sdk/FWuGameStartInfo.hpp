#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuGameStartInfo // Size: 0x10
{
public:
    TArray<struct FWuGameStartInfoPerPlayer> Players; /* Ofs: 0x0 Size: 0x10 ArrayProperty TslGame.WuGameStartInfo.Players */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuGameStartInfo = sizeof(FWuGameStartInfo); // 16
    static_assert(sizeof(FWuGameStartInfo) == 0x10, "Size of FWuGameStartInfo is not correct.");
	auto constexpr FWuGameStartInfo_Players_Offset = offsetof(FWuGameStartInfo, Players);
	static_assert(FWuGameStartInfo_Players_Offset == 0x0, "FWuGameStartInfo::Players offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
