#pragma once
#include "UInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameSession // Size: 0x420
	: public UInfo // Size: 0x410
{
private:
	typedef UGameSession t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1392); // id32("Class Engine.GameSession")
		return ptr;
	}
//	int32_t MaxSpectators; /* Ofs: 0x408 Size: 0x4 - IntProperty Engine.GameSession.MaxSpectators */
//	int32_t MaxPlayers; /* Ofs: 0x40C Size: 0x4 - IntProperty Engine.GameSession.MaxPlayers */
	int32_t MaxPartySize; /* Ofs: 0x410 Size: 0x4 - IntProperty Engine.GameSession.MaxPartySize */
	uint8_t MaxSplitscreensPerConnection; /* Ofs: 0x414 Size: 0x1 - ByteProperty Engine.GameSession.MaxSplitscreensPerConnection */
	uint8_t boolField415;
	uint8_t UnknownData416[0x2];
	FName SessionName; /* Ofs: 0x418 Size: 0x8 - NameProperty Engine.GameSession.SessionName */


//	inline bool SetMaxSpectators(t_structHelper inst, int32_t value) { inst.WriteOffset(0x408, value); }
//	inline bool SetMaxPlayers(t_structHelper inst, int32_t value) { inst.WriteOffset(0x40C, value); }
	inline bool SetMaxPartySize(t_structHelper inst, int32_t value) { inst.WriteOffset(0x410, value); }
	inline bool SetMaxSplitscreensPerConnection(t_structHelper inst, uint8_t value) { inst.WriteOffset(0x414, value); }
	inline bool bRequiresPushToTalk()
	{
		return boolField415& 0x1;
	}
	inline bool SetbRequiresPushToTalk(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x415, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSessionName(t_structHelper inst, FName value) { inst.WriteOffset(0x418, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameSession = sizeof(UGameSession); // 1056
    static_assert(sizeof(UGameSession) == 0x420, "Size of UGameSession is not correct.");
//	auto constexpr UGameSession_MaxSpectators_Offset = offsetof(UGameSession, MaxSpectators);
//	static_assert(UGameSession_MaxSpectators_Offset == 0x408, "UGameSession::MaxSpectators offset is not 408");
//	auto constexpr UGameSession_MaxPlayers_Offset = offsetof(UGameSession, MaxPlayers);
//	static_assert(UGameSession_MaxPlayers_Offset == 0x40c, "UGameSession::MaxPlayers offset is not 40c");
	auto constexpr UGameSession_MaxPartySize_Offset = offsetof(UGameSession, MaxPartySize);
	static_assert(UGameSession_MaxPartySize_Offset == 0x410, "UGameSession::MaxPartySize offset is not 410");
	auto constexpr UGameSession_MaxSplitscreensPerConnection_Offset = offsetof(UGameSession, MaxSplitscreensPerConnection);
	static_assert(UGameSession_MaxSplitscreensPerConnection_Offset == 0x414, "UGameSession::MaxSplitscreensPerConnection offset is not 414");
	auto constexpr UGameSession_boolField415_Offset = offsetof(UGameSession, boolField415);
	static_assert(UGameSession_boolField415_Offset == 0x415, "UGameSession::boolField415 offset is not 415");
	auto constexpr UGameSession_SessionName_Offset = offsetof(UGameSession, SessionName);
	static_assert(UGameSession_SessionName_Offset == 0x418, "UGameSession::SessionName offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
