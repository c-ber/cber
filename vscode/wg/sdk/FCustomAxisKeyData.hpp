#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomAxisKeyData // Size: 0x20
{
public:
    FName AxisName; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.CustomAxisKeyData.AxisName */
    float Scale; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.CustomAxisKeyData.Scale */
    uint8_t UnknownDataC[0x4];
    TArray<struct FTslInputKey> Keys; /* Ofs: 0x10 Size: 0x10 ArrayProperty TslGame.CustomAxisKeyData.Keys */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomAxisKeyData = sizeof(FCustomAxisKeyData); // 32
    static_assert(sizeof(FCustomAxisKeyData) == 0x20, "Size of FCustomAxisKeyData is not correct.");
	auto constexpr FCustomAxisKeyData_AxisName_Offset = offsetof(FCustomAxisKeyData, AxisName);
	static_assert(FCustomAxisKeyData_AxisName_Offset == 0x0, "FCustomAxisKeyData::AxisName offset is not 0");
	auto constexpr FCustomAxisKeyData_Scale_Offset = offsetof(FCustomAxisKeyData, Scale);
	static_assert(FCustomAxisKeyData_Scale_Offset == 0x8, "FCustomAxisKeyData::Scale offset is not 8");
	auto constexpr FCustomAxisKeyData_Keys_Offset = offsetof(FCustomAxisKeyData, Keys);
	static_assert(FCustomAxisKeyData_Keys_Offset == 0x10, "FCustomAxisKeyData::Keys offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
