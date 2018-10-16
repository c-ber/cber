#pragma once
#include "ULevelAttribute.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevelAttribute_Erangel_C // Size: 0x4B0
	: public ULevelAttribute // Size: 0x4B0
{
private:
	typedef ULevelAttribute_Erangel_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(114625); // id32("BlueprintGeneratedClass LevelAttribute_Erangel.LevelAttribute_Erangel_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevelAttribute_Erangel_C = sizeof(ULevelAttribute_Erangel_C); // 1200
    static_assert(sizeof(ULevelAttribute_Erangel_C) == 0x4B0, "Size of ULevelAttribute_Erangel_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
