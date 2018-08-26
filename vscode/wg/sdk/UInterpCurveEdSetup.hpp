#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpCurveEdSetup // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef UInterpCurveEdSetup t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(785); // id32("Class Engine.InterpCurveEdSetup")
		return ptr;
	}
	TArray<struct FCurveEdTab> Tabs; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.InterpCurveEdSetup.Tabs */
	int32_t ActiveTab; /* Ofs: 0x40 Size: 0x4 - IntProperty Engine.InterpCurveEdSetup.ActiveTab */
	uint8_t UnknownData44[0x4];


	inline bool SetTabs(t_structHelper inst, TArray<struct FCurveEdTab> value) { inst.WriteOffset(0x30, value); }
	inline bool SetActiveTab(t_structHelper inst, int32_t value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpCurveEdSetup = sizeof(UInterpCurveEdSetup); // 72
    static_assert(sizeof(UInterpCurveEdSetup) == 0x48, "Size of UInterpCurveEdSetup is not correct.");
	auto constexpr UInterpCurveEdSetup_Tabs_Offset = offsetof(UInterpCurveEdSetup, Tabs);
	static_assert(UInterpCurveEdSetup_Tabs_Offset == 0x30, "UInterpCurveEdSetup::Tabs offset is not 30");
	auto constexpr UInterpCurveEdSetup_ActiveTab_Offset = offsetof(UInterpCurveEdSetup, ActiveTab);
	static_assert(UInterpCurveEdSetup_ActiveTab_Offset == 0x40, "UInterpCurveEdSetup::ActiveTab offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
