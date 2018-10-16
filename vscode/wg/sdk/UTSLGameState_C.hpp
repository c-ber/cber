#pragma once
#include "UTslGameState.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTSLGameState_C // Size: 0x768
	: public UTslGameState // Size: 0x750
{
private:
	typedef UTSLGameState_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(68966); // id32("BlueprintGeneratedClass TSLGameState.TSLGameState_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x750 Size: 0x8 - StructProperty TSLGameState.TSLGameState_C.UberGraphFrame */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x758 Size: 0x8 - ObjectProperty TSLGameState.TSLGameState_C.DefaultSceneRoot */
	int32_t SplineCount; /* Ofs: 0x760 Size: 0x4 - IntProperty TSLGameState.TSLGameState_C.SplineCount */
	int32_t SplineComponentCount; /* Ofs: 0x764 Size: 0x4 - IntProperty TSLGameState.TSLGameState_C.SplineComponentCount */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x750, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x758, value); }
	inline bool SetSplineCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x760, value); }
	inline bool SetSplineComponentCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x764, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTSLGameState_C = sizeof(UTSLGameState_C); // 1896
    static_assert(sizeof(UTSLGameState_C) == 0x768, "Size of UTSLGameState_C is not correct.");
	auto constexpr UTSLGameState_C_UberGraphFrame_Offset = offsetof(UTSLGameState_C, UberGraphFrame);
	static_assert(UTSLGameState_C_UberGraphFrame_Offset == 0x750, "UTSLGameState_C::UberGraphFrame offset is not 750");
	auto constexpr UTSLGameState_C_DefaultSceneRoot_Offset = offsetof(UTSLGameState_C, DefaultSceneRoot);
	static_assert(UTSLGameState_C_DefaultSceneRoot_Offset == 0x758, "UTSLGameState_C::DefaultSceneRoot offset is not 758");
	auto constexpr UTSLGameState_C_SplineCount_Offset = offsetof(UTSLGameState_C, SplineCount);
	static_assert(UTSLGameState_C_SplineCount_Offset == 0x760, "UTSLGameState_C::SplineCount offset is not 760");
	auto constexpr UTSLGameState_C_SplineComponentCount_Offset = offsetof(UTSLGameState_C, SplineComponentCount);
	static_assert(UTSLGameState_C_SplineComponentCount_Offset == 0x764, "UTSLGameState_C::SplineComponentCount offset is not 764");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
