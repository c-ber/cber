#pragma once
#include "UTextureRenderTarget2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCanvasRenderTarget2D // Size: 0x120
	: public UTextureRenderTarget2D // Size: 0x100
{
private:
	typedef UCanvasRenderTarget2D t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1247); // id32("Class Engine.CanvasRenderTarget2D")
		return ptr;
	}
	FScriptMulticastDelegate OnCanvasRenderTargetUpdate; /* Ofs: 0x100 Size: 0x10 - MulticastDelegateProperty Engine.CanvasRenderTarget2D.OnCanvasRenderTargetUpdate */
	TWeakObjectPtr<ExternalPtr<struct UWorld>> World; /* Ofs: 0x110 Size: 0x8 - WeakObjectProperty Engine.CanvasRenderTarget2D.World */
	uint8_t boolField118;
	uint8_t UnknownData119[0x7];


	inline bool SetOnCanvasRenderTargetUpdate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x100, value); }
	inline bool SetWorld(t_structHelper inst, TWeakObjectPtr<ExternalPtr<struct UWorld>> value) { inst.WriteOffset(0x110, value); }
	inline bool bShouldClearRenderTargetOnReceiveUpdate()
	{
		return boolField118& 0x1;
	}
	inline bool SetbShouldClearRenderTargetOnReceiveUpdate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x118, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCanvasRenderTarget2D = sizeof(UCanvasRenderTarget2D); // 288
    static_assert(sizeof(UCanvasRenderTarget2D) == 0x120, "Size of UCanvasRenderTarget2D is not correct.");
	auto constexpr UCanvasRenderTarget2D_OnCanvasRenderTargetUpdate_Offset = offsetof(UCanvasRenderTarget2D, OnCanvasRenderTargetUpdate);
	static_assert(UCanvasRenderTarget2D_OnCanvasRenderTargetUpdate_Offset == 0x100, "UCanvasRenderTarget2D::OnCanvasRenderTargetUpdate offset is not 100");
	auto constexpr UCanvasRenderTarget2D_World_Offset = offsetof(UCanvasRenderTarget2D, World);
	static_assert(UCanvasRenderTarget2D_World_Offset == 0x110, "UCanvasRenderTarget2D::World offset is not 110");
	auto constexpr UCanvasRenderTarget2D_boolField118_Offset = offsetof(UCanvasRenderTarget2D, boolField118);
	static_assert(UCanvasRenderTarget2D_boolField118_Offset == 0x118, "UCanvasRenderTarget2D::boolField118 offset is not 118");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
