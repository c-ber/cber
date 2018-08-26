#pragma once
#include "UItemStudio.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UThrowableWeaponStudio_C // Size: 0x480
	: public UItemStudio // Size: 0x470
{
private:
	typedef UThrowableWeaponStudio_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(64403); // id32("BlueprintGeneratedClass ThrowableWeaponStudio.ThrowableWeaponStudio_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x470 Size: 0x8 - StructProperty ThrowableWeaponStudio.ThrowableWeaponStudio_C.UberGraphFrame */
	ExternalPtr<struct UAsyncStaticMeshComponent> AsyncStaticMesh; /* Ofs: 0x478 Size: 0x8 - ObjectProperty ThrowableWeaponStudio.ThrowableWeaponStudio_C.AsyncStaticMesh */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x470, value); }
	inline bool SetAsyncStaticMesh(t_structHelper inst, ExternalPtr<struct UAsyncStaticMeshComponent> value) { inst.WriteOffset(0x478, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUThrowableWeaponStudio_C = sizeof(UThrowableWeaponStudio_C); // 1152
    static_assert(sizeof(UThrowableWeaponStudio_C) == 0x480, "Size of UThrowableWeaponStudio_C is not correct.");
	auto constexpr UThrowableWeaponStudio_C_UberGraphFrame_Offset = offsetof(UThrowableWeaponStudio_C, UberGraphFrame);
	static_assert(UThrowableWeaponStudio_C_UberGraphFrame_Offset == 0x470, "UThrowableWeaponStudio_C::UberGraphFrame offset is not 470");
	auto constexpr UThrowableWeaponStudio_C_AsyncStaticMesh_Offset = offsetof(UThrowableWeaponStudio_C, AsyncStaticMesh);
	static_assert(UThrowableWeaponStudio_C_AsyncStaticMesh_Offset == 0x478, "UThrowableWeaponStudio_C::AsyncStaticMesh offset is not 478");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
