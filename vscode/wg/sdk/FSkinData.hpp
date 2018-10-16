#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSkinData // Size: 0x10
{
public:
    TArray<struct FSkinTargetData> SkinTargetDatas; /* Ofs: 0x0 Size: 0x10 ArrayProperty TslGame.SkinData.SkinTargetDatas */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSkinData = sizeof(FSkinData); // 16
    static_assert(sizeof(FSkinData) == 0x10, "Size of FSkinData is not correct.");
	auto constexpr FSkinData_SkinTargetDatas_Offset = offsetof(FSkinData, SkinTargetDatas);
	static_assert(FSkinData_SkinTargetDatas_Offset == 0x0, "FSkinData::SkinTargetDatas offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
