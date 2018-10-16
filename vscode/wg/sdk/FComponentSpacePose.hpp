#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FComponentSpacePose // Size: 0x20
{
public:
    TArray<struct FTransform> Transforms; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.ComponentSpacePose.Transforms */
    TArray<struct FName> Names; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.ComponentSpacePose.Names */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFComponentSpacePose = sizeof(FComponentSpacePose); // 32
    static_assert(sizeof(FComponentSpacePose) == 0x20, "Size of FComponentSpacePose is not correct.");
	auto constexpr FComponentSpacePose_Transforms_Offset = offsetof(FComponentSpacePose, Transforms);
	static_assert(FComponentSpacePose_Transforms_Offset == 0x0, "FComponentSpacePose::Transforms offset is not 0");
	auto constexpr FComponentSpacePose_Names_Offset = offsetof(FComponentSpacePose, Names);
	static_assert(FComponentSpacePose_Names_Offset == 0x10, "FComponentSpacePose::Names offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
