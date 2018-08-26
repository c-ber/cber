#pragma once
#include "UTslProjectileMolotov.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProjMolotov_Fragment_C // Size: 0x610
	: public UTslProjectileMolotov // Size: 0x610
{
private:
	typedef UProjMolotov_Fragment_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(128548); // id32("BlueprintGeneratedClass ProjMolotov_Fragment.ProjMolotov_Fragment_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProjMolotov_Fragment_C = sizeof(UProjMolotov_Fragment_C); // 1552
    static_assert(sizeof(UProjMolotov_Fragment_C) == 0x610, "Size of UProjMolotov_Fragment_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
