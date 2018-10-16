#pragma once
#include "UBTDecorator_BlackboardBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator_IsBBEntryOfClass // Size: 0xA0
	: public UBTDecorator_BlackboardBase // Size: 0x98
{
private:
	typedef UBTDecorator_IsBBEntryOfClass t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(574); // id32("Class AIModule.BTDecorator_IsBBEntryOfClass")
		return ptr;
	}
	ExternalPtr<struct UClass> TestClass; /* Ofs: 0x98 Size: 0x8 - ClassProperty AIModule.BTDecorator_IsBBEntryOfClass.TestClass */


	inline bool SetTestClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x98, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator_IsBBEntryOfClass = sizeof(UBTDecorator_IsBBEntryOfClass); // 160
    static_assert(sizeof(UBTDecorator_IsBBEntryOfClass) == 0xA0, "Size of UBTDecorator_IsBBEntryOfClass is not correct.");
	auto constexpr UBTDecorator_IsBBEntryOfClass_TestClass_Offset = offsetof(UBTDecorator_IsBBEntryOfClass, TestClass);
	static_assert(UBTDecorator_IsBBEntryOfClass_TestClass_Offset == 0x98, "UBTDecorator_IsBBEntryOfClass::TestClass offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
