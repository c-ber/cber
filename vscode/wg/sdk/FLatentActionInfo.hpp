#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLatentActionInfo // Size: 0x18
{
public:
    int32_t Linkage; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.LatentActionInfo.Linkage */
    int32_t UUID; /* Ofs: 0x4 Size: 0x4 IntProperty Engine.LatentActionInfo.UUID */
    FName ExecutionFunction; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.LatentActionInfo.ExecutionFunction */
    ExternalPtr<struct UObject> CallbackTarget; /* Ofs: 0x10 Size: 0x8 ObjectProperty Engine.LatentActionInfo.CallbackTarget */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLatentActionInfo = sizeof(FLatentActionInfo); // 24
    static_assert(sizeof(FLatentActionInfo) == 0x18, "Size of FLatentActionInfo is not correct.");
	auto constexpr FLatentActionInfo_Linkage_Offset = offsetof(FLatentActionInfo, Linkage);
	static_assert(FLatentActionInfo_Linkage_Offset == 0x0, "FLatentActionInfo::Linkage offset is not 0");
	auto constexpr FLatentActionInfo_UUID_Offset = offsetof(FLatentActionInfo, UUID);
	static_assert(FLatentActionInfo_UUID_Offset == 0x4, "FLatentActionInfo::UUID offset is not 4");
	auto constexpr FLatentActionInfo_ExecutionFunction_Offset = offsetof(FLatentActionInfo, ExecutionFunction);
	static_assert(FLatentActionInfo_ExecutionFunction_Offset == 0x8, "FLatentActionInfo::ExecutionFunction offset is not 8");
	auto constexpr FLatentActionInfo_CallbackTarget_Offset = offsetof(FLatentActionInfo, CallbackTarget);
	static_assert(FLatentActionInfo_CallbackTarget_Offset == 0x10, "FLatentActionInfo::CallbackTarget offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
