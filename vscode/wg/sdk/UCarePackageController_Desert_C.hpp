#pragma once
#include "UCarePackageController.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCarePackageController_Desert_C // Size: 0x618
	: public UCarePackageController // Size: 0x610
{
private:
	typedef UCarePackageController_Desert_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135571); // id32("BlueprintGeneratedClass CarePackageController_Desert.CarePackageController_Desert_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x610 Size: 0x8 - StructProperty CarePackageController_Desert.CarePackageController_Desert_C.UberGraphFrame */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x610, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCarePackageController_Desert_C = sizeof(UCarePackageController_Desert_C); // 1560
    static_assert(sizeof(UCarePackageController_Desert_C) == 0x618, "Size of UCarePackageController_Desert_C is not correct.");
	auto constexpr UCarePackageController_Desert_C_UberGraphFrame_Offset = offsetof(UCarePackageController_Desert_C, UberGraphFrame);
	static_assert(UCarePackageController_Desert_C_UberGraphFrame_Offset == 0x610, "UCarePackageController_Desert_C::UberGraphFrame offset is not 610");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
