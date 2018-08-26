#pragma once
#include "UAISenseConfig.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISenseConfig_Prediction // Size: 0x50
	: public UAISenseConfig // Size: 0x50
{
private:
	typedef UAISenseConfig_Prediction t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1693); // id32("Class AIModule.AISenseConfig_Prediction")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISenseConfig_Prediction = sizeof(UAISenseConfig_Prediction); // 80
    static_assert(sizeof(UAISenseConfig_Prediction) == 0x50, "Size of UAISenseConfig_Prediction is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
