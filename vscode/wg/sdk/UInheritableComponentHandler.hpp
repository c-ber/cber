#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInheritableComponentHandler // Size: 0x50
	: public UObject // Size: 0x30
{
private:
	typedef UInheritableComponentHandler t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(782); // id32("Class Engine.InheritableComponentHandler")
		return ptr;
	}
	TArray<struct FComponentOverrideRecord> Records; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.InheritableComponentHandler.Records */
	TArray<ExternalPtr<struct UActorComponent>> UnnecessaryComponents; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.InheritableComponentHandler.UnnecessaryComponents */


	inline bool SetRecords(t_structHelper inst, TArray<struct FComponentOverrideRecord> value) { inst.WriteOffset(0x30, value); }
	inline bool SetUnnecessaryComponents(t_structHelper inst, TArray<ExternalPtr<struct UActorComponent>> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInheritableComponentHandler = sizeof(UInheritableComponentHandler); // 80
    static_assert(sizeof(UInheritableComponentHandler) == 0x50, "Size of UInheritableComponentHandler is not correct.");
	auto constexpr UInheritableComponentHandler_Records_Offset = offsetof(UInheritableComponentHandler, Records);
	static_assert(UInheritableComponentHandler_Records_Offset == 0x30, "UInheritableComponentHandler::Records offset is not 30");
	auto constexpr UInheritableComponentHandler_UnnecessaryComponents_Offset = offsetof(UInheritableComponentHandler, UnnecessaryComponents);
	static_assert(UInheritableComponentHandler_UnnecessaryComponents_Offset == 0x40, "UInheritableComponentHandler::UnnecessaryComponents offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
