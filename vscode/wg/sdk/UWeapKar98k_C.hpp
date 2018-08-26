#pragma once
#include "UDefaultRifleSetting_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeapKar98k_C // Size: 0xFA8
	: public UDefaultRifleSetting_C // Size: 0xFA0
{
private:
	typedef UWeapKar98k_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(101757); // id32("BlueprintGeneratedClass WeapKar98k.WeapKar98k_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0xFA0 Size: 0x8 - StructProperty WeapKar98k.WeapKar98k_C.UberGraphFrame */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0xFA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeapKar98k_C = sizeof(UWeapKar98k_C); // 4008
    static_assert(sizeof(UWeapKar98k_C) == 0xFA8, "Size of UWeapKar98k_C is not correct.");
	auto constexpr UWeapKar98k_C_UberGraphFrame_Offset = offsetof(UWeapKar98k_C, UberGraphFrame);
	static_assert(UWeapKar98k_C_UberGraphFrame_Offset == 0xfa0, "UWeapKar98k_C::UberGraphFrame offset is not fa0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
