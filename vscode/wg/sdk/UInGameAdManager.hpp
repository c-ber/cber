#pragma once
#include "UPlatformInterfaceBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInGameAdManager // Size: 0x68
	: public UPlatformInterfaceBase // Size: 0x40
{
private:
	typedef UInGameAdManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1180); // id32("Class Engine.InGameAdManager")
		return ptr;
	}
	uint8_t boolField40;
	uint8_t UnknownData41[0x7];
	TArray<struct FScriptDelegate> ClickedBannerDelegates; /* Ofs: 0x48 Size: 0x10 - ArrayProperty Engine.InGameAdManager.ClickedBannerDelegates */
	TArray<struct FScriptDelegate> ClosedAdDelegates; /* Ofs: 0x58 Size: 0x10 - ArrayProperty Engine.InGameAdManager.ClosedAdDelegates */


	inline bool bShouldPauseWhileAdOpen()
	{
		return boolField40& 0x1;
	}
	inline bool SetbShouldPauseWhileAdOpen(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetClickedBannerDelegates(t_structHelper inst, TArray<struct FScriptDelegate> value) { inst.WriteOffset(0x48, value); }
	inline bool SetClosedAdDelegates(t_structHelper inst, TArray<struct FScriptDelegate> value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInGameAdManager = sizeof(UInGameAdManager); // 104
    static_assert(sizeof(UInGameAdManager) == 0x68, "Size of UInGameAdManager is not correct.");
	auto constexpr UInGameAdManager_boolField40_Offset = offsetof(UInGameAdManager, boolField40);
	static_assert(UInGameAdManager_boolField40_Offset == 0x40, "UInGameAdManager::boolField40 offset is not 40");
	auto constexpr UInGameAdManager_ClickedBannerDelegates_Offset = offsetof(UInGameAdManager, ClickedBannerDelegates);
	static_assert(UInGameAdManager_ClickedBannerDelegates_Offset == 0x48, "UInGameAdManager::ClickedBannerDelegates offset is not 48");
	auto constexpr UInGameAdManager_ClosedAdDelegates_Offset = offsetof(UInGameAdManager, ClosedAdDelegates);
	static_assert(UInGameAdManager_ClosedAdDelegates_Offset == 0x58, "UInGameAdManager::ClosedAdDelegates offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
