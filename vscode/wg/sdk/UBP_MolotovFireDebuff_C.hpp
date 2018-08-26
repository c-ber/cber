#pragma once
#include "UTslMolotovFireDebuff.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_MolotovFireDebuff_C // Size: 0x490
	: public UTslMolotovFireDebuff // Size: 0x490
{
private:
	typedef UBP_MolotovFireDebuff_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(127600); // id32("BlueprintGeneratedClass BP_MolotovFireDebuff.BP_MolotovFireDebuff_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_MolotovFireDebuff_C = sizeof(UBP_MolotovFireDebuff_C); // 1168
    static_assert(sizeof(UBP_MolotovFireDebuff_C) == 0x490, "Size of UBP_MolotovFireDebuff_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
