#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCableActor // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UCableActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2125); // id32("Class CableComponent.CableActor")
		return ptr;
	}
//	ExternalPtr<struct UCableComponent> CableComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty CableComponent.CableActor.CableComponent */


//	inline bool SetCableComponent(t_structHelper inst, ExternalPtr<struct UCableComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCableActor = sizeof(UCableActor); // 1040
    static_assert(sizeof(UCableActor) == 0x410, "Size of UCableActor is not correct.");
//	auto constexpr UCableActor_CableComponent_Offset = offsetof(UCableActor, CableComponent);
//	static_assert(UCableActor_CableComponent_Offset == 0x408, "UCableActor::CableComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
