#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStringClassReference // Size: 0x10
 : public FStringAssetReference // Size: 0x10
{
public:
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStringClassReference = sizeof(FStringClassReference); // 16
    static_assert(sizeof(FStringClassReference) == 0x10, "Size of FStringClassReference is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
