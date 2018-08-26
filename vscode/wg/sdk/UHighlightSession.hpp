#pragma once
#include "FHighlightRecordConfig.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UHighlightSession // Size: 0xA8
	: public UObject // Size: 0x30
{
private:
	typedef UHighlightSession t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1896); // id32("Class TslGame.HighlightSession")
		return ptr;
	}
	FHighlightRecordConfig Config_Kill; /* Ofs: 0x30 Size: 0xC - StructProperty TslGame.HighlightSession.Config_Kill */
	FHighlightRecordConfig Config_KillGroggy; /* Ofs: 0x3C Size: 0xC - StructProperty TslGame.HighlightSession.Config_KillGroggy */
	FHighlightRecordConfig Config_Die; /* Ofs: 0x48 Size: 0xC - StructProperty TslGame.HighlightSession.Config_Die */
	FHighlightRecordConfig Config_DieGroggy; /* Ofs: 0x54 Size: 0xC - StructProperty TslGame.HighlightSession.Config_DieGroggy */
	FHighlightRecordConfig Config_EndMatch; /* Ofs: 0x60 Size: 0xC - StructProperty TslGame.HighlightSession.Config_EndMatch */
	FHighlightRecordConfig Config_DeathCam; /* Ofs: 0x6C Size: 0xC - StructProperty TslGame.HighlightSession.Config_DeathCam */
	ExternalPtr<struct UTslGameInstance> TslGameInstance; /* Ofs: 0x78 Size: 0x8 - ObjectProperty TslGame.HighlightSession.TslGameInstance */
	uint8_t UnknownData80[0x28];


	inline bool SetConfig_Kill(t_structHelper inst, FHighlightRecordConfig value) { inst.WriteOffset(0x30, value); }
	inline bool SetConfig_KillGroggy(t_structHelper inst, FHighlightRecordConfig value) { inst.WriteOffset(0x3C, value); }
	inline bool SetConfig_Die(t_structHelper inst, FHighlightRecordConfig value) { inst.WriteOffset(0x48, value); }
	inline bool SetConfig_DieGroggy(t_structHelper inst, FHighlightRecordConfig value) { inst.WriteOffset(0x54, value); }
	inline bool SetConfig_EndMatch(t_structHelper inst, FHighlightRecordConfig value) { inst.WriteOffset(0x60, value); }
	inline bool SetConfig_DeathCam(t_structHelper inst, FHighlightRecordConfig value) { inst.WriteOffset(0x6C, value); }
	inline bool SetTslGameInstance(t_structHelper inst, ExternalPtr<struct UTslGameInstance> value) { inst.WriteOffset(0x78, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUHighlightSession = sizeof(UHighlightSession); // 168
    static_assert(sizeof(UHighlightSession) == 0xA8, "Size of UHighlightSession is not correct.");
	auto constexpr UHighlightSession_Config_Kill_Offset = offsetof(UHighlightSession, Config_Kill);
	static_assert(UHighlightSession_Config_Kill_Offset == 0x30, "UHighlightSession::Config_Kill offset is not 30");
	auto constexpr UHighlightSession_Config_KillGroggy_Offset = offsetof(UHighlightSession, Config_KillGroggy);
	static_assert(UHighlightSession_Config_KillGroggy_Offset == 0x3c, "UHighlightSession::Config_KillGroggy offset is not 3c");
	auto constexpr UHighlightSession_Config_Die_Offset = offsetof(UHighlightSession, Config_Die);
	static_assert(UHighlightSession_Config_Die_Offset == 0x48, "UHighlightSession::Config_Die offset is not 48");
	auto constexpr UHighlightSession_Config_DieGroggy_Offset = offsetof(UHighlightSession, Config_DieGroggy);
	static_assert(UHighlightSession_Config_DieGroggy_Offset == 0x54, "UHighlightSession::Config_DieGroggy offset is not 54");
	auto constexpr UHighlightSession_Config_EndMatch_Offset = offsetof(UHighlightSession, Config_EndMatch);
	static_assert(UHighlightSession_Config_EndMatch_Offset == 0x60, "UHighlightSession::Config_EndMatch offset is not 60");
	auto constexpr UHighlightSession_Config_DeathCam_Offset = offsetof(UHighlightSession, Config_DeathCam);
	static_assert(UHighlightSession_Config_DeathCam_Offset == 0x6c, "UHighlightSession::Config_DeathCam offset is not 6c");
	auto constexpr UHighlightSession_TslGameInstance_Offset = offsetof(UHighlightSession, TslGameInstance);
	static_assert(UHighlightSession_TslGameInstance_Offset == 0x78, "UHighlightSession::TslGameInstance offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
