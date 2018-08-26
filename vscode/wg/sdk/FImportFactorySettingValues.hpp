#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FImportFactorySettingValues // Size: 0x20
{
public:
    FString SettingName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.ImportFactorySettingValues.SettingName */
    FString Value; /* Ofs: 0x10 Size: 0x10 StrProperty Engine.ImportFactorySettingValues.Value */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFImportFactorySettingValues = sizeof(FImportFactorySettingValues); // 32
    static_assert(sizeof(FImportFactorySettingValues) == 0x20, "Size of FImportFactorySettingValues is not correct.");
	auto constexpr FImportFactorySettingValues_SettingName_Offset = offsetof(FImportFactorySettingValues, SettingName);
	static_assert(FImportFactorySettingValues_SettingName_Offset == 0x0, "FImportFactorySettingValues::SettingName offset is not 0");
	auto constexpr FImportFactorySettingValues_Value_Offset = offsetof(FImportFactorySettingValues, Value);
	static_assert(FImportFactorySettingValues_Value_Offset == 0x10, "FImportFactorySettingValues::Value offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
