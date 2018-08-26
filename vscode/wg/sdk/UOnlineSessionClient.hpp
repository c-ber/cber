#pragma once
#include "UOnlineSession.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOnlineSessionClient // Size: 0x2C0
	: public UOnlineSession // Size: 0x30
{
private:
	typedef UOnlineSessionClient t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2115); // id32("Class OnlineSubsystemUtils.OnlineSessionClient")
		return ptr;
	}
	uint8_t UnknownData30[0x280];
	uint8_t boolField2B0;
	uint8_t boolField2B1;
	uint8_t UnknownData2B2[0xE];


	inline bool bIsFromInvite()
	{
		return boolField2B0& 0x1;
	}
	inline bool SetbIsFromInvite(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2B0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bHandlingDisconnect()
	{
		return boolField2B1& 0x1;
	}
	inline bool SetbHandlingDisconnect(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2B1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOnlineSessionClient = sizeof(UOnlineSessionClient); // 704
    static_assert(sizeof(UOnlineSessionClient) == 0x2C0, "Size of UOnlineSessionClient is not correct.");
	auto constexpr UOnlineSessionClient_boolField2B0_Offset = offsetof(UOnlineSessionClient, boolField2B0);
	static_assert(UOnlineSessionClient_boolField2B0_Offset == 0x2b0, "UOnlineSessionClient::boolField2B0 offset is not 2b0");
	auto constexpr UOnlineSessionClient_boolField2B1_Offset = offsetof(UOnlineSessionClient, boolField2B1);
	static_assert(UOnlineSessionClient_boolField2B1_Offset == 0x2b1, "UOnlineSessionClient::boolField2B1 offset is not 2b1");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
