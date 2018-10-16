#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLocalSpacePose // Size: 0x20
{
public:
    TArray<struct FTransform> Transforms; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.LocalSpacePose.Transforms */
    TArray<struct FName> Names; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.LocalSpacePose.Names */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLocalSpacePose = sizeof(FLocalSpacePose); // 32
    static_assert(sizeof(FLocalSpacePose) == 0x20, "Size of FLocalSpacePose is not correct.");
	auto constexpr FLocalSpacePose_Transforms_Offset = offsetof(FLocalSpacePose, Transforms);
	static_assert(FLocalSpacePose_Transforms_Offset == 0x0, "FLocalSpacePose::Transforms offset is not 0");
	auto constexpr FLocalSpacePose_Names_Offset = offsetof(FLocalSpacePose, Names);
	static_assert(FLocalSpacePose_Names_Offset == 0x10, "FLocalSpacePose::Names offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
