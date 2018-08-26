#pragma once
#include "UBTCompositeNode.hpp"
#include "EBTParallelMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTComposite_SimpleParallel // Size: 0xD0
	: public UBTCompositeNode // Size: 0xD0
{
private:
	typedef UBTComposite_SimpleParallel t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(595); // id32("Class AIModule.BTComposite_SimpleParallel")
		return ptr;
	}
//	TEnumAsByte<enum EBTParallelMode> FinishMode; /* Ofs: 0xC8 Size: 0x1 - ByteProperty AIModule.BTComposite_SimpleParallel.FinishMode */


//	inline bool SetFinishMode(t_structHelper inst, TEnumAsByte<enum EBTParallelMode> value) { inst.WriteOffset(0xC8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTComposite_SimpleParallel = sizeof(UBTComposite_SimpleParallel); // 208
    static_assert(sizeof(UBTComposite_SimpleParallel) == 0xD0, "Size of UBTComposite_SimpleParallel is not correct.");
//	auto constexpr UBTComposite_SimpleParallel_FinishMode_Offset = offsetof(UBTComposite_SimpleParallel, FinishMode);
//	static_assert(UBTComposite_SimpleParallel_FinishMode_Offset == 0xc8, "UBTComposite_SimpleParallel::FinishMode offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
