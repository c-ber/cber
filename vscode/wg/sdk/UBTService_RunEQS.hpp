#pragma once
#include "UBTService_BlackboardBase.hpp"
#include "FEQSParametrizedQueryExecutionRequest.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTService_RunEQS // Size: 0x130
	: public UBTService_BlackboardBase // Size: 0xA0
{
private:
	typedef UBTService_RunEQS t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(591); // id32("Class AIModule.BTService_RunEQS")
		return ptr;
	}
	FEQSParametrizedQueryExecutionRequest EQSRequest; /* Ofs: 0xA0 Size: 0x48 - StructProperty AIModule.BTService_RunEQS.EQSRequest */
	uint8_t UnknownDataE8[0x48];


	inline bool SetEQSRequest(t_structHelper inst, FEQSParametrizedQueryExecutionRequest value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTService_RunEQS = sizeof(UBTService_RunEQS); // 304
    static_assert(sizeof(UBTService_RunEQS) == 0x130, "Size of UBTService_RunEQS is not correct.");
	auto constexpr UBTService_RunEQS_EQSRequest_Offset = offsetof(UBTService_RunEQS, EQSRequest);
	static_assert(UBTService_RunEQS_EQSRequest_Offset == 0xa0, "UBTService_RunEQS::EQSRequest offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
