#pragma once
#include "UDeveloperSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNetworkSettings // Size: 0x50
	: public UDeveloperSettings // Size: 0x40
{
private:
	typedef UNetworkSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(730); // id32("Class Engine.NetworkSettings")
		return ptr;
	}
	uint8_t boolField40;
	uint8_t UnknownData41[0x3];
	int32_t MaxRepArraySize; /* Ofs: 0x44 Size: 0x4 - IntProperty Engine.NetworkSettings.MaxRepArraySize */
	int32_t MaxRepArrayMemory; /* Ofs: 0x48 Size: 0x4 - IntProperty Engine.NetworkSettings.MaxRepArrayMemory */
	uint8_t UnknownData4C[0x4];


	inline bool bVerifyPeer()
	{
		return boolField40& 0x1;
	}
	inline bool SetbVerifyPeer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableMultiplayerWorldOriginRebasing()
	{
		return boolField40& 0x2;
	}
	inline bool SetbEnableMultiplayerWorldOriginRebasing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetMaxRepArraySize(t_structHelper inst, int32_t value) { inst.WriteOffset(0x44, value); }
	inline bool SetMaxRepArrayMemory(t_structHelper inst, int32_t value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNetworkSettings = sizeof(UNetworkSettings); // 80
    static_assert(sizeof(UNetworkSettings) == 0x50, "Size of UNetworkSettings is not correct.");
	auto constexpr UNetworkSettings_boolField40_Offset = offsetof(UNetworkSettings, boolField40);
	static_assert(UNetworkSettings_boolField40_Offset == 0x40, "UNetworkSettings::boolField40 offset is not 40");
	auto constexpr UNetworkSettings_MaxRepArraySize_Offset = offsetof(UNetworkSettings, MaxRepArraySize);
	static_assert(UNetworkSettings_MaxRepArraySize_Offset == 0x44, "UNetworkSettings::MaxRepArraySize offset is not 44");
	auto constexpr UNetworkSettings_MaxRepArrayMemory_Offset = offsetof(UNetworkSettings, MaxRepArrayMemory);
	static_assert(UNetworkSettings_MaxRepArrayMemory_Offset == 0x48, "UNetworkSettings::MaxRepArrayMemory offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
