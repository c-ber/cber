#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCommandlet // Size: 0x88
	: public UObject // Size: 0x30
{
private:
	typedef UCommandlet t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(700); // id32("Class Engine.Commandlet")
		return ptr;
	}
	FString HelpDescription; /* Ofs: 0x30 Size: 0x10 - StrProperty Engine.Commandlet.HelpDescription */
	FString HelpUsage; /* Ofs: 0x40 Size: 0x10 - StrProperty Engine.Commandlet.HelpUsage */
	FString HelpWebLink; /* Ofs: 0x50 Size: 0x10 - StrProperty Engine.Commandlet.HelpWebLink */
	TArray<struct FString> HelpParamNames; /* Ofs: 0x60 Size: 0x10 - ArrayProperty Engine.Commandlet.HelpParamNames */
	TArray<struct FString> HelpParamDescriptions; /* Ofs: 0x70 Size: 0x10 - ArrayProperty Engine.Commandlet.HelpParamDescriptions */
	uint8_t boolField80;
	uint8_t UnknownData81[0x7];


	inline bool SetHelpDescription(t_structHelper inst, FString value) { inst.WriteOffset(0x30, value); }
	inline bool SetHelpUsage(t_structHelper inst, FString value) { inst.WriteOffset(0x40, value); }
	inline bool SetHelpWebLink(t_structHelper inst, FString value) { inst.WriteOffset(0x50, value); }
	inline bool SetHelpParamNames(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x60, value); }
	inline bool SetHelpParamDescriptions(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x70, value); }
	inline bool IsServer()
	{
		return boolField80& 0x1;
	}
	inline bool SetIsServer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x80, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool IsClient()
	{
		return boolField80& 0x2;
	}
	inline bool SetIsClient(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x80, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool IsEditor()
	{
		return boolField80& 0x4;
	}
	inline bool SetIsEditor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x80, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool LogToConsole()
	{
		return boolField80& 0x8;
	}
	inline bool SetLogToConsole(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x80, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool ShowErrorCount()
	{
		return boolField80& 0x10;
	}
	inline bool SetShowErrorCount(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x80, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCommandlet = sizeof(UCommandlet); // 136
    static_assert(sizeof(UCommandlet) == 0x88, "Size of UCommandlet is not correct.");
	auto constexpr UCommandlet_HelpDescription_Offset = offsetof(UCommandlet, HelpDescription);
	static_assert(UCommandlet_HelpDescription_Offset == 0x30, "UCommandlet::HelpDescription offset is not 30");
	auto constexpr UCommandlet_HelpUsage_Offset = offsetof(UCommandlet, HelpUsage);
	static_assert(UCommandlet_HelpUsage_Offset == 0x40, "UCommandlet::HelpUsage offset is not 40");
	auto constexpr UCommandlet_HelpWebLink_Offset = offsetof(UCommandlet, HelpWebLink);
	static_assert(UCommandlet_HelpWebLink_Offset == 0x50, "UCommandlet::HelpWebLink offset is not 50");
	auto constexpr UCommandlet_HelpParamNames_Offset = offsetof(UCommandlet, HelpParamNames);
	static_assert(UCommandlet_HelpParamNames_Offset == 0x60, "UCommandlet::HelpParamNames offset is not 60");
	auto constexpr UCommandlet_HelpParamDescriptions_Offset = offsetof(UCommandlet, HelpParamDescriptions);
	static_assert(UCommandlet_HelpParamDescriptions_Offset == 0x70, "UCommandlet::HelpParamDescriptions offset is not 70");
	auto constexpr UCommandlet_boolField80_Offset = offsetof(UCommandlet, boolField80);
	static_assert(UCommandlet_boolField80_Offset == 0x80, "UCommandlet::boolField80 offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
