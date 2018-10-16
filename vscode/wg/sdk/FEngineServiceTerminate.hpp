#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEngineServiceTerminate // Size: 0x10
{
public:
    FString UserName; /* Ofs: 0x0 Size: 0x10 StrProperty EngineMessages.EngineServiceTerminate.UserName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEngineServiceTerminate = sizeof(FEngineServiceTerminate); // 16
    static_assert(sizeof(FEngineServiceTerminate) == 0x10, "Size of FEngineServiceTerminate is not correct.");
	auto constexpr FEngineServiceTerminate_UserName_Offset = offsetof(FEngineServiceTerminate, UserName);
	static_assert(FEngineServiceTerminate_UserName_Offset == 0x0, "FEngineServiceTerminate::UserName offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
