#pragma once
#include "UTslDamageField.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProjMolotov_DamageField_Direct_C // Size: 0x460
	: public UTslDamageField // Size: 0x460
{
private:
	typedef UProjMolotov_DamageField_Direct_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(127604); // id32("BlueprintGeneratedClass ProjMolotov_DamageField_Direct.ProjMolotov_DamageField_Direct_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProjMolotov_DamageField_Direct_C = sizeof(UProjMolotov_DamageField_Direct_C); // 1120
    static_assert(sizeof(UProjMolotov_DamageField_Direct_C) == 0x460, "Size of UProjMolotov_DamageField_Direct_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
