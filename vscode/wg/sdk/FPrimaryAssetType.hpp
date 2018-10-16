#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPrimaryAssetType // Size: 0x8
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty CoreUObject.PrimaryAssetType.Name */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPrimaryAssetType = sizeof(FPrimaryAssetType); // 8
    static_assert(sizeof(FPrimaryAssetType) == 0x8, "Size of FPrimaryAssetType is not correct.");
	auto constexpr FPrimaryAssetType_Name_Offset = offsetof(FPrimaryAssetType, Name);
	static_assert(FPrimaryAssetType_Name_Offset == 0x0, "FPrimaryAssetType::Name offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
