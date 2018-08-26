#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslKeyHintChecker // Size: 0x38
	: public UObject // Size: 0x30
{
private:
	typedef UTslKeyHintChecker t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1405); // id32("Class TslGame.TslKeyHintChecker")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t boolField31;
	uint8_t UnknownData32[0x6];


	inline bool bCurrState()
	{
		return boolField30& 0x1;
	}
	inline bool SetbCurrState(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsChanged()
	{
		return boolField31& 0x1;
	}
	inline bool SetbIsChanged(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x31, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslKeyHintChecker = sizeof(UTslKeyHintChecker); // 56
    static_assert(sizeof(UTslKeyHintChecker) == 0x38, "Size of UTslKeyHintChecker is not correct.");
	auto constexpr UTslKeyHintChecker_boolField30_Offset = offsetof(UTslKeyHintChecker, boolField30);
	static_assert(UTslKeyHintChecker_boolField30_Offset == 0x30, "UTslKeyHintChecker::boolField30 offset is not 30");
	auto constexpr UTslKeyHintChecker_boolField31_Offset = offsetof(UTslKeyHintChecker, boolField31);
	static_assert(UTslKeyHintChecker_boolField31_Offset == 0x31, "UTslKeyHintChecker::boolField31 offset is not 31");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
