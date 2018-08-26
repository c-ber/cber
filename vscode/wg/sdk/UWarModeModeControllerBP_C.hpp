#pragma once
#include "UWarModeModeController.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWarModeModeControllerBP_C // Size: 0x458
	: public UWarModeModeController // Size: 0x450
{
private:
	typedef UWarModeModeControllerBP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135547); // id32("BlueprintGeneratedClass WarModeModeControllerBP.WarModeModeControllerBP_C")
		return ptr;
	}
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x450 Size: 0x8 - ObjectProperty WarModeModeControllerBP.WarModeModeControllerBP_C.DefaultSceneRoot */


	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x450, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWarModeModeControllerBP_C = sizeof(UWarModeModeControllerBP_C); // 1112
    static_assert(sizeof(UWarModeModeControllerBP_C) == 0x458, "Size of UWarModeModeControllerBP_C is not correct.");
	auto constexpr UWarModeModeControllerBP_C_DefaultSceneRoot_Offset = offsetof(UWarModeModeControllerBP_C, DefaultSceneRoot);
	static_assert(UWarModeModeControllerBP_C_DefaultSceneRoot_Offset == 0x450, "UWarModeModeControllerBP_C::DefaultSceneRoot offset is not 450");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
