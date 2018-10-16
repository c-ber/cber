#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVisualLoggerAutomationTests // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UVisualLoggerAutomationTests t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1259); // id32("Class Engine.VisualLoggerAutomationTests")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVisualLoggerAutomationTests = sizeof(UVisualLoggerAutomationTests); // 48
    static_assert(sizeof(UVisualLoggerAutomationTests) == 0x30, "Size of UVisualLoggerAutomationTests is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
