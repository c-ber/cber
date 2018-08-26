#pragma once
#include "UPlayer.hpp"
#include "FUniqueNetIdRepl.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNetConnection // Size: 0x65680
	: public UPlayer // Size: 0x60
{
private:
	typedef UNetConnection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(718); // id32("Class Engine.NetConnection")
		return ptr;
	}
	TArray<ExternalPtr<struct UChildConnection>> Children; /* Ofs: 0x60 Size: 0x10 - ArrayProperty Engine.NetConnection.Children */
	ExternalPtr<struct UNetDriver> Driver; /* Ofs: 0x70 Size: 0x8 - ObjectProperty Engine.NetConnection.Driver */
	ExternalPtr<struct UClass> PackageMapClass; /* Ofs: 0x78 Size: 0x8 - ClassProperty Engine.NetConnection.PackageMapClass */
	ExternalPtr<struct UPackageMap> PackageMap; /* Ofs: 0x80 Size: 0x8 - ObjectProperty Engine.NetConnection.PackageMap */
	TArray<ExternalPtr<struct UChannel>> OpenChannels; /* Ofs: 0x88 Size: 0x10 - ArrayProperty Engine.NetConnection.OpenChannels */
	TArray<ExternalPtr<struct UActor>> SentTemporaries; /* Ofs: 0x98 Size: 0x10 - ArrayProperty Engine.NetConnection.SentTemporaries */
	ExternalPtr<struct UActor> ViewTarget; /* Ofs: 0xA8 Size: 0x8 - ObjectProperty Engine.NetConnection.ViewTarget */
	ExternalPtr<struct UActor> OwningActor; /* Ofs: 0xB0 Size: 0x8 - ObjectProperty Engine.NetConnection.OwningActor */
	int32_t MaxPacket; /* Ofs: 0xB8 Size: 0x4 - IntProperty Engine.NetConnection.MaxPacket */
	uint8_t boolFieldBC;
	uint8_t UnknownDataBD[0xB3];
	FUniqueNetIdRepl PlayerId; /* Ofs: 0x170 Size: 0x18 - StructProperty Engine.NetConnection.PlayerId */
	uint8_t UnknownData188[0x68];
	double LastReceiveTime; /* Ofs: 0x1F0 Size: 0x8 - DoubleProperty Engine.NetConnection.LastReceiveTime */
	uint8_t UnknownData1F8[0x65448];
	TArray<ExternalPtr<struct UChannel>> ChannelsToTick; /* Ofs: 0x65640 Size: 0x10 - ArrayProperty Engine.NetConnection.ChannelsToTick */
	uint8_t UnknownData65650[0x30];


	inline bool SetChildren(t_structHelper inst, TArray<ExternalPtr<struct UChildConnection>> value) { inst.WriteOffset(0x60, value); }
	inline bool SetDriver(t_structHelper inst, ExternalPtr<struct UNetDriver> value) { inst.WriteOffset(0x70, value); }
	inline bool SetPackageMapClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x78, value); }
	inline bool SetPackageMap(t_structHelper inst, ExternalPtr<struct UPackageMap> value) { inst.WriteOffset(0x80, value); }
	inline bool SetOpenChannels(t_structHelper inst, TArray<ExternalPtr<struct UChannel>> value) { inst.WriteOffset(0x88, value); }
	inline bool SetSentTemporaries(t_structHelper inst, TArray<ExternalPtr<struct UActor>> value) { inst.WriteOffset(0x98, value); }
	inline bool SetViewTarget(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0xA8, value); }
	inline bool SetOwningActor(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0xB0, value); }
	inline bool SetMaxPacket(t_structHelper inst, int32_t value) { inst.WriteOffset(0xB8, value); }
	inline bool InternalAck()
	{
		return boolFieldBC& 0x1;
	}
	inline bool SetInternalAck(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xBC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPlayerId(t_structHelper inst, FUniqueNetIdRepl value) { inst.WriteOffset(0x170, value); }
	inline bool SetLastReceiveTime(t_structHelper inst, double value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetChannelsToTick(t_structHelper inst, TArray<ExternalPtr<struct UChannel>> value) { inst.WriteOffset(0x65640, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNetConnection = sizeof(UNetConnection); // 415360
    static_assert(sizeof(UNetConnection) == 0x65680, "Size of UNetConnection is not correct.");
	auto constexpr UNetConnection_Children_Offset = offsetof(UNetConnection, Children);
	static_assert(UNetConnection_Children_Offset == 0x60, "UNetConnection::Children offset is not 60");
	auto constexpr UNetConnection_Driver_Offset = offsetof(UNetConnection, Driver);
	static_assert(UNetConnection_Driver_Offset == 0x70, "UNetConnection::Driver offset is not 70");
	auto constexpr UNetConnection_PackageMapClass_Offset = offsetof(UNetConnection, PackageMapClass);
	static_assert(UNetConnection_PackageMapClass_Offset == 0x78, "UNetConnection::PackageMapClass offset is not 78");
	auto constexpr UNetConnection_PackageMap_Offset = offsetof(UNetConnection, PackageMap);
	static_assert(UNetConnection_PackageMap_Offset == 0x80, "UNetConnection::PackageMap offset is not 80");
	auto constexpr UNetConnection_OpenChannels_Offset = offsetof(UNetConnection, OpenChannels);
	static_assert(UNetConnection_OpenChannels_Offset == 0x88, "UNetConnection::OpenChannels offset is not 88");
	auto constexpr UNetConnection_SentTemporaries_Offset = offsetof(UNetConnection, SentTemporaries);
	static_assert(UNetConnection_SentTemporaries_Offset == 0x98, "UNetConnection::SentTemporaries offset is not 98");
	auto constexpr UNetConnection_ViewTarget_Offset = offsetof(UNetConnection, ViewTarget);
	static_assert(UNetConnection_ViewTarget_Offset == 0xa8, "UNetConnection::ViewTarget offset is not a8");
	auto constexpr UNetConnection_OwningActor_Offset = offsetof(UNetConnection, OwningActor);
	static_assert(UNetConnection_OwningActor_Offset == 0xb0, "UNetConnection::OwningActor offset is not b0");
	auto constexpr UNetConnection_MaxPacket_Offset = offsetof(UNetConnection, MaxPacket);
	static_assert(UNetConnection_MaxPacket_Offset == 0xb8, "UNetConnection::MaxPacket offset is not b8");
	auto constexpr UNetConnection_boolFieldBC_Offset = offsetof(UNetConnection, boolFieldBC);
	static_assert(UNetConnection_boolFieldBC_Offset == 0xbc, "UNetConnection::boolFieldBC offset is not bc");
	auto constexpr UNetConnection_PlayerId_Offset = offsetof(UNetConnection, PlayerId);
	static_assert(UNetConnection_PlayerId_Offset == 0x170, "UNetConnection::PlayerId offset is not 170");
	auto constexpr UNetConnection_LastReceiveTime_Offset = offsetof(UNetConnection, LastReceiveTime);
	static_assert(UNetConnection_LastReceiveTime_Offset == 0x1f0, "UNetConnection::LastReceiveTime offset is not 1f0");
	auto constexpr UNetConnection_ChannelsToTick_Offset = offsetof(UNetConnection, ChannelsToTick);
	static_assert(UNetConnection_ChannelsToTick_Offset == 0x65640, "UNetConnection::ChannelsToTick offset is not 65640");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
