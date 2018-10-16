#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULayer // Size: 0x50
	: public UObject // Size: 0x30
{
private:
	typedef ULayer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(846); // id32("Class Engine.Layer")
		return ptr;
	}
	FName LayerName; /* Ofs: 0x30 Size: 0x8 - NameProperty Engine.Layer.LayerName */
	uint8_t boolField38;
	uint8_t UnknownData39[0x7];
	TArray<struct FLayerActorStats> ActorStats; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.Layer.ActorStats */


	inline bool SetLayerName(t_structHelper inst, FName value) { inst.WriteOffset(0x30, value); }
	inline bool bIsVisible()
	{
		return boolField38& 0x1;
	}
	inline bool SetbIsVisible(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetActorStats(t_structHelper inst, TArray<struct FLayerActorStats> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULayer = sizeof(ULayer); // 80
    static_assert(sizeof(ULayer) == 0x50, "Size of ULayer is not correct.");
	auto constexpr ULayer_LayerName_Offset = offsetof(ULayer, LayerName);
	static_assert(ULayer_LayerName_Offset == 0x30, "ULayer::LayerName offset is not 30");
	auto constexpr ULayer_boolField38_Offset = offsetof(ULayer, boolField38);
	static_assert(ULayer_boolField38_Offset == 0x38, "ULayer::boolField38 offset is not 38");
	auto constexpr ULayer_ActorStats_Offset = offsetof(ULayer, ActorStats);
	static_assert(ULayer_ActorStats_Offset == 0x40, "ULayer::ActorStats offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
