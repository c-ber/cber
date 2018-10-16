#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULobbyItemBundleIdPublisher // Size: 0x58
	: public UObject // Size: 0x30
{
private:
	typedef ULobbyItemBundleIdPublisher t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1923); // id32("Class TslGame.LobbyItemBundleIdPublisher")
		return ptr;
	}
	FString LobbyItemPath; /* Ofs: 0x30 Size: 0x10 - StrProperty TslGame.LobbyItemBundleIdPublisher.LobbyItemPath */
	uint8_t UnknownData40[0x18];


	inline bool SetLobbyItemPath(t_structHelper inst, FString value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULobbyItemBundleIdPublisher = sizeof(ULobbyItemBundleIdPublisher); // 88
    static_assert(sizeof(ULobbyItemBundleIdPublisher) == 0x58, "Size of ULobbyItemBundleIdPublisher is not correct.");
	auto constexpr ULobbyItemBundleIdPublisher_LobbyItemPath_Offset = offsetof(ULobbyItemBundleIdPublisher, LobbyItemPath);
	static_assert(ULobbyItemBundleIdPublisher_LobbyItemPath_Offset == 0x30, "ULobbyItemBundleIdPublisher::LobbyItemPath offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
