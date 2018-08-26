#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EScriptExecutionMode
{
   EScriptExecutionMode__EveryParticle = 0,
   EScriptExecutionMode__SpawnedParticles = 1,
   EScriptExecutionMode__SingleParticle = 2,
   EScriptExecutionMode__EScriptExecutionMode_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
