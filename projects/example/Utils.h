#pragma once
#pragma GCC diagnostic ignored "-Wextern-initializer"

#define MySelf GET_PLAYER_ACTOR(0)
#define MyName GET_LOCAL_PLAYER_NAME(0)

//Declarations
Controller GetPlayerController();
bool IS_BIT_SET(int n, int k);
void SET_BIT(int* n, int k);
void CLEAR_BIT(int* n, int k);
char* StringFmt(char* fmt, char* p1, char* p2, char* p3);
const char* GetRegion(int volume);
const char* GetSlotColor(int slot);
void TeleportActor(Actor actor, vector3 position);
void ftoa(float n, char* res, float decimalPlaces);
void sprintf(char* buffer, const char* fmt, ...);
void printf(char* fmt, ...);
void PrintChat(char* text, char* text2, char* text3);
Script LaunchNewScript(char* script);