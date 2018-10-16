#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuGameFinishedResult // Size: 0x10
{
public:
    TArray<struct FWuGameResultPerPlayer> Results; /* Ofs: 0x0 Size: 0x10 ArrayProperty TslGame.WuGameFinishedResult.Results */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuGameFinishedResult = sizeof(FWuGameFinishedResult); // 16
    static_assert(sizeof(FWuGameFinishedResult) == 0x10, "Size of FWuGameFinishedResult is not correct.");
	auto constexpr FWuGameFinishedResult_Results_Offset = offsetof(FWuGameFinishedResult, Results);
	static_assert(FWuGameFinishedResult_Results_Offset == 0x0, "FWuGameFinishedResult::Results offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
