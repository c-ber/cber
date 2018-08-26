#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UZombieMatchResultNameWidget_C // Size: 0x258
	: public UUserWidget // Size: 0x248
{
private:
	typedef UZombieMatchResultNameWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(164849); // id32("WidgetBlueprintGeneratedClass ZombieMatchResultNameWidget.ZombieMatchResultNameWidget_C")
		return ptr;
	}
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_1; /* Ofs: 0x248 Size: 0x8 - ObjectProperty ZombieMatchResultNameWidget.ZombieMatchResultNameWidget_C.MatchResulttInfo_1 */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_2; /* Ofs: 0x250 Size: 0x8 - ObjectProperty ZombieMatchResultNameWidget.ZombieMatchResultNameWidget_C.MatchResulttInfo_2 */


	inline bool SetMatchResulttInfo_1(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x248, value); }
	inline bool SetMatchResulttInfo_2(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x250, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUZombieMatchResultNameWidget_C = sizeof(UZombieMatchResultNameWidget_C); // 600
    static_assert(sizeof(UZombieMatchResultNameWidget_C) == 0x258, "Size of UZombieMatchResultNameWidget_C is not correct.");
	auto constexpr UZombieMatchResultNameWidget_C_MatchResulttInfo_1_Offset = offsetof(UZombieMatchResultNameWidget_C, MatchResulttInfo_1);
	static_assert(UZombieMatchResultNameWidget_C_MatchResulttInfo_1_Offset == 0x248, "UZombieMatchResultNameWidget_C::MatchResulttInfo_1 offset is not 248");
	auto constexpr UZombieMatchResultNameWidget_C_MatchResulttInfo_2_Offset = offsetof(UZombieMatchResultNameWidget_C, MatchResulttInfo_2);
	static_assert(UZombieMatchResultNameWidget_C_MatchResulttInfo_2_Offset == 0x250, "UZombieMatchResultNameWidget_C::MatchResulttInfo_2 offset is not 250");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
