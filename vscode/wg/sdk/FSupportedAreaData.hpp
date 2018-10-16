#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSupportedAreaData // Size: 0x20
{
public:
    FString AreaClassName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.SupportedAreaData.AreaClassName */
    int32_t AreaID; /* Ofs: 0x10 Size: 0x4 IntProperty Engine.SupportedAreaData.AreaID */
    uint8_t UnknownData14[0x4];
    ExternalPtr<struct UClass> AreaClass; /* Ofs: 0x18 Size: 0x8 ClassProperty Engine.SupportedAreaData.AreaClass */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSupportedAreaData = sizeof(FSupportedAreaData); // 32
    static_assert(sizeof(FSupportedAreaData) == 0x20, "Size of FSupportedAreaData is not correct.");
	auto constexpr FSupportedAreaData_AreaClassName_Offset = offsetof(FSupportedAreaData, AreaClassName);
	static_assert(FSupportedAreaData_AreaClassName_Offset == 0x0, "FSupportedAreaData::AreaClassName offset is not 0");
	auto constexpr FSupportedAreaData_AreaID_Offset = offsetof(FSupportedAreaData, AreaID);
	static_assert(FSupportedAreaData_AreaID_Offset == 0x10, "FSupportedAreaData::AreaID offset is not 10");
	auto constexpr FSupportedAreaData_AreaClass_Offset = offsetof(FSupportedAreaData, AreaClass);
	static_assert(FSupportedAreaData_AreaClass_Offset == 0x18, "FSupportedAreaData::AreaClass offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
