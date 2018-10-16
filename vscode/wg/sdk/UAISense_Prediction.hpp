#pragma once
#include "UAISense.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISense_Prediction // Size: 0x130
	: public UAISense // Size: 0x120
{
private:
	typedef UAISense_Prediction t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1684); // id32("Class AIModule.AISense_Prediction")
		return ptr;
	}
	TArray<struct FAIPredictionEvent> RegisteredEvents; /* Ofs: 0x120 Size: 0x10 - ArrayProperty AIModule.AISense_Prediction.RegisteredEvents */


	inline bool SetRegisteredEvents(t_structHelper inst, TArray<struct FAIPredictionEvent> value) { inst.WriteOffset(0x120, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISense_Prediction = sizeof(UAISense_Prediction); // 304
    static_assert(sizeof(UAISense_Prediction) == 0x130, "Size of UAISense_Prediction is not correct.");
	auto constexpr UAISense_Prediction_RegisteredEvents_Offset = offsetof(UAISense_Prediction, RegisteredEvents);
	static_assert(UAISense_Prediction_RegisteredEvents_Offset == 0x120, "UAISense_Prediction::RegisteredEvents offset is not 120");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
