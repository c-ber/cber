#pragma once
#include "UUaz_C_01_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUaz_Armored_C // Size: 0xA28
	: public UUaz_C_01_C // Size: 0xA18
{
private:
	typedef UUaz_Armored_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(123923); // id32("BlueprintGeneratedClass Uaz_Armored.Uaz_Armored_C")
		return ptr;
	}
	ExternalPtr<struct UBoxComponent> FrontBlocker; /* Ofs: 0xA18 Size: 0x8 - ObjectProperty Uaz_Armored.Uaz_Armored_C.FrontBlocker */
	ExternalPtr<struct UStaticMeshComponent> Armor_Mesh; /* Ofs: 0xA20 Size: 0x8 - ObjectProperty Uaz_Armored.Uaz_Armored_C.Armor_Mesh */


	inline bool SetFrontBlocker(t_structHelper inst, ExternalPtr<struct UBoxComponent> value) { inst.WriteOffset(0xA18, value); }
	inline bool SetArmor_Mesh(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0xA20, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUaz_Armored_C = sizeof(UUaz_Armored_C); // 2600
    static_assert(sizeof(UUaz_Armored_C) == 0xA28, "Size of UUaz_Armored_C is not correct.");
	auto constexpr UUaz_Armored_C_FrontBlocker_Offset = offsetof(UUaz_Armored_C, FrontBlocker);
	static_assert(UUaz_Armored_C_FrontBlocker_Offset == 0xa18, "UUaz_Armored_C::FrontBlocker offset is not a18");
	auto constexpr UUaz_Armored_C_Armor_Mesh_Offset = offsetof(UUaz_Armored_C, Armor_Mesh);
	static_assert(UUaz_Armored_C_Armor_Mesh_Offset == 0xa20, "UUaz_Armored_C::Armor_Mesh offset is not a20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
