#pragma once
#include "UActor.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTN_AudioTestActor_V2_C // Size: 0x460
	: public UActor // Size: 0x410
{
private:
	typedef UTN_AudioTestActor_V2_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(109650); // id32("BlueprintGeneratedClass TN_AudioTestActor_V2.TN_AudioTestActor_V2_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x410 Size: 0x8 - StructProperty TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.UberGraphFrame */
	ExternalPtr<struct UAkComponent> Ak; /* Ofs: 0x418 Size: 0x8 - ObjectProperty TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.Ak */
	ExternalPtr<struct UArrowComponent> Arrow; /* Ofs: 0x420 Size: 0x8 - ObjectProperty TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.Arrow */
	ExternalPtr<struct UBillboardComponent> Billboard; /* Ofs: 0x428 Size: 0x8 - ObjectProperty TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.Billboard */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x430 Size: 0x8 - ObjectProperty TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.DefaultSceneRoot */
	ExternalPtr<struct UPlayerPawn_v2_C> ParentRef; /* Ofs: 0x438 Size: 0x8 - ObjectProperty TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.ParentRef */
	TArray<ExternalPtr<struct UAkAudioEvent>> AkEventTable; /* Ofs: 0x440 Size: 0x10 - ArrayProperty TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.AkEventTable */
	ExternalPtr<struct UW_AudioTest_C> WidgetRef; /* Ofs: 0x450 Size: 0x8 - ObjectProperty TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.WidgetRef */
	int32_t SelectIndex; /* Ofs: 0x458 Size: 0x4 - IntProperty TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.SelectIndex */
	float TriggerRate; /* Ofs: 0x45C Size: 0x4 - FloatProperty TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.TriggerRate */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x410, value); }
	inline bool SetAk(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetArrow(t_structHelper inst, ExternalPtr<struct UArrowComponent> value) { inst.WriteOffset(0x420, value); }
	inline bool SetBillboard(t_structHelper inst, ExternalPtr<struct UBillboardComponent> value) { inst.WriteOffset(0x428, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x430, value); }
	inline bool SetParentRef(t_structHelper inst, ExternalPtr<struct UPlayerPawn_v2_C> value) { inst.WriteOffset(0x438, value); }
	inline bool SetAkEventTable(t_structHelper inst, TArray<ExternalPtr<struct UAkAudioEvent>> value) { inst.WriteOffset(0x440, value); }
	inline bool SetWidgetRef(t_structHelper inst, ExternalPtr<struct UW_AudioTest_C> value) { inst.WriteOffset(0x450, value); }
	inline bool SetSelectIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x458, value); }
	inline bool SetTriggerRate(t_structHelper inst, float value) { inst.WriteOffset(0x45C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTN_AudioTestActor_V2_C = sizeof(UTN_AudioTestActor_V2_C); // 1120
    static_assert(sizeof(UTN_AudioTestActor_V2_C) == 0x460, "Size of UTN_AudioTestActor_V2_C is not correct.");
	auto constexpr UTN_AudioTestActor_V2_C_UberGraphFrame_Offset = offsetof(UTN_AudioTestActor_V2_C, UberGraphFrame);
	static_assert(UTN_AudioTestActor_V2_C_UberGraphFrame_Offset == 0x410, "UTN_AudioTestActor_V2_C::UberGraphFrame offset is not 410");
	auto constexpr UTN_AudioTestActor_V2_C_Ak_Offset = offsetof(UTN_AudioTestActor_V2_C, Ak);
	static_assert(UTN_AudioTestActor_V2_C_Ak_Offset == 0x418, "UTN_AudioTestActor_V2_C::Ak offset is not 418");
	auto constexpr UTN_AudioTestActor_V2_C_Arrow_Offset = offsetof(UTN_AudioTestActor_V2_C, Arrow);
	static_assert(UTN_AudioTestActor_V2_C_Arrow_Offset == 0x420, "UTN_AudioTestActor_V2_C::Arrow offset is not 420");
	auto constexpr UTN_AudioTestActor_V2_C_Billboard_Offset = offsetof(UTN_AudioTestActor_V2_C, Billboard);
	static_assert(UTN_AudioTestActor_V2_C_Billboard_Offset == 0x428, "UTN_AudioTestActor_V2_C::Billboard offset is not 428");
	auto constexpr UTN_AudioTestActor_V2_C_DefaultSceneRoot_Offset = offsetof(UTN_AudioTestActor_V2_C, DefaultSceneRoot);
	static_assert(UTN_AudioTestActor_V2_C_DefaultSceneRoot_Offset == 0x430, "UTN_AudioTestActor_V2_C::DefaultSceneRoot offset is not 430");
	auto constexpr UTN_AudioTestActor_V2_C_ParentRef_Offset = offsetof(UTN_AudioTestActor_V2_C, ParentRef);
	static_assert(UTN_AudioTestActor_V2_C_ParentRef_Offset == 0x438, "UTN_AudioTestActor_V2_C::ParentRef offset is not 438");
	auto constexpr UTN_AudioTestActor_V2_C_AkEventTable_Offset = offsetof(UTN_AudioTestActor_V2_C, AkEventTable);
	static_assert(UTN_AudioTestActor_V2_C_AkEventTable_Offset == 0x440, "UTN_AudioTestActor_V2_C::AkEventTable offset is not 440");
	auto constexpr UTN_AudioTestActor_V2_C_WidgetRef_Offset = offsetof(UTN_AudioTestActor_V2_C, WidgetRef);
	static_assert(UTN_AudioTestActor_V2_C_WidgetRef_Offset == 0x450, "UTN_AudioTestActor_V2_C::WidgetRef offset is not 450");
	auto constexpr UTN_AudioTestActor_V2_C_SelectIndex_Offset = offsetof(UTN_AudioTestActor_V2_C, SelectIndex);
	static_assert(UTN_AudioTestActor_V2_C_SelectIndex_Offset == 0x458, "UTN_AudioTestActor_V2_C::SelectIndex offset is not 458");
	auto constexpr UTN_AudioTestActor_V2_C_TriggerRate_Offset = offsetof(UTN_AudioTestActor_V2_C, TriggerRate);
	static_assert(UTN_AudioTestActor_V2_C_TriggerRate_Offset == 0x45c, "UTN_AudioTestActor_V2_C::TriggerRate offset is not 45c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
