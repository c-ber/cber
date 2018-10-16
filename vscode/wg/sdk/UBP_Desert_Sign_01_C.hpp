#pragma once
#include "UTslBreakableObject.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Desert_Sign_01_C // Size: 0x428
	: public UTslBreakableObject // Size: 0x420
{
private:
	typedef UBP_Desert_Sign_01_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(207781); // id32("BlueprintGeneratedClass BP_Desert_Sign_01.BP_Desert_Sign_01_C")
		return ptr;
	}
	ExternalPtr<struct UTslReactionComponent> Sign_03; /* Ofs: 0x420 Size: 0x8 - ObjectProperty BP_Desert_Sign_01.BP_Desert_Sign_01_C.Sign_03 */


	inline bool SetSign_03(t_structHelper inst, ExternalPtr<struct UTslReactionComponent> value) { inst.WriteOffset(0x420, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Desert_Sign_01_C = sizeof(UBP_Desert_Sign_01_C); // 1064
    static_assert(sizeof(UBP_Desert_Sign_01_C) == 0x428, "Size of UBP_Desert_Sign_01_C is not correct.");
	auto constexpr UBP_Desert_Sign_01_C_Sign_03_Offset = offsetof(UBP_Desert_Sign_01_C, Sign_03);
	static_assert(UBP_Desert_Sign_01_C_Sign_03_Offset == 0x420, "UBP_Desert_Sign_01_C::Sign_03 offset is not 420");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
