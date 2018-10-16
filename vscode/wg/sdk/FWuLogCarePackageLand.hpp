#pragma once
#include "FLogBase.hpp"
#include "FWuLogItemPackage.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogCarePackageLand // Size: 0x88
 : public FLogBase // Size: 0x58
{
public:
    FWuLogItemPackage ItemPackage; /* Ofs: 0x58 Size: 0x30 StructProperty TslGame.WuLogCarePackageLand.ItemPackage */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogCarePackageLand = sizeof(FWuLogCarePackageLand); // 136
    static_assert(sizeof(FWuLogCarePackageLand) == 0x88, "Size of FWuLogCarePackageLand is not correct.");
	auto constexpr FWuLogCarePackageLand_ItemPackage_Offset = offsetof(FWuLogCarePackageLand, ItemPackage);
	static_assert(FWuLogCarePackageLand_ItemPackage_Offset == 0x58, "FWuLogCarePackageLand::ItemPackage offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
