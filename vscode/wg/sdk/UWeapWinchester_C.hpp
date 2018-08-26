#pragma once
#include "UDefaultRifleSetting_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeapWinchester_C // Size: 0xFA8
	: public UDefaultRifleSetting_C // Size: 0xFA0
{
private:
	typedef UWeapWinchester_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(131883); // id32("BlueprintGeneratedClass WeapWinchester.WeapWinchester_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0xFA0 Size: 0x8 - StructProperty WeapWinchester.WeapWinchester_C.UberGraphFrame */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0xFA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeapWinchester_C = sizeof(UWeapWinchester_C); // 4008
    static_assert(sizeof(UWeapWinchester_C) == 0xFA8, "Size of UWeapWinchester_C is not correct.");
	auto constexpr UWeapWinchester_C_UberGraphFrame_Offset = offsetof(UWeapWinchester_C, UberGraphFrame);
	static_assert(UWeapWinchester_C_UberGraphFrame_Offset == 0xfa0, "UWeapWinchester_C::UberGraphFrame offset is not fa0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
