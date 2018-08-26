#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGamepadInputComponent // Size: 0x2D0
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UTslGamepadInputComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1389); // id32("Class TslGame.TslGamepadInputComponent")
		return ptr;
	}
	uint8_t UnknownData1F0[0x38];
	TMap<struct FName, struct FTslGamepadInputKeySet> GamepadInputKeysCached; /* Ofs: 0x228 Size: 0x50 - MapProperty TslGame.TslGamepadInputComponent.GamepadInputKeysCached */
	TMap<struct FKey, bool> BlockingInputKeyList; /* Ofs: 0x278 Size: 0x50 - MapProperty TslGame.TslGamepadInputComponent.BlockingInputKeyList */
	uint8_t UnknownData2C8[0x8];


	inline bool SetGamepadInputKeysCached(t_structHelper inst, TMap<struct FName, struct FTslGamepadInputKeySet> value) { inst.WriteOffset(0x228, value); }
	inline bool SetBlockingInputKeyList(t_structHelper inst, TMap<struct FKey, bool> value) { inst.WriteOffset(0x278, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGamepadInputComponent = sizeof(UTslGamepadInputComponent); // 720
    static_assert(sizeof(UTslGamepadInputComponent) == 0x2D0, "Size of UTslGamepadInputComponent is not correct.");
	auto constexpr UTslGamepadInputComponent_GamepadInputKeysCached_Offset = offsetof(UTslGamepadInputComponent, GamepadInputKeysCached);
	static_assert(UTslGamepadInputComponent_GamepadInputKeysCached_Offset == 0x228, "UTslGamepadInputComponent::GamepadInputKeysCached offset is not 228");
	auto constexpr UTslGamepadInputComponent_BlockingInputKeyList_Offset = offsetof(UTslGamepadInputComponent, BlockingInputKeyList);
	static_assert(UTslGamepadInputComponent_BlockingInputKeyList_Offset == 0x278, "UTslGamepadInputComponent::BlockingInputKeyList offset is not 278");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
