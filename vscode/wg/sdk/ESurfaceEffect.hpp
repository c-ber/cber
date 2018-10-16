#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESurfaceEffect
{
   ESurfaceEffect__S_None = 0,
   ESurfaceEffect__S_Concrete_Roll = 1,
   ESurfaceEffect__S_Concrete_Skid = 2,
   ESurfaceEffect__S_Concrete_Spin = 3,
   ESurfaceEffect__S_Dirt_Roll = 4,
   ESurfaceEffect__S_Dirt_Skid = 5,
   ESurfaceEffect__S_Dirt_Spin = 6,
   ESurfaceEffect__S_Water_Roll = 7,
   ESurfaceEffect__S_Water_Skid = 8,
   ESurfaceEffect__S_Water_Spin = 9,
   ESurfaceEffect__S_Metal_Roll = 10,
   ESurfaceEffect__S_Metal_Skid = 11,
   ESurfaceEffect__S_Metal_Spin = 12,
   ESurfaceEffect__S_Wood_Roll = 13,
   ESurfaceEffect__S_Wood_Skid = 14,
   ESurfaceEffect__S_Wood_Spin = 15,
   ESurfaceEffect__S_Rock_Roll = 16,
   ESurfaceEffect__S_Rock_Skid = 17,
   ESurfaceEffect__S_Rock_Spin = 18,
   ESurfaceEffect__S_Grass_Roll = 19,
   ESurfaceEffect__S_Grass_Skid = 20,
   ESurfaceEffect__S_Grass_Spin = 21,
   ESurfaceEffect__S_Sand_Roll = 22,
   ESurfaceEffect__S_Sand_Skid = 23,
   ESurfaceEffect__S_Sand_Spin = 24,
   ESurfaceEffect__S_Concrete_Brake = 25,
   ESurfaceEffect__S_Dirt_Brake = 26,
   ESurfaceEffect__S_Water_Brake = 27,
   ESurfaceEffect__S_Metal_Brake = 28,
   ESurfaceEffect__S_Wood_Brake = 29,
   ESurfaceEffect__S_Rock_Brake = 30,
   ESurfaceEffect__S_Grass_Brake = 31,
   ESurfaceEffect__S_Sand_Brake = 32,
   ESurfaceEffect__S_Common_BrakeDisc = 33,
   ESurfaceEffect__S_Concrete_Punctured_Roll = 34,
   ESurfaceEffect__S_Concrete_Punctured_Skid = 35,
   ESurfaceEffect__S_Concrete_Punctured_Spin = 36,
   ESurfaceEffect__S_Concrete_Punctured_Brake = 37,
   ESurfaceEffect__S_MAX = 38,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
