#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDirectoryPath // Size: 0x10
{
public:
    FString path; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.DirectoryPath.path */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDirectoryPath = sizeof(FDirectoryPath); // 16
    static_assert(sizeof(FDirectoryPath) == 0x10, "Size of FDirectoryPath is not correct.");
	auto constexpr FDirectoryPath_path_Offset = offsetof(FDirectoryPath, path);
	static_assert(FDirectoryPath_path_Offset == 0x0, "FDirectoryPath::path offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
