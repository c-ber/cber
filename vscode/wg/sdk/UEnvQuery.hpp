#pragma once
#include "UDataAsset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQuery // Size: 0x50
	: public UDataAsset // Size: 0x38
{
private:
	typedef UEnvQuery t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(614); // id32("Class AIModule.EnvQuery")
		return ptr;
	}
	FName QueryName; /* Ofs: 0x38 Size: 0x8 - NameProperty AIModule.EnvQuery.QueryName */
	TArray<ExternalPtr<struct UEnvQueryOption>> Options; /* Ofs: 0x40 Size: 0x10 - ArrayProperty AIModule.EnvQuery.Options */


	inline bool SetQueryName(t_structHelper inst, FName value) { inst.WriteOffset(0x38, value); }
	inline bool SetOptions(t_structHelper inst, TArray<ExternalPtr<struct UEnvQueryOption>> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQuery = sizeof(UEnvQuery); // 80
    static_assert(sizeof(UEnvQuery) == 0x50, "Size of UEnvQuery is not correct.");
	auto constexpr UEnvQuery_QueryName_Offset = offsetof(UEnvQuery, QueryName);
	static_assert(UEnvQuery_QueryName_Offset == 0x38, "UEnvQuery::QueryName offset is not 38");
	auto constexpr UEnvQuery_Options_Offset = offsetof(UEnvQuery, Options);
	static_assert(UEnvQuery_Options_Offset == 0x40, "UEnvQuery::Options offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
