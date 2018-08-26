#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomActionKeyData // Size: 0x18
{
public:
    FName ActionName; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.CustomActionKeyData.ActionName */
    TArray<struct FTslInputKey> Keys; /* Ofs: 0x8 Size: 0x10 ArrayProperty TslGame.CustomActionKeyData.Keys */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomActionKeyData = sizeof(FCustomActionKeyData); // 24
    static_assert(sizeof(FCustomActionKeyData) == 0x18, "Size of FCustomActionKeyData is not correct.");
	auto constexpr FCustomActionKeyData_ActionName_Offset = offsetof(FCustomActionKeyData, ActionName);
	static_assert(FCustomActionKeyData_ActionName_Offset == 0x0, "FCustomActionKeyData::ActionName offset is not 0");
	auto constexpr FCustomActionKeyData_Keys_Offset = offsetof(FCustomActionKeyData, Keys);
	static_assert(FCustomActionKeyData_Keys_Offset == 0x8, "FCustomActionKeyData::Keys offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
