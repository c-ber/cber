#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPIELoginSettingsInternal // Size: 0x40
{
public:
    FString ID; /* Ofs: 0x0 Size: 0x10 StrProperty OnlineSubsystemUtils.PIELoginSettingsInternal.ID */
    FString Token; /* Ofs: 0x10 Size: 0x10 StrProperty OnlineSubsystemUtils.PIELoginSettingsInternal.Token */
    FString Type; /* Ofs: 0x20 Size: 0x10 StrProperty OnlineSubsystemUtils.PIELoginSettingsInternal.Type */
    TArray<uint8_t> TokenBytes; /* Ofs: 0x30 Size: 0x10 ArrayProperty OnlineSubsystemUtils.PIELoginSettingsInternal.TokenBytes */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPIELoginSettingsInternal = sizeof(FPIELoginSettingsInternal); // 64
    static_assert(sizeof(FPIELoginSettingsInternal) == 0x40, "Size of FPIELoginSettingsInternal is not correct.");
	auto constexpr FPIELoginSettingsInternal_ID_Offset = offsetof(FPIELoginSettingsInternal, ID);
	static_assert(FPIELoginSettingsInternal_ID_Offset == 0x0, "FPIELoginSettingsInternal::ID offset is not 0");
	auto constexpr FPIELoginSettingsInternal_Token_Offset = offsetof(FPIELoginSettingsInternal, Token);
	static_assert(FPIELoginSettingsInternal_Token_Offset == 0x10, "FPIELoginSettingsInternal::Token offset is not 10");
	auto constexpr FPIELoginSettingsInternal_Type_Offset = offsetof(FPIELoginSettingsInternal, Type);
	static_assert(FPIELoginSettingsInternal_Type_Offset == 0x20, "FPIELoginSettingsInternal::Type offset is not 20");
	auto constexpr FPIELoginSettingsInternal_TokenBytes_Offset = offsetof(FPIELoginSettingsInternal, TokenBytes);
	static_assert(FPIELoginSettingsInternal_TokenBytes_Offset == 0x30, "FPIELoginSettingsInternal::TokenBytes offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
