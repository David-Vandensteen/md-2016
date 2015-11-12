#ifndef NN_DB_H
#define NN_DB_H
#include "nn_core.h"


void sprDb(spr spr);

//void dbS32(char *pLib, s32 value, u16 plan, s16 x, s16 y);
//void dbU32(char *pLib, u32 value, u16 plan, s16 x, s16 y);
//void dbU16(char *pLib, u16 value, u16 plan, s16 x, s16 y);
//void dbS16(char *pLib, s16 value, u16 plan, s16 x, s16 y);
//void dbU8(char *pLib, u8 value, u16 plan, s16 x, s16 y);
//void dbStr(char *pLib, u16 plan, s16 x, s16 y);

void printS32(char *pLib, s32 value, u16 plan, vec2s16 pos);
void printU32(char *pLib, u32 value, u16 plan, vec2s16 pos);
void printU16(char *pLib, u16 value, u16 plan, vec2s16 pos);
void printS16(char *pLib, s16 value, u16 plan, vec2s16 pos);
void printU8(char *pLib, u8 value, u16 plan, vec2s16 pos);
void printString(char *string, u16 plan, vec2s16 pos);

#endif