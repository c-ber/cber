#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEdGraphSchema // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UEdGraphSchema t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(766); // id32("Class Engine.EdGraphSchema")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEdGraphSchema = sizeof(UEdGraphSchema); // 48
    static_assert(sizeof(UEdGraphSchema) == 0x30, "Size of UEdGraphSchema is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
