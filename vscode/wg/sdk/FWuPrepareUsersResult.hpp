#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuPrepareUsersResult // Size: 0x10
{
public:
    TArray<struct FString> AccountIds; /* Ofs: 0x0 Size: 0x10 ArrayProperty TslGame.WuPrepareUsersResult.AccountIds */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuPrepareUsersResult = sizeof(FWuPrepareUsersResult); // 16
    static_assert(sizeof(FWuPrepareUsersResult) == 0x10, "Size of FWuPrepareUsersResult is not correct.");
	auto constexpr FWuPrepareUsersResult_AccountIds_Offset = offsetof(FWuPrepareUsersResult, AccountIds);
	static_assert(FWuPrepareUsersResult_AccountIds_Offset == 0x0, "FWuPrepareUsersResult::AccountIds offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
