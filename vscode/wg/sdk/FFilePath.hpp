#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFilePath // Size: 0x10
{
public:
    FString FilePath; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.FilePath.FilePath */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFilePath = sizeof(FFilePath); // 16
    static_assert(sizeof(FFilePath) == 0x10, "Size of FFilePath is not correct.");
	auto constexpr FFilePath_FilePath_Offset = offsetof(FFilePath, FilePath);
	static_assert(FFilePath_FilePath_Offset == 0x0, "FFilePath::FilePath offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
