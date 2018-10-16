#pragma once
#include "FPlatformInterfaceData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPlatformInterfaceDelegateResult // Size: 0x38
{
public:
    bool bSuccessful; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.PlatformInterfaceDelegateResult.bSuccessful */
    uint8_t UnknownData1[0x7];
    FPlatformInterfaceData Data; /* Ofs: 0x8 Size: 0x30 StructProperty Engine.PlatformInterfaceDelegateResult.Data */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPlatformInterfaceDelegateResult = sizeof(FPlatformInterfaceDelegateResult); // 56
    static_assert(sizeof(FPlatformInterfaceDelegateResult) == 0x38, "Size of FPlatformInterfaceDelegateResult is not correct.");
	auto constexpr FPlatformInterfaceDelegateResult_Data_Offset = offsetof(FPlatformInterfaceDelegateResult, Data);
	static_assert(FPlatformInterfaceDelegateResult_Data_Offset == 0x8, "FPlatformInterfaceDelegateResult::Data offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
