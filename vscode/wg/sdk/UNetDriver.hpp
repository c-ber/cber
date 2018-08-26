#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNetDriver // Size: 0x450
	: public UObject // Size: 0x30
{
private:
	typedef UNetDriver t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(715); // id32("Class Engine.NetDriver")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	FString NetConnectionClassName; /* Ofs: 0x38 Size: 0x10 - StrProperty Engine.NetDriver.NetConnectionClassName */
	int32_t MaxDownloadSize; /* Ofs: 0x48 Size: 0x4 - IntProperty Engine.NetDriver.MaxDownloadSize */
	uint8_t boolField4C;
	uint8_t UnknownData4D[0x3];
	int32_t NetServerMaxTickRate; /* Ofs: 0x50 Size: 0x4 - IntProperty Engine.NetDriver.NetServerMaxTickRate */
	int32_t MaxInternetClientRate; /* Ofs: 0x54 Size: 0x4 - IntProperty Engine.NetDriver.MaxInternetClientRate */
	int32_t MaxClientRate; /* Ofs: 0x58 Size: 0x4 - IntProperty Engine.NetDriver.MaxClientRate */
	float ServerTravelPause; /* Ofs: 0x5C Size: 0x4 - FloatProperty Engine.NetDriver.ServerTravelPause */
	float SpawnPrioritySeconds; /* Ofs: 0x60 Size: 0x4 - FloatProperty Engine.NetDriver.SpawnPrioritySeconds */
	float RelevantTimeout; /* Ofs: 0x64 Size: 0x4 - FloatProperty Engine.NetDriver.RelevantTimeout */
	float KeepAliveTime; /* Ofs: 0x68 Size: 0x4 - FloatProperty Engine.NetDriver.KeepAliveTime */
	float InitialConnectTimeout; /* Ofs: 0x6C Size: 0x4 - FloatProperty Engine.NetDriver.InitialConnectTimeout */
	float ConnectionTimeout; /* Ofs: 0x70 Size: 0x4 - FloatProperty Engine.NetDriver.ConnectionTimeout */
	float TimeoutMultiplierForUnoptimizedBuilds; /* Ofs: 0x74 Size: 0x4 - FloatProperty Engine.NetDriver.TimeoutMultiplierForUnoptimizedBuilds */
	uint8_t boolField78;
	uint8_t UnknownData79[0x7];
	ExternalPtr<struct UNetConnection> ServerConnection; /* Ofs: 0x80 Size: 0x8 - ObjectProperty Engine.NetDriver.ServerConnection */
	TArray<ExternalPtr<struct UNetConnection>> ClientConnections; /* Ofs: 0x88 Size: 0x10 - ArrayProperty Engine.NetDriver.ClientConnections */
	uint8_t UnknownData98[0x28];
	EncryptedExternalPtr<struct UWorld> World; /* Ofs: 0xC0 Size: 0x10 - EncryptedObjectProperty Engine.NetDriver.World */
	uint8_t UnknownDataD0[0x20];
	ExternalPtr<struct UClass> NetConnectionClass; /* Ofs: 0xF0 Size: 0x8 - ClassProperty Engine.NetDriver.NetConnectionClass */
	ExternalPtr<struct UProperty> RoleProperty; /* Ofs: 0xF8 Size: 0x8 - ObjectProperty Engine.NetDriver.RoleProperty */
	ExternalPtr<struct UProperty> RemoteRoleProperty; /* Ofs: 0x100 Size: 0x8 - ObjectProperty Engine.NetDriver.RemoteRoleProperty */
	FName NetDriverName; /* Ofs: 0x108 Size: 0x8 - NameProperty Engine.NetDriver.NetDriverName */
	uint8_t UnknownData110[0x8];
	float Time; /* Ofs: 0x118 Size: 0x4 - FloatProperty Engine.NetDriver.Time */
	uint8_t UnknownData11C[0x334];


	inline bool SetNetConnectionClassName(t_structHelper inst, FString value) { inst.WriteOffset(0x38, value); }
	inline bool SetMaxDownloadSize(t_structHelper inst, int32_t value) { inst.WriteOffset(0x48, value); }
	inline bool bClampListenServerTickRate()
	{
		return boolField4C& 0x1;
	}
	inline bool SetbClampListenServerTickRate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNetServerMaxTickRate(t_structHelper inst, int32_t value) { inst.WriteOffset(0x50, value); }
	inline bool SetMaxInternetClientRate(t_structHelper inst, int32_t value) { inst.WriteOffset(0x54, value); }
	inline bool SetMaxClientRate(t_structHelper inst, int32_t value) { inst.WriteOffset(0x58, value); }
	inline bool SetServerTravelPause(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
	inline bool SetSpawnPrioritySeconds(t_structHelper inst, float value) { inst.WriteOffset(0x60, value); }
	inline bool SetRelevantTimeout(t_structHelper inst, float value) { inst.WriteOffset(0x64, value); }
	inline bool SetKeepAliveTime(t_structHelper inst, float value) { inst.WriteOffset(0x68, value); }
	inline bool SetInitialConnectTimeout(t_structHelper inst, float value) { inst.WriteOffset(0x6C, value); }
	inline bool SetConnectionTimeout(t_structHelper inst, float value) { inst.WriteOffset(0x70, value); }
	inline bool SetTimeoutMultiplierForUnoptimizedBuilds(t_structHelper inst, float value) { inst.WriteOffset(0x74, value); }
	inline bool bNoTimeouts()
	{
		return boolField78& 0x1;
	}
	inline bool SetbNoTimeouts(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x78, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetServerConnection(t_structHelper inst, ExternalPtr<struct UNetConnection> value) { inst.WriteOffset(0x80, value); }
	inline bool SetClientConnections(t_structHelper inst, TArray<ExternalPtr<struct UNetConnection>> value) { inst.WriteOffset(0x88, value); }
	inline bool SetWorld(t_structHelper inst, EncryptedExternalPtr<struct UWorld> value) { inst.WriteOffset(0xC0, value); }
	inline bool SetNetConnectionClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xF0, value); }
	inline bool SetRoleProperty(t_structHelper inst, ExternalPtr<struct UProperty> value) { inst.WriteOffset(0xF8, value); }
	inline bool SetRemoteRoleProperty(t_structHelper inst, ExternalPtr<struct UProperty> value) { inst.WriteOffset(0x100, value); }
	inline bool SetNetDriverName(t_structHelper inst, FName value) { inst.WriteOffset(0x108, value); }
	inline bool SetTime(t_structHelper inst, float value) { inst.WriteOffset(0x118, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNetDriver = sizeof(UNetDriver); // 1104
    static_assert(sizeof(UNetDriver) == 0x450, "Size of UNetDriver is not correct.");
	auto constexpr UNetDriver_NetConnectionClassName_Offset = offsetof(UNetDriver, NetConnectionClassName);
	static_assert(UNetDriver_NetConnectionClassName_Offset == 0x38, "UNetDriver::NetConnectionClassName offset is not 38");
	auto constexpr UNetDriver_MaxDownloadSize_Offset = offsetof(UNetDriver, MaxDownloadSize);
	static_assert(UNetDriver_MaxDownloadSize_Offset == 0x48, "UNetDriver::MaxDownloadSize offset is not 48");
	auto constexpr UNetDriver_boolField4C_Offset = offsetof(UNetDriver, boolField4C);
	static_assert(UNetDriver_boolField4C_Offset == 0x4c, "UNetDriver::boolField4C offset is not 4c");
	auto constexpr UNetDriver_NetServerMaxTickRate_Offset = offsetof(UNetDriver, NetServerMaxTickRate);
	static_assert(UNetDriver_NetServerMaxTickRate_Offset == 0x50, "UNetDriver::NetServerMaxTickRate offset is not 50");
	auto constexpr UNetDriver_MaxInternetClientRate_Offset = offsetof(UNetDriver, MaxInternetClientRate);
	static_assert(UNetDriver_MaxInternetClientRate_Offset == 0x54, "UNetDriver::MaxInternetClientRate offset is not 54");
	auto constexpr UNetDriver_MaxClientRate_Offset = offsetof(UNetDriver, MaxClientRate);
	static_assert(UNetDriver_MaxClientRate_Offset == 0x58, "UNetDriver::MaxClientRate offset is not 58");
	auto constexpr UNetDriver_ServerTravelPause_Offset = offsetof(UNetDriver, ServerTravelPause);
	static_assert(UNetDriver_ServerTravelPause_Offset == 0x5c, "UNetDriver::ServerTravelPause offset is not 5c");
	auto constexpr UNetDriver_SpawnPrioritySeconds_Offset = offsetof(UNetDriver, SpawnPrioritySeconds);
	static_assert(UNetDriver_SpawnPrioritySeconds_Offset == 0x60, "UNetDriver::SpawnPrioritySeconds offset is not 60");
	auto constexpr UNetDriver_RelevantTimeout_Offset = offsetof(UNetDriver, RelevantTimeout);
	static_assert(UNetDriver_RelevantTimeout_Offset == 0x64, "UNetDriver::RelevantTimeout offset is not 64");
	auto constexpr UNetDriver_KeepAliveTime_Offset = offsetof(UNetDriver, KeepAliveTime);
	static_assert(UNetDriver_KeepAliveTime_Offset == 0x68, "UNetDriver::KeepAliveTime offset is not 68");
	auto constexpr UNetDriver_InitialConnectTimeout_Offset = offsetof(UNetDriver, InitialConnectTimeout);
	static_assert(UNetDriver_InitialConnectTimeout_Offset == 0x6c, "UNetDriver::InitialConnectTimeout offset is not 6c");
	auto constexpr UNetDriver_ConnectionTimeout_Offset = offsetof(UNetDriver, ConnectionTimeout);
	static_assert(UNetDriver_ConnectionTimeout_Offset == 0x70, "UNetDriver::ConnectionTimeout offset is not 70");
	auto constexpr UNetDriver_TimeoutMultiplierForUnoptimizedBuilds_Offset = offsetof(UNetDriver, TimeoutMultiplierForUnoptimizedBuilds);
	static_assert(UNetDriver_TimeoutMultiplierForUnoptimizedBuilds_Offset == 0x74, "UNetDriver::TimeoutMultiplierForUnoptimizedBuilds offset is not 74");
	auto constexpr UNetDriver_boolField78_Offset = offsetof(UNetDriver, boolField78);
	static_assert(UNetDriver_boolField78_Offset == 0x78, "UNetDriver::boolField78 offset is not 78");
	auto constexpr UNetDriver_ServerConnection_Offset = offsetof(UNetDriver, ServerConnection);
	static_assert(UNetDriver_ServerConnection_Offset == 0x80, "UNetDriver::ServerConnection offset is not 80");
	auto constexpr UNetDriver_ClientConnections_Offset = offsetof(UNetDriver, ClientConnections);
	static_assert(UNetDriver_ClientConnections_Offset == 0x88, "UNetDriver::ClientConnections offset is not 88");
	auto constexpr UNetDriver_World_Offset = offsetof(UNetDriver, World);
	static_assert(UNetDriver_World_Offset == 0xc0, "UNetDriver::World offset is not c0");
	auto constexpr UNetDriver_NetConnectionClass_Offset = offsetof(UNetDriver, NetConnectionClass);
	static_assert(UNetDriver_NetConnectionClass_Offset == 0xf0, "UNetDriver::NetConnectionClass offset is not f0");
	auto constexpr UNetDriver_RoleProperty_Offset = offsetof(UNetDriver, RoleProperty);
	static_assert(UNetDriver_RoleProperty_Offset == 0xf8, "UNetDriver::RoleProperty offset is not f8");
	auto constexpr UNetDriver_RemoteRoleProperty_Offset = offsetof(UNetDriver, RemoteRoleProperty);
	static_assert(UNetDriver_RemoteRoleProperty_Offset == 0x100, "UNetDriver::RemoteRoleProperty offset is not 100");
	auto constexpr UNetDriver_NetDriverName_Offset = offsetof(UNetDriver, NetDriverName);
	static_assert(UNetDriver_NetDriverName_Offset == 0x108, "UNetDriver::NetDriverName offset is not 108");
	auto constexpr UNetDriver_Time_Offset = offsetof(UNetDriver, Time);
	static_assert(UNetDriver_Time_Offset == 0x118, "UNetDriver::Time offset is not 118");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
