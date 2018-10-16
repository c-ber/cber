#pragma once
#include "UEnvQueryGenerator.hpp"
#include "FAIDataProviderBoolValue.hpp"
#include "FAIDataProviderFloatValue.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryGenerator_ActorsOfClass // Size: 0xC8
	: public UEnvQueryGenerator // Size: 0x58
{
private:
	typedef UEnvQueryGenerator_ActorsOfClass t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(629); // id32("Class AIModule.EnvQueryGenerator_ActorsOfClass")
		return ptr;
	}
	ExternalPtr<struct UClass> SearchedActorClass; /* Ofs: 0x58 Size: 0x8 - ClassProperty AIModule.EnvQueryGenerator_ActorsOfClass.SearchedActorClass */
	FAIDataProviderBoolValue GenerateOnlyActorsInRadius; /* Ofs: 0x60 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_ActorsOfClass.GenerateOnlyActorsInRadius */
	FAIDataProviderFloatValue SearchRadius; /* Ofs: 0x90 Size: 0x30 - StructProperty AIModule.EnvQueryGenerator_ActorsOfClass.SearchRadius */
	ExternalPtr<struct UClass> SearchCenter; /* Ofs: 0xC0 Size: 0x8 - ClassProperty AIModule.EnvQueryGenerator_ActorsOfClass.SearchCenter */


	inline bool SetSearchedActorClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x58, value); }
	inline bool SetGenerateOnlyActorsInRadius(t_structHelper inst, FAIDataProviderBoolValue value) { inst.WriteOffset(0x60, value); }
	inline bool SetSearchRadius(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0x90, value); }
	inline bool SetSearchCenter(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xC0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryGenerator_ActorsOfClass = sizeof(UEnvQueryGenerator_ActorsOfClass); // 200
    static_assert(sizeof(UEnvQueryGenerator_ActorsOfClass) == 0xC8, "Size of UEnvQueryGenerator_ActorsOfClass is not correct.");
	auto constexpr UEnvQueryGenerator_ActorsOfClass_SearchedActorClass_Offset = offsetof(UEnvQueryGenerator_ActorsOfClass, SearchedActorClass);
	static_assert(UEnvQueryGenerator_ActorsOfClass_SearchedActorClass_Offset == 0x58, "UEnvQueryGenerator_ActorsOfClass::SearchedActorClass offset is not 58");
	auto constexpr UEnvQueryGenerator_ActorsOfClass_GenerateOnlyActorsInRadius_Offset = offsetof(UEnvQueryGenerator_ActorsOfClass, GenerateOnlyActorsInRadius);
	static_assert(UEnvQueryGenerator_ActorsOfClass_GenerateOnlyActorsInRadius_Offset == 0x60, "UEnvQueryGenerator_ActorsOfClass::GenerateOnlyActorsInRadius offset is not 60");
	auto constexpr UEnvQueryGenerator_ActorsOfClass_SearchRadius_Offset = offsetof(UEnvQueryGenerator_ActorsOfClass, SearchRadius);
	static_assert(UEnvQueryGenerator_ActorsOfClass_SearchRadius_Offset == 0x90, "UEnvQueryGenerator_ActorsOfClass::SearchRadius offset is not 90");
	auto constexpr UEnvQueryGenerator_ActorsOfClass_SearchCenter_Offset = offsetof(UEnvQueryGenerator_ActorsOfClass, SearchCenter);
	static_assert(UEnvQueryGenerator_ActorsOfClass_SearchCenter_Offset == 0xc0, "UEnvQueryGenerator_ActorsOfClass::SearchCenter offset is not c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
