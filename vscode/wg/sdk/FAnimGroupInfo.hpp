#pragma once
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimGroupInfo // Size: 0x18
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.AnimGroupInfo.Name */
    FLinearColor Color; /* Ofs: 0x8 Size: 0x10 StructProperty Engine.AnimGroupInfo.Color */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimGroupInfo = sizeof(FAnimGroupInfo); // 24
    static_assert(sizeof(FAnimGroupInfo) == 0x18, "Size of FAnimGroupInfo is not correct.");
	auto constexpr FAnimGroupInfo_Name_Offset = offsetof(FAnimGroupInfo, Name);
	static_assert(FAnimGroupInfo_Name_Offset == 0x0, "FAnimGroupInfo::Name offset is not 0");
	auto constexpr FAnimGroupInfo_Color_Offset = offsetof(FAnimGroupInfo, Color);
	static_assert(FAnimGroupInfo_Color_Offset == 0x8, "FAnimGroupInfo::Color offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
