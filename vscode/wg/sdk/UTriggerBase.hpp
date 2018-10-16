#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTriggerBase // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UTriggerBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1791); // id32("Class Engine.TriggerBase")
		return ptr;
	}
//	ExternalPtr<struct UShapeComponent> CollisionComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.TriggerBase.CollisionComponent */


//	inline bool SetCollisionComponent(t_structHelper inst, ExternalPtr<struct UShapeComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTriggerBase = sizeof(UTriggerBase); // 1040
    static_assert(sizeof(UTriggerBase) == 0x410, "Size of UTriggerBase is not correct.");
//	auto constexpr UTriggerBase_CollisionComponent_Offset = offsetof(UTriggerBase, CollisionComponent);
//	static_assert(UTriggerBase_CollisionComponent_Offset == 0x408, "UTriggerBase::CollisionComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
