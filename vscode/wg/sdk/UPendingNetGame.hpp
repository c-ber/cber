#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPendingNetGame // Size: 0xD0
	: public UObject // Size: 0x30
{
private:
	typedef UPendingNetGame t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(769); // id32("Class Engine.PendingNetGame")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	ExternalPtr<struct UNetDriver> NetDriver; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.PendingNetGame.NetDriver */
	ExternalPtr<struct UDemoNetDriver> DemoNetDriver; /* Ofs: 0x40 Size: 0x8 - ObjectProperty Engine.PendingNetGame.DemoNetDriver */
	uint8_t UnknownData48[0x88];


	inline bool SetNetDriver(t_structHelper inst, ExternalPtr<struct UNetDriver> value) { inst.WriteOffset(0x38, value); }
	inline bool SetDemoNetDriver(t_structHelper inst, ExternalPtr<struct UDemoNetDriver> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPendingNetGame = sizeof(UPendingNetGame); // 208
    static_assert(sizeof(UPendingNetGame) == 0xD0, "Size of UPendingNetGame is not correct.");
	auto constexpr UPendingNetGame_NetDriver_Offset = offsetof(UPendingNetGame, NetDriver);
	static_assert(UPendingNetGame_NetDriver_Offset == 0x38, "UPendingNetGame::NetDriver offset is not 38");
	auto constexpr UPendingNetGame_DemoNetDriver_Offset = offsetof(UPendingNetGame, DemoNetDriver);
	static_assert(UPendingNetGame_DemoNetDriver_Offset == 0x40, "UPendingNetGame::DemoNetDriver offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
