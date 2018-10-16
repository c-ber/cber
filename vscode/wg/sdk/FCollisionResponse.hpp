#pragma once
#include "FCollisionResponseContainer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCollisionResponse // Size: 0x30
{
public:
    FCollisionResponseContainer ResponseToChannels; /* Ofs: 0x0 Size: 0x20 StructProperty Engine.CollisionResponse.ResponseToChannels */
    TArray<struct FResponseChannel> ResponseArray; /* Ofs: 0x20 Size: 0x10 ArrayProperty Engine.CollisionResponse.ResponseArray */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCollisionResponse = sizeof(FCollisionResponse); // 48
    static_assert(sizeof(FCollisionResponse) == 0x30, "Size of FCollisionResponse is not correct.");
	auto constexpr FCollisionResponse_ResponseToChannels_Offset = offsetof(FCollisionResponse, ResponseToChannels);
	static_assert(FCollisionResponse_ResponseToChannels_Offset == 0x0, "FCollisionResponse::ResponseToChannels offset is not 0");
	auto constexpr FCollisionResponse_ResponseArray_Offset = offsetof(FCollisionResponse, ResponseArray);
	static_assert(FCollisionResponse_ResponseArray_Offset == 0x20, "FCollisionResponse::ResponseArray offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
