#pragma once
#include "ESkinCategory.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSkinParam // Size: 0x10
{
public:
    TEnumAsByte<enum ESkinCategory> SkinCategory; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.SkinParam.SkinCategory */
    uint8_t UnknownData1[0x7];
    FName SkinName; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.SkinParam.SkinName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSkinParam = sizeof(FSkinParam); // 16
    static_assert(sizeof(FSkinParam) == 0x10, "Size of FSkinParam is not correct.");
	auto constexpr FSkinParam_SkinCategory_Offset = offsetof(FSkinParam, SkinCategory);
	static_assert(FSkinParam_SkinCategory_Offset == 0x0, "FSkinParam::SkinCategory offset is not 0");
	auto constexpr FSkinParam_SkinName_Offset = offsetof(FSkinParam, SkinName);
	static_assert(FSkinParam_SkinName_Offset == 0x8, "FSkinParam::SkinName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
