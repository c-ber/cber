#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UJsonUtilitiesDummyObject // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UJsonUtilitiesDummyObject t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(382); // id32("Class JsonUtilities.JsonUtilitiesDummyObject")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUJsonUtilitiesDummyObject = sizeof(UJsonUtilitiesDummyObject); // 48
    static_assert(sizeof(UJsonUtilitiesDummyObject) == 0x30, "Size of UJsonUtilitiesDummyObject is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
