#pragma once
#include "UEnvQueryTest.hpp"
#include "FEnvTraceData.hpp"
#include "FAIDataProviderBoolValue.hpp"
#include "FAIDataProviderFloatValue.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryTest_Trace // Size: 0x290
	: public UEnvQueryTest // Size: 0x1C8
{
private:
	typedef UEnvQueryTest_Trace t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(648); // id32("Class AIModule.EnvQueryTest_Trace")
		return ptr;
	}
	FEnvTraceData TraceData; /* Ofs: 0x1C8 Size: 0x30 - StructProperty AIModule.EnvQueryTest_Trace.TraceData */
	FAIDataProviderBoolValue TraceFromContext; /* Ofs: 0x1F8 Size: 0x30 - StructProperty AIModule.EnvQueryTest_Trace.TraceFromContext */
	FAIDataProviderFloatValue ItemHeightOffset; /* Ofs: 0x228 Size: 0x30 - StructProperty AIModule.EnvQueryTest_Trace.ItemHeightOffset */
	FAIDataProviderFloatValue ContextHeightOffset; /* Ofs: 0x258 Size: 0x30 - StructProperty AIModule.EnvQueryTest_Trace.ContextHeightOffset */
	ExternalPtr<struct UClass> Context; /* Ofs: 0x288 Size: 0x8 - ClassProperty AIModule.EnvQueryTest_Trace.Context */


	inline bool SetTraceData(t_structHelper inst, FEnvTraceData value) { inst.WriteOffset(0x1C8, value); }
	inline bool SetTraceFromContext(t_structHelper inst, FAIDataProviderBoolValue value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetItemHeightOffset(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0x228, value); }
	inline bool SetContextHeightOffset(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0x258, value); }
	inline bool SetContext(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x288, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryTest_Trace = sizeof(UEnvQueryTest_Trace); // 656
    static_assert(sizeof(UEnvQueryTest_Trace) == 0x290, "Size of UEnvQueryTest_Trace is not correct.");
	auto constexpr UEnvQueryTest_Trace_TraceData_Offset = offsetof(UEnvQueryTest_Trace, TraceData);
	static_assert(UEnvQueryTest_Trace_TraceData_Offset == 0x1c8, "UEnvQueryTest_Trace::TraceData offset is not 1c8");
	auto constexpr UEnvQueryTest_Trace_TraceFromContext_Offset = offsetof(UEnvQueryTest_Trace, TraceFromContext);
	static_assert(UEnvQueryTest_Trace_TraceFromContext_Offset == 0x1f8, "UEnvQueryTest_Trace::TraceFromContext offset is not 1f8");
	auto constexpr UEnvQueryTest_Trace_ItemHeightOffset_Offset = offsetof(UEnvQueryTest_Trace, ItemHeightOffset);
	static_assert(UEnvQueryTest_Trace_ItemHeightOffset_Offset == 0x228, "UEnvQueryTest_Trace::ItemHeightOffset offset is not 228");
	auto constexpr UEnvQueryTest_Trace_ContextHeightOffset_Offset = offsetof(UEnvQueryTest_Trace, ContextHeightOffset);
	static_assert(UEnvQueryTest_Trace_ContextHeightOffset_Offset == 0x258, "UEnvQueryTest_Trace::ContextHeightOffset offset is not 258");
	auto constexpr UEnvQueryTest_Trace_Context_Offset = offsetof(UEnvQueryTest_Trace, Context);
	static_assert(UEnvQueryTest_Trace_Context_Offset == 0x288, "UEnvQueryTest_Trace::Context offset is not 288");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
