#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslGamepadInputKeySet // Size: 0x10
{
public:
    TArray<struct FTslGamepadInputKey> GamepadInputKeys; /* Ofs: 0x0 Size: 0x10 ArrayProperty TslGame.TslGamepadInputKeySet.GamepadInputKeys */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslGamepadInputKeySet = sizeof(FTslGamepadInputKeySet); // 16
    static_assert(sizeof(FTslGamepadInputKeySet) == 0x10, "Size of FTslGamepadInputKeySet is not correct.");
	auto constexpr FTslGamepadInputKeySet_GamepadInputKeys_Offset = offsetof(FTslGamepadInputKeySet, GamepadInputKeys);
	static_assert(FTslGamepadInputKeySet_GamepadInputKeys_Offset == 0x0, "FTslGamepadInputKeySet::GamepadInputKeys offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
