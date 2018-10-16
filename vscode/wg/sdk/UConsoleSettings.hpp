#pragma once
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UConsoleSettings // Size: 0x78
	: public UObject // Size: 0x30
{
private:
	typedef UConsoleSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1273); // id32("Class EngineSettings.ConsoleSettings")
		return ptr;
	}
	int32_t MaxScrollbackSize; /* Ofs: 0x30 Size: 0x4 - IntProperty EngineSettings.ConsoleSettings.MaxScrollbackSize */
	uint8_t UnknownData34[0x4];
	TArray<struct FAutoCompleteCommand> ManualAutoCompleteList; /* Ofs: 0x38 Size: 0x10 - ArrayProperty EngineSettings.ConsoleSettings.ManualAutoCompleteList */
	TArray<struct FString> AutoCompleteMapPaths; /* Ofs: 0x48 Size: 0x10 - ArrayProperty EngineSettings.ConsoleSettings.AutoCompleteMapPaths */
	float BackgroundOpacityPercentage; /* Ofs: 0x58 Size: 0x4 - FloatProperty EngineSettings.ConsoleSettings.BackgroundOpacityPercentage */
	uint8_t boolField5C;
	uint8_t UnknownData5D[0x3];
	FColor InputColor; /* Ofs: 0x60 Size: 0x4 - StructProperty EngineSettings.ConsoleSettings.InputColor */
	FColor HistoryColor; /* Ofs: 0x64 Size: 0x4 - StructProperty EngineSettings.ConsoleSettings.HistoryColor */
	FColor AutoCompleteCommandColor; /* Ofs: 0x68 Size: 0x4 - StructProperty EngineSettings.ConsoleSettings.AutoCompleteCommandColor */
	FColor AutoCompleteCVarColor; /* Ofs: 0x6C Size: 0x4 - StructProperty EngineSettings.ConsoleSettings.AutoCompleteCVarColor */
	FColor AutoCompleteFadedColor; /* Ofs: 0x70 Size: 0x4 - StructProperty EngineSettings.ConsoleSettings.AutoCompleteFadedColor */
	uint8_t UnknownData74[0x4];


	inline bool SetMaxScrollbackSize(t_structHelper inst, int32_t value) { inst.WriteOffset(0x30, value); }
	inline bool SetManualAutoCompleteList(t_structHelper inst, TArray<struct FAutoCompleteCommand> value) { inst.WriteOffset(0x38, value); }
	inline bool SetAutoCompleteMapPaths(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x48, value); }
	inline bool SetBackgroundOpacityPercentage(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool bOrderTopToBottom()
	{
		return boolField5C& 0x1;
	}
	inline bool SetbOrderTopToBottom(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetInputColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x60, value); }
	inline bool SetHistoryColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x64, value); }
	inline bool SetAutoCompleteCommandColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x68, value); }
	inline bool SetAutoCompleteCVarColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x6C, value); }
	inline bool SetAutoCompleteFadedColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUConsoleSettings = sizeof(UConsoleSettings); // 120
    static_assert(sizeof(UConsoleSettings) == 0x78, "Size of UConsoleSettings is not correct.");
	auto constexpr UConsoleSettings_MaxScrollbackSize_Offset = offsetof(UConsoleSettings, MaxScrollbackSize);
	static_assert(UConsoleSettings_MaxScrollbackSize_Offset == 0x30, "UConsoleSettings::MaxScrollbackSize offset is not 30");
	auto constexpr UConsoleSettings_ManualAutoCompleteList_Offset = offsetof(UConsoleSettings, ManualAutoCompleteList);
	static_assert(UConsoleSettings_ManualAutoCompleteList_Offset == 0x38, "UConsoleSettings::ManualAutoCompleteList offset is not 38");
	auto constexpr UConsoleSettings_AutoCompleteMapPaths_Offset = offsetof(UConsoleSettings, AutoCompleteMapPaths);
	static_assert(UConsoleSettings_AutoCompleteMapPaths_Offset == 0x48, "UConsoleSettings::AutoCompleteMapPaths offset is not 48");
	auto constexpr UConsoleSettings_BackgroundOpacityPercentage_Offset = offsetof(UConsoleSettings, BackgroundOpacityPercentage);
	static_assert(UConsoleSettings_BackgroundOpacityPercentage_Offset == 0x58, "UConsoleSettings::BackgroundOpacityPercentage offset is not 58");
	auto constexpr UConsoleSettings_boolField5C_Offset = offsetof(UConsoleSettings, boolField5C);
	static_assert(UConsoleSettings_boolField5C_Offset == 0x5c, "UConsoleSettings::boolField5C offset is not 5c");
	auto constexpr UConsoleSettings_InputColor_Offset = offsetof(UConsoleSettings, InputColor);
	static_assert(UConsoleSettings_InputColor_Offset == 0x60, "UConsoleSettings::InputColor offset is not 60");
	auto constexpr UConsoleSettings_HistoryColor_Offset = offsetof(UConsoleSettings, HistoryColor);
	static_assert(UConsoleSettings_HistoryColor_Offset == 0x64, "UConsoleSettings::HistoryColor offset is not 64");
	auto constexpr UConsoleSettings_AutoCompleteCommandColor_Offset = offsetof(UConsoleSettings, AutoCompleteCommandColor);
	static_assert(UConsoleSettings_AutoCompleteCommandColor_Offset == 0x68, "UConsoleSettings::AutoCompleteCommandColor offset is not 68");
	auto constexpr UConsoleSettings_AutoCompleteCVarColor_Offset = offsetof(UConsoleSettings, AutoCompleteCVarColor);
	static_assert(UConsoleSettings_AutoCompleteCVarColor_Offset == 0x6c, "UConsoleSettings::AutoCompleteCVarColor offset is not 6c");
	auto constexpr UConsoleSettings_AutoCompleteFadedColor_Offset = offsetof(UConsoleSettings, AutoCompleteFadedColor);
	static_assert(UConsoleSettings_AutoCompleteFadedColor_Offset == 0x70, "UConsoleSettings::AutoCompleteFadedColor offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
