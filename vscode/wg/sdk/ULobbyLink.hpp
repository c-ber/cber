#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULobbyLink // Size: 0xE0
	: public UObject // Size: 0x30
{
private:
	typedef ULobbyLink t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1924); // id32("Class TslGame.LobbyLink")
		return ptr;
	}
	uint8_t UnknownData30[0xA8];
	uint8_t boolFieldD8;
	uint8_t UnknownDataD9[0x7];


	inline bool bResponsePrepareUsers()
	{
		return boolFieldD8& 0x1;
	}
	inline bool SetbResponsePrepareUsers(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULobbyLink = sizeof(ULobbyLink); // 224
    static_assert(sizeof(ULobbyLink) == 0xE0, "Size of ULobbyLink is not correct.");
	auto constexpr ULobbyLink_boolFieldD8_Offset = offsetof(ULobbyLink, boolFieldD8);
	static_assert(ULobbyLink_boolFieldD8_Offset == 0xd8, "ULobbyLink::boolFieldD8 offset is not d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
