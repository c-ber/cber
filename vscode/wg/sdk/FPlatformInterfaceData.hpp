#pragma once
#include "EPlatformInterfaceDataType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPlatformInterfaceData // Size: 0x30
{
public:
    FName DataName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.PlatformInterfaceData.DataName */
    TEnumAsByte<enum EPlatformInterfaceDataType> Type; /* Ofs: 0x8 Size: 0x1 ByteProperty Engine.PlatformInterfaceData.Type */
    uint8_t UnknownData9[0x3];
    int32_t IntValue; /* Ofs: 0xC Size: 0x4 IntProperty Engine.PlatformInterfaceData.IntValue */
    float FloatValue; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.PlatformInterfaceData.FloatValue */
    uint8_t UnknownData14[0x4];
    FString StringValue; /* Ofs: 0x18 Size: 0x10 StrProperty Engine.PlatformInterfaceData.StringValue */
    ExternalPtr<struct UObject> ObjectValue; /* Ofs: 0x28 Size: 0x8 ObjectProperty Engine.PlatformInterfaceData.ObjectValue */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPlatformInterfaceData = sizeof(FPlatformInterfaceData); // 48
    static_assert(sizeof(FPlatformInterfaceData) == 0x30, "Size of FPlatformInterfaceData is not correct.");
	auto constexpr FPlatformInterfaceData_DataName_Offset = offsetof(FPlatformInterfaceData, DataName);
	static_assert(FPlatformInterfaceData_DataName_Offset == 0x0, "FPlatformInterfaceData::DataName offset is not 0");
	auto constexpr FPlatformInterfaceData_Type_Offset = offsetof(FPlatformInterfaceData, Type);
	static_assert(FPlatformInterfaceData_Type_Offset == 0x8, "FPlatformInterfaceData::Type offset is not 8");
	auto constexpr FPlatformInterfaceData_IntValue_Offset = offsetof(FPlatformInterfaceData, IntValue);
	static_assert(FPlatformInterfaceData_IntValue_Offset == 0xc, "FPlatformInterfaceData::IntValue offset is not c");
	auto constexpr FPlatformInterfaceData_FloatValue_Offset = offsetof(FPlatformInterfaceData, FloatValue);
	static_assert(FPlatformInterfaceData_FloatValue_Offset == 0x10, "FPlatformInterfaceData::FloatValue offset is not 10");
	auto constexpr FPlatformInterfaceData_StringValue_Offset = offsetof(FPlatformInterfaceData, StringValue);
	static_assert(FPlatformInterfaceData_StringValue_Offset == 0x18, "FPlatformInterfaceData::StringValue offset is not 18");
	auto constexpr FPlatformInterfaceData_ObjectValue_Offset = offsetof(FPlatformInterfaceData, ObjectValue);
	static_assert(FPlatformInterfaceData_ObjectValue_Offset == 0x28, "FPlatformInterfaceData::ObjectValue offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
