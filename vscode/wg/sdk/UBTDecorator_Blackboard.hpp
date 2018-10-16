#pragma once
#include "UBTDecorator_BlackboardBase.hpp"
#include "EBTBlackboardRestart.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator_Blackboard // Size: 0xC8
	: public UBTDecorator_BlackboardBase // Size: 0x98
{
private:
	typedef UBTDecorator_Blackboard t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(571); // id32("Class AIModule.BTDecorator_Blackboard")
		return ptr;
	}
	int32_t IntValue; /* Ofs: 0x98 Size: 0x4 - IntProperty AIModule.BTDecorator_Blackboard.IntValue */
	float FloatValue; /* Ofs: 0x9C Size: 0x4 - FloatProperty AIModule.BTDecorator_Blackboard.FloatValue */
	FString StringValue; /* Ofs: 0xA0 Size: 0x10 - StrProperty AIModule.BTDecorator_Blackboard.StringValue */
	FString CachedDescription; /* Ofs: 0xB0 Size: 0x10 - StrProperty AIModule.BTDecorator_Blackboard.CachedDescription */
	uint8_t OperationType; /* Ofs: 0xC0 Size: 0x1 - ByteProperty AIModule.BTDecorator_Blackboard.OperationType */
	TEnumAsByte<enum EBTBlackboardRestart> NotifyObserver; /* Ofs: 0xC1 Size: 0x1 - ByteProperty AIModule.BTDecorator_Blackboard.NotifyObserver */
	uint8_t UnknownDataC2[0x6];


	inline bool SetIntValue(t_structHelper inst, int32_t value) { inst.WriteOffset(0x98, value); }
	inline bool SetFloatValue(t_structHelper inst, float value) { inst.WriteOffset(0x9C, value); }
	inline bool SetStringValue(t_structHelper inst, FString value) { inst.WriteOffset(0xA0, value); }
	inline bool SetCachedDescription(t_structHelper inst, FString value) { inst.WriteOffset(0xB0, value); }
	inline bool SetOperationType(t_structHelper inst, uint8_t value) { inst.WriteOffset(0xC0, value); }
	inline bool SetNotifyObserver(t_structHelper inst, TEnumAsByte<enum EBTBlackboardRestart> value) { inst.WriteOffset(0xC1, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator_Blackboard = sizeof(UBTDecorator_Blackboard); // 200
    static_assert(sizeof(UBTDecorator_Blackboard) == 0xC8, "Size of UBTDecorator_Blackboard is not correct.");
	auto constexpr UBTDecorator_Blackboard_IntValue_Offset = offsetof(UBTDecorator_Blackboard, IntValue);
	static_assert(UBTDecorator_Blackboard_IntValue_Offset == 0x98, "UBTDecorator_Blackboard::IntValue offset is not 98");
	auto constexpr UBTDecorator_Blackboard_FloatValue_Offset = offsetof(UBTDecorator_Blackboard, FloatValue);
	static_assert(UBTDecorator_Blackboard_FloatValue_Offset == 0x9c, "UBTDecorator_Blackboard::FloatValue offset is not 9c");
	auto constexpr UBTDecorator_Blackboard_StringValue_Offset = offsetof(UBTDecorator_Blackboard, StringValue);
	static_assert(UBTDecorator_Blackboard_StringValue_Offset == 0xa0, "UBTDecorator_Blackboard::StringValue offset is not a0");
	auto constexpr UBTDecorator_Blackboard_CachedDescription_Offset = offsetof(UBTDecorator_Blackboard, CachedDescription);
	static_assert(UBTDecorator_Blackboard_CachedDescription_Offset == 0xb0, "UBTDecorator_Blackboard::CachedDescription offset is not b0");
	auto constexpr UBTDecorator_Blackboard_OperationType_Offset = offsetof(UBTDecorator_Blackboard, OperationType);
	static_assert(UBTDecorator_Blackboard_OperationType_Offset == 0xc0, "UBTDecorator_Blackboard::OperationType offset is not c0");
	auto constexpr UBTDecorator_Blackboard_NotifyObserver_Offset = offsetof(UBTDecorator_Blackboard, NotifyObserver);
	static_assert(UBTDecorator_Blackboard_NotifyObserver_Offset == 0xc1, "UBTDecorator_Blackboard::NotifyObserver offset is not c1");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
