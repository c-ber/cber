#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDelegateArray // Size: 0x10
{
public:
    TArray<struct FScriptDelegate> Delegates; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.DelegateArray.Delegates */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDelegateArray = sizeof(FDelegateArray); // 16
    static_assert(sizeof(FDelegateArray) == 0x10, "Size of FDelegateArray is not correct.");
	auto constexpr FDelegateArray_Delegates_Offset = offsetof(FDelegateArray, Delegates);
	static_assert(FDelegateArray_Delegates_Offset == 0x0, "FDelegateArray::Delegates offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
