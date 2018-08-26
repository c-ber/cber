#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameSessionSettings // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef UGameSessionSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1276); // id32("Class EngineSettings.GameSessionSettings")
		return ptr;
	}
	int32_t MaxSpectators; /* Ofs: 0x30 Size: 0x4 - IntProperty EngineSettings.GameSessionSettings.MaxSpectators */
	int32_t MaxPlayers; /* Ofs: 0x34 Size: 0x4 - IntProperty EngineSettings.GameSessionSettings.MaxPlayers */
	uint8_t boolField38;
	uint8_t UnknownData39[0x7];


	inline bool SetMaxSpectators(t_structHelper inst, int32_t value) { inst.WriteOffset(0x30, value); }
	inline bool SetMaxPlayers(t_structHelper inst, int32_t value) { inst.WriteOffset(0x34, value); }
	inline bool bRequiresPushToTalk()
	{
		return boolField38& 0x1;
	}
	inline bool SetbRequiresPushToTalk(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameSessionSettings = sizeof(UGameSessionSettings); // 64
    static_assert(sizeof(UGameSessionSettings) == 0x40, "Size of UGameSessionSettings is not correct.");
	auto constexpr UGameSessionSettings_MaxSpectators_Offset = offsetof(UGameSessionSettings, MaxSpectators);
	static_assert(UGameSessionSettings_MaxSpectators_Offset == 0x30, "UGameSessionSettings::MaxSpectators offset is not 30");
	auto constexpr UGameSessionSettings_MaxPlayers_Offset = offsetof(UGameSessionSettings, MaxPlayers);
	static_assert(UGameSessionSettings_MaxPlayers_Offset == 0x34, "UGameSessionSettings::MaxPlayers offset is not 34");
	auto constexpr UGameSessionSettings_boolField38_Offset = offsetof(UGameSessionSettings, boolField38);
	static_assert(UGameSessionSettings_boolField38_Offset == 0x38, "UGameSessionSettings::boolField38 offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
