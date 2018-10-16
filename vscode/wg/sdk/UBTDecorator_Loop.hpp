#pragma once
#include "UBTDecorator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator_Loop // Size: 0x80
	: public UBTDecorator // Size: 0x70
{
private:
	typedef UBTDecorator_Loop t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(583); // id32("Class AIModule.BTDecorator_Loop")
		return ptr;
	}
	int32_t NumLoops; /* Ofs: 0x70 Size: 0x4 - IntProperty AIModule.BTDecorator_Loop.NumLoops */
	uint8_t boolField74;
	uint8_t UnknownData75[0x3];
	float InfiniteLoopTimeoutTime; /* Ofs: 0x78 Size: 0x4 - FloatProperty AIModule.BTDecorator_Loop.InfiniteLoopTimeoutTime */
	uint8_t UnknownData7C[0x4];


	inline bool SetNumLoops(t_structHelper inst, int32_t value) { inst.WriteOffset(0x70, value); }
	inline bool bInfiniteLoop()
	{
		return boolField74& 0x1;
	}
	inline bool SetbInfiniteLoop(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x74, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetInfiniteLoopTimeoutTime(t_structHelper inst, float value) { inst.WriteOffset(0x78, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator_Loop = sizeof(UBTDecorator_Loop); // 128
    static_assert(sizeof(UBTDecorator_Loop) == 0x80, "Size of UBTDecorator_Loop is not correct.");
	auto constexpr UBTDecorator_Loop_NumLoops_Offset = offsetof(UBTDecorator_Loop, NumLoops);
	static_assert(UBTDecorator_Loop_NumLoops_Offset == 0x70, "UBTDecorator_Loop::NumLoops offset is not 70");
	auto constexpr UBTDecorator_Loop_boolField74_Offset = offsetof(UBTDecorator_Loop, boolField74);
	static_assert(UBTDecorator_Loop_boolField74_Offset == 0x74, "UBTDecorator_Loop::boolField74 offset is not 74");
	auto constexpr UBTDecorator_Loop_InfiniteLoopTimeoutTime_Offset = offsetof(UBTDecorator_Loop, InfiniteLoopTimeoutTime);
	static_assert(UBTDecorator_Loop_InfiniteLoopTimeoutTime_Offset == 0x78, "UBTDecorator_Loop::InfiniteLoopTimeoutTime offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
