#pragma once
#include "UDefaultRifleSetting_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeapBerreta686_C // Size: 0xFA8
	: public UDefaultRifleSetting_C // Size: 0xFA0
{
private:
	typedef UWeapBerreta686_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(129395); // id32("BlueprintGeneratedClass WeapBerreta686.WeapBerreta686_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0xFA0 Size: 0x8 - StructProperty WeapBerreta686.WeapBerreta686_C.UberGraphFrame */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0xFA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeapBerreta686_C = sizeof(UWeapBerreta686_C); // 4008
    static_assert(sizeof(UWeapBerreta686_C) == 0xFA8, "Size of UWeapBerreta686_C is not correct.");
	auto constexpr UWeapBerreta686_C_UberGraphFrame_Offset = offsetof(UWeapBerreta686_C, UberGraphFrame);
	static_assert(UWeapBerreta686_C_UberGraphFrame_Offset == 0xfa0, "UWeapBerreta686_C::UberGraphFrame offset is not fa0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
