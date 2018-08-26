#pragma once
#include "UItemStudio.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMeleeWeaponStudio_C // Size: 0x480
	: public UItemStudio // Size: 0x470
{
private:
	typedef UMeleeWeaponStudio_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(64421); // id32("BlueprintGeneratedClass MeleeWeaponStudio.MeleeWeaponStudio_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x470 Size: 0x8 - StructProperty MeleeWeaponStudio.MeleeWeaponStudio_C.UberGraphFrame */
	ExternalPtr<struct UAsyncStaticMeshComponent> AsyncStaticMesh; /* Ofs: 0x478 Size: 0x8 - ObjectProperty MeleeWeaponStudio.MeleeWeaponStudio_C.AsyncStaticMesh */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x470, value); }
	inline bool SetAsyncStaticMesh(t_structHelper inst, ExternalPtr<struct UAsyncStaticMeshComponent> value) { inst.WriteOffset(0x478, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMeleeWeaponStudio_C = sizeof(UMeleeWeaponStudio_C); // 1152
    static_assert(sizeof(UMeleeWeaponStudio_C) == 0x480, "Size of UMeleeWeaponStudio_C is not correct.");
	auto constexpr UMeleeWeaponStudio_C_UberGraphFrame_Offset = offsetof(UMeleeWeaponStudio_C, UberGraphFrame);
	static_assert(UMeleeWeaponStudio_C_UberGraphFrame_Offset == 0x470, "UMeleeWeaponStudio_C::UberGraphFrame offset is not 470");
	auto constexpr UMeleeWeaponStudio_C_AsyncStaticMesh_Offset = offsetof(UMeleeWeaponStudio_C, AsyncStaticMesh);
	static_assert(UMeleeWeaponStudio_C_AsyncStaticMesh_Offset == 0x478, "UMeleeWeaponStudio_C::AsyncStaticMesh offset is not 478");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
