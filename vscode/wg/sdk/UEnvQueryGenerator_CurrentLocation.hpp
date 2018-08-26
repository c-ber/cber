#pragma once
#include "UEnvQueryGenerator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryGenerator_CurrentLocation // Size: 0x60
	: public UEnvQueryGenerator // Size: 0x58
{
private:
	typedef UEnvQueryGenerator_CurrentLocation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(632); // id32("Class AIModule.EnvQueryGenerator_CurrentLocation")
		return ptr;
	}
	ExternalPtr<struct UClass> QueryContext; /* Ofs: 0x58 Size: 0x8 - ClassProperty AIModule.EnvQueryGenerator_CurrentLocation.QueryContext */


	inline bool SetQueryContext(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryGenerator_CurrentLocation = sizeof(UEnvQueryGenerator_CurrentLocation); // 96
    static_assert(sizeof(UEnvQueryGenerator_CurrentLocation) == 0x60, "Size of UEnvQueryGenerator_CurrentLocation is not correct.");
	auto constexpr UEnvQueryGenerator_CurrentLocation_QueryContext_Offset = offsetof(UEnvQueryGenerator_CurrentLocation, QueryContext);
	static_assert(UEnvQueryGenerator_CurrentLocation_QueryContext_Offset == 0x58, "UEnvQueryGenerator_CurrentLocation::QueryContext offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
