#pragma once
#include "UTslWeapon_Trajectory.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FDebugFloatHistory.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDefaultRifleSetting_C // Size: 0xFA0
	: public UTslWeapon_Trajectory // Size: 0xF10
{
private:
	typedef UDefaultRifleSetting_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(57039); // id32("BlueprintGeneratedClass DefaultRifleSetting.DefaultRifleSetting_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0xF10 Size: 0x8 - StructProperty DefaultRifleSetting.DefaultRifleSetting_C.UberGraphFrame */
	uint8_t boolFieldF18;
	uint8_t boolFieldF19;
	uint8_t UnknownDataF1A[0x6];
	FDebugFloatHistory History_RecoilTargetY; /* Ofs: 0xF20 Size: 0x20 - StructProperty DefaultRifleSetting.DefaultRifleSetting_C.History_RecoilTargetY */
	FDebugFloatHistory History_RecoilTargetX; /* Ofs: 0xF40 Size: 0x20 - StructProperty DefaultRifleSetting.DefaultRifleSetting_C.History_RecoilTargetX */
	FDebugFloatHistory History_RecoveryTarget; /* Ofs: 0xF60 Size: 0x20 - StructProperty DefaultRifleSetting.DefaultRifleSetting_C.History_RecoveryTarget */
	FDebugFloatHistory History_RecoilValue; /* Ofs: 0xF80 Size: 0x20 - StructProperty DefaultRifleSetting.DefaultRifleSetting_C.History_RecoilValue */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0xF10, value); }
	inline bool bDebugMuzzleVector()
	{
		return boolFieldF18& 0x1;
	}
	inline bool SetbDebugMuzzleVector(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF18, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDebugRecoil()
	{
		return boolFieldF19& 0x1;
	}
	inline bool SetbDebugRecoil(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF19, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetHistory_RecoilTargetY(t_structHelper inst, FDebugFloatHistory value) { inst.WriteOffset(0xF20, value); }
	inline bool SetHistory_RecoilTargetX(t_structHelper inst, FDebugFloatHistory value) { inst.WriteOffset(0xF40, value); }
	inline bool SetHistory_RecoveryTarget(t_structHelper inst, FDebugFloatHistory value) { inst.WriteOffset(0xF60, value); }
	inline bool SetHistory_RecoilValue(t_structHelper inst, FDebugFloatHistory value) { inst.WriteOffset(0xF80, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDefaultRifleSetting_C = sizeof(UDefaultRifleSetting_C); // 4000
    static_assert(sizeof(UDefaultRifleSetting_C) == 0xFA0, "Size of UDefaultRifleSetting_C is not correct.");
	auto constexpr UDefaultRifleSetting_C_UberGraphFrame_Offset = offsetof(UDefaultRifleSetting_C, UberGraphFrame);
	static_assert(UDefaultRifleSetting_C_UberGraphFrame_Offset == 0xf10, "UDefaultRifleSetting_C::UberGraphFrame offset is not f10");
	auto constexpr UDefaultRifleSetting_C_boolFieldF18_Offset = offsetof(UDefaultRifleSetting_C, boolFieldF18);
	static_assert(UDefaultRifleSetting_C_boolFieldF18_Offset == 0xf18, "UDefaultRifleSetting_C::boolFieldF18 offset is not f18");
	auto constexpr UDefaultRifleSetting_C_boolFieldF19_Offset = offsetof(UDefaultRifleSetting_C, boolFieldF19);
	static_assert(UDefaultRifleSetting_C_boolFieldF19_Offset == 0xf19, "UDefaultRifleSetting_C::boolFieldF19 offset is not f19");
	auto constexpr UDefaultRifleSetting_C_History_RecoilTargetY_Offset = offsetof(UDefaultRifleSetting_C, History_RecoilTargetY);
	static_assert(UDefaultRifleSetting_C_History_RecoilTargetY_Offset == 0xf20, "UDefaultRifleSetting_C::History_RecoilTargetY offset is not f20");
	auto constexpr UDefaultRifleSetting_C_History_RecoilTargetX_Offset = offsetof(UDefaultRifleSetting_C, History_RecoilTargetX);
	static_assert(UDefaultRifleSetting_C_History_RecoilTargetX_Offset == 0xf40, "UDefaultRifleSetting_C::History_RecoilTargetX offset is not f40");
	auto constexpr UDefaultRifleSetting_C_History_RecoveryTarget_Offset = offsetof(UDefaultRifleSetting_C, History_RecoveryTarget);
	static_assert(UDefaultRifleSetting_C_History_RecoveryTarget_Offset == 0xf60, "UDefaultRifleSetting_C::History_RecoveryTarget offset is not f60");
	auto constexpr UDefaultRifleSetting_C_History_RecoilValue_Offset = offsetof(UDefaultRifleSetting_C, History_RecoilValue);
	static_assert(UDefaultRifleSetting_C_History_RecoilValue_Offset == 0xf80, "UDefaultRifleSetting_C::History_RecoilValue offset is not f80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
