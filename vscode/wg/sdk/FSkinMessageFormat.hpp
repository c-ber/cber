#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSkinMessageFormat // Size: 0x78
{
public:
    FText ApplySkinSuccessedMsgFormat; /* Ofs: 0x0 Size: 0x18 TextProperty TslGame.SkinMessageFormat.ApplySkinSuccessedMsgFormat */
    FText ApplySkinFailedMsgFormat; /* Ofs: 0x18 Size: 0x18 TextProperty TslGame.SkinMessageFormat.ApplySkinFailedMsgFormat */
    FText AlreadyApplySkinMsgFormat; /* Ofs: 0x30 Size: 0x18 TextProperty TslGame.SkinMessageFormat.AlreadyApplySkinMsgFormat */
    FText ClearSkinSuccessedMsgFormat; /* Ofs: 0x48 Size: 0x18 TextProperty TslGame.SkinMessageFormat.ClearSkinSuccessedMsgFormat */
    FText AlreadyClearSkinMsgFormat; /* Ofs: 0x60 Size: 0x18 TextProperty TslGame.SkinMessageFormat.AlreadyClearSkinMsgFormat */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSkinMessageFormat = sizeof(FSkinMessageFormat); // 120
    static_assert(sizeof(FSkinMessageFormat) == 0x78, "Size of FSkinMessageFormat is not correct.");
	auto constexpr FSkinMessageFormat_ApplySkinSuccessedMsgFormat_Offset = offsetof(FSkinMessageFormat, ApplySkinSuccessedMsgFormat);
	static_assert(FSkinMessageFormat_ApplySkinSuccessedMsgFormat_Offset == 0x0, "FSkinMessageFormat::ApplySkinSuccessedMsgFormat offset is not 0");
	auto constexpr FSkinMessageFormat_ApplySkinFailedMsgFormat_Offset = offsetof(FSkinMessageFormat, ApplySkinFailedMsgFormat);
	static_assert(FSkinMessageFormat_ApplySkinFailedMsgFormat_Offset == 0x18, "FSkinMessageFormat::ApplySkinFailedMsgFormat offset is not 18");
	auto constexpr FSkinMessageFormat_AlreadyApplySkinMsgFormat_Offset = offsetof(FSkinMessageFormat, AlreadyApplySkinMsgFormat);
	static_assert(FSkinMessageFormat_AlreadyApplySkinMsgFormat_Offset == 0x30, "FSkinMessageFormat::AlreadyApplySkinMsgFormat offset is not 30");
	auto constexpr FSkinMessageFormat_ClearSkinSuccessedMsgFormat_Offset = offsetof(FSkinMessageFormat, ClearSkinSuccessedMsgFormat);
	static_assert(FSkinMessageFormat_ClearSkinSuccessedMsgFormat_Offset == 0x48, "FSkinMessageFormat::ClearSkinSuccessedMsgFormat offset is not 48");
	auto constexpr FSkinMessageFormat_AlreadyClearSkinMsgFormat_Offset = offsetof(FSkinMessageFormat, AlreadyClearSkinMsgFormat);
	static_assert(FSkinMessageFormat_AlreadyClearSkinMsgFormat_Offset == 0x60, "FSkinMessageFormat::AlreadyClearSkinMsgFormat offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
