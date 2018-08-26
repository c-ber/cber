#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInterpGroupActorInfo // Size: 0x18
{
public:
    FName ObjectName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.InterpGroupActorInfo.ObjectName */
    TArray<ExternalPtr<struct UActor>> Actors; /* Ofs: 0x8 Size: 0x10 ArrayProperty Engine.InterpGroupActorInfo.Actors */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInterpGroupActorInfo = sizeof(FInterpGroupActorInfo); // 24
    static_assert(sizeof(FInterpGroupActorInfo) == 0x18, "Size of FInterpGroupActorInfo is not correct.");
	auto constexpr FInterpGroupActorInfo_ObjectName_Offset = offsetof(FInterpGroupActorInfo, ObjectName);
	static_assert(FInterpGroupActorInfo_ObjectName_Offset == 0x0, "FInterpGroupActorInfo::ObjectName offset is not 0");
	auto constexpr FInterpGroupActorInfo_Actors_Offset = offsetof(FInterpGroupActorInfo, Actors);
	static_assert(FInterpGroupActorInfo_Actors_Offset == 0x8, "FInterpGroupActorInfo::Actors offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
