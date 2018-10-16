#pragma once
#include "UFloorSnapItemPackage.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDeathDropItemPackage_C // Size: 0x598
	: public UFloorSnapItemPackage // Size: 0x590
{
private:
	typedef UDeathDropItemPackage_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(60867); // id32("BlueprintGeneratedClass DeathDropItemPackage.DeathDropItemPackage_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x590 Size: 0x8 - StructProperty DeathDropItemPackage.DeathDropItemPackage_C.UberGraphFrame */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x590, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDeathDropItemPackage_C = sizeof(UDeathDropItemPackage_C); // 1432
    static_assert(sizeof(UDeathDropItemPackage_C) == 0x598, "Size of UDeathDropItemPackage_C is not correct.");
	auto constexpr UDeathDropItemPackage_C_UberGraphFrame_Offset = offsetof(UDeathDropItemPackage_C, UberGraphFrame);
	static_assert(UDeathDropItemPackage_C_UberGraphFrame_Offset == 0x590, "UDeathDropItemPackage_C::UberGraphFrame offset is not 590");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
