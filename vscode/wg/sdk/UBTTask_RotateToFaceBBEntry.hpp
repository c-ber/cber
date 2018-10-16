#pragma once
#include "UBTTask_BlackboardBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTask_RotateToFaceBBEntry // Size: 0xA8
	: public UBTTask_BlackboardBase // Size: 0xA0
{
private:
	typedef UBTTask_RotateToFaceBBEntry t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(598); // id32("Class AIModule.BTTask_RotateToFaceBBEntry")
		return ptr;
	}
	float Precision; /* Ofs: 0xA0 Size: 0x4 - FloatProperty AIModule.BTTask_RotateToFaceBBEntry.Precision */
	uint8_t UnknownDataA4[0x4];


	inline bool SetPrecision(t_structHelper inst, float value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTask_RotateToFaceBBEntry = sizeof(UBTTask_RotateToFaceBBEntry); // 168
    static_assert(sizeof(UBTTask_RotateToFaceBBEntry) == 0xA8, "Size of UBTTask_RotateToFaceBBEntry is not correct.");
	auto constexpr UBTTask_RotateToFaceBBEntry_Precision_Offset = offsetof(UBTTask_RotateToFaceBBEntry, Precision);
	static_assert(UBTTask_RotateToFaceBBEntry_Precision_Offset == 0xa0, "UBTTask_RotateToFaceBBEntry::Precision offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
