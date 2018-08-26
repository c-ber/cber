#pragma once
#include "UBTService_BlackboardBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTService_DefaultFocus // Size: 0xA8
	: public UBTService_BlackboardBase // Size: 0xA0
{
private:
	typedef UBTService_DefaultFocus t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(590); // id32("Class AIModule.BTService_DefaultFocus")
		return ptr;
	}
	uint8_t FocusPriority; /* Ofs: 0xA0 Size: 0x1 - ByteProperty AIModule.BTService_DefaultFocus.FocusPriority */
	uint8_t UnknownDataA1[0x7];


	inline bool SetFocusPriority(t_structHelper inst, uint8_t value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTService_DefaultFocus = sizeof(UBTService_DefaultFocus); // 168
    static_assert(sizeof(UBTService_DefaultFocus) == 0xA8, "Size of UBTService_DefaultFocus is not correct.");
	auto constexpr UBTService_DefaultFocus_FocusPriority_Offset = offsetof(UBTService_DefaultFocus, FocusPriority);
	static_assert(UBTService_DefaultFocus_FocusPriority_Offset == 0xa0, "UBTService_DefaultFocus::FocusPriority offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
