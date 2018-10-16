#pragma once
#include "FBaseAttenuationSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FForceFeedbackAttenuationSettings // Size: 0xA8
 : public FBaseAttenuationSettings // Size: 0xA8
{
public:
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFForceFeedbackAttenuationSettings = sizeof(FForceFeedbackAttenuationSettings); // 168
    static_assert(sizeof(FForceFeedbackAttenuationSettings) == 0xA8, "Size of FForceFeedbackAttenuationSettings is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
