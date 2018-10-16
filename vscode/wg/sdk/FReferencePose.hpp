#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FReferencePose // Size: 0x18
{
public:
    FName PoseName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.ReferencePose.PoseName */
    TArray<struct FTransform> ReferencePose; /* Ofs: 0x8 Size: 0x10 ArrayProperty Engine.ReferencePose.ReferencePose */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFReferencePose = sizeof(FReferencePose); // 24
    static_assert(sizeof(FReferencePose) == 0x18, "Size of FReferencePose is not correct.");
	auto constexpr FReferencePose_PoseName_Offset = offsetof(FReferencePose, PoseName);
	static_assert(FReferencePose_PoseName_Offset == 0x0, "FReferencePose::PoseName offset is not 0");
	auto constexpr FReferencePose_ReferencePose_Offset = offsetof(FReferencePose, ReferencePose);
	static_assert(FReferencePose_ReferencePose_Offset == 0x8, "FReferencePose::ReferencePose offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
