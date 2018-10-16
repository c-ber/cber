#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNodeObject // Size: 0x10
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty AnimationCore.NodeObject.Name */
    FName ParentName; /* Ofs: 0x8 Size: 0x8 NameProperty AnimationCore.NodeObject.ParentName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNodeObject = sizeof(FNodeObject); // 16
    static_assert(sizeof(FNodeObject) == 0x10, "Size of FNodeObject is not correct.");
	auto constexpr FNodeObject_Name_Offset = offsetof(FNodeObject, Name);
	static_assert(FNodeObject_Name_Offset == 0x0, "FNodeObject::Name offset is not 0");
	auto constexpr FNodeObject_ParentName_Offset = offsetof(FNodeObject, ParentName);
	static_assert(FNodeObject_ParentName_Offset == 0x8, "FNodeObject::ParentName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
