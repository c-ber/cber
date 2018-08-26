#pragma once
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDropNoteInfo // Size: 0x28
{
public:
    FVector Location; /* Ofs: 0x0 Size: 0xC StructProperty Engine.DropNoteInfo.Location */
    FRotator Rotation; /* Ofs: 0xC Size: 0xC StructProperty Engine.DropNoteInfo.Rotation */
    FString Comment; /* Ofs: 0x18 Size: 0x10 StrProperty Engine.DropNoteInfo.Comment */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDropNoteInfo = sizeof(FDropNoteInfo); // 40
    static_assert(sizeof(FDropNoteInfo) == 0x28, "Size of FDropNoteInfo is not correct.");
	auto constexpr FDropNoteInfo_Location_Offset = offsetof(FDropNoteInfo, Location);
	static_assert(FDropNoteInfo_Location_Offset == 0x0, "FDropNoteInfo::Location offset is not 0");
	auto constexpr FDropNoteInfo_Rotation_Offset = offsetof(FDropNoteInfo, Rotation);
	static_assert(FDropNoteInfo_Rotation_Offset == 0xc, "FDropNoteInfo::Rotation offset is not c");
	auto constexpr FDropNoteInfo_Comment_Offset = offsetof(FDropNoteInfo, Comment);
	static_assert(FDropNoteInfo_Comment_Offset == 0x18, "FDropNoteInfo::Comment offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
