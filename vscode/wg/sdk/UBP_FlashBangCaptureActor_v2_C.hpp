#pragma once
#include "UFlashBangCaptureActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_FlashBangCaptureActor_v2_C // Size: 0x440
	: public UFlashBangCaptureActor // Size: 0x440
{
private:
	typedef UBP_FlashBangCaptureActor_v2_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(125994); // id32("BlueprintGeneratedClass BP_FlashBangCaptureActor_v2.BP_FlashBangCaptureActor_v2_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_FlashBangCaptureActor_v2_C = sizeof(UBP_FlashBangCaptureActor_v2_C); // 1088
    static_assert(sizeof(UBP_FlashBangCaptureActor_v2_C) == 0x440, "Size of UBP_FlashBangCaptureActor_v2_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
