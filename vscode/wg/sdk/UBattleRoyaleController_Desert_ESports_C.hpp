#pragma once
#include "UBattleRoyaleController_ESports.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBattleRoyaleController_Desert_ESports_C // Size: 0x678
	: public UBattleRoyaleController_ESports // Size: 0x670
{
private:
	typedef UBattleRoyaleController_Desert_ESports_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135579); // id32("BlueprintGeneratedClass BattleRoyaleController_Desert_ESports.BattleRoyaleController_Desert_ESports_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x670 Size: 0x8 - StructProperty BattleRoyaleController_Desert_ESports.BattleRoyaleController_Desert_ESports_C.UberGraphFrame */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x670, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBattleRoyaleController_Desert_ESports_C = sizeof(UBattleRoyaleController_Desert_ESports_C); // 1656
    static_assert(sizeof(UBattleRoyaleController_Desert_ESports_C) == 0x678, "Size of UBattleRoyaleController_Desert_ESports_C is not correct.");
	auto constexpr UBattleRoyaleController_Desert_ESports_C_UberGraphFrame_Offset = offsetof(UBattleRoyaleController_Desert_ESports_C, UberGraphFrame);
	static_assert(UBattleRoyaleController_Desert_ESports_C_UberGraphFrame_Offset == 0x670, "UBattleRoyaleController_Desert_ESports_C::UberGraphFrame offset is not 670");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
