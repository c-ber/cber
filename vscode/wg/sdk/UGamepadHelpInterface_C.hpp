#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGamepadHelpInterface_C // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UGamepadHelpInterface_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(168936); // id32("BlueprintGeneratedClass GamepadHelpInterface.GamepadHelpInterface_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGamepadHelpInterface_C = sizeof(UGamepadHelpInterface_C); // 48
    static_assert(sizeof(UGamepadHelpInterface_C) == 0x30, "Size of UGamepadHelpInterface_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
