#include "nn_core.h"
#include "nn_db.h"

void printS32(char *pLib, s32 value, u16 plan, vec2s16 pos){
	int i = 0; for (i = 0; i < 6; i++){ VDP_clearTextBG(plan, pos.x + i, pos.y, 1); }
	VDP_drawTextBG(plan, pLib, 0, pos.x, pos.y);
	char valueStr[6];
	intToStr(value, valueStr, 6);
	VDP_clearTextBG(plan, pos.x, pos.y + 1, 1);
	VDP_drawTextBG(plan, valueStr, 0, pos.x, pos.y + 1);
}
void printU32(char *pLib, u32 value, u16 plan, vec2s16 pos){
	int i = 0; for (i = 0; i < 6; i++){ VDP_clearTextBG(plan, pos.x + i, pos.y, 1); }
	VDP_drawTextBG(plan, pLib, 0, pos.x, pos.y);
	char valueStr[6];
	intToStr(value, valueStr, 6);
	VDP_clearTextBG(plan, pos.x, pos.y + 1, 1);
	VDP_drawTextBG(plan, valueStr, 0, pos.x, pos.y + 1);
}
void printU16(char *pLib, u16 value, u16 plan, vec2s16 pos){
	int i = 0; for (i = 0; i < 6; i++){ VDP_clearTextBG(plan, pos.x + i, pos.y, 1); }
	VDP_drawTextBG(plan, pLib, 0, pos.x, pos.y);
	char valueStr[6];
	intToStr(value, valueStr, 6);
	VDP_clearTextBG(plan, pos.x, pos.y + 1, 1);
	VDP_drawTextBG(plan, valueStr, 0, pos.x, pos.y + 1);
}
void printS16(char *pLib, s16 value, u16 plan, vec2s16 pos){
	int i = 0; for (i = 0; i < 7; i++){ VDP_clearTextBG(plan, pos.x + i, pos.y + 1, 1); }
	VDP_drawTextBG(plan, pLib, 0, pos.x, pos.y);
	char valueStr[6];
	intToStr(value, valueStr, 6);
	VDP_clearTextBG(plan, pos.x, pos.y + 1, 1);
	VDP_drawTextBG(plan, valueStr, 0, pos.x, pos.y + 1);
}
void printU8(char *pLib, u8 value, u16 plan, vec2s16 pos){
	int i = 0; for (i = 0; i < 7; i++){ VDP_clearTextBG(plan, pos.x + i, pos.y + 1, 1); }
	VDP_drawTextBG(plan, pLib, 0, pos.x, pos.y);
	char valueStr[6];
	intToStr(value, valueStr, 6);
	VDP_clearTextBG(plan, pos.x, pos.y + 1, 1);
	VDP_drawTextBG(plan, valueStr, 0, pos.x, pos.y + 1);
}
void printString(char *string, u16 plan, vec2s16 pos){
	int i = 0; for (i = 0; i < 20; i++){ VDP_clearTextBG(plan, pos.x + i, pos.y + 1, 1); }
	VDP_drawTextBG(plan, string, 0, pos.x, pos.y);
}
