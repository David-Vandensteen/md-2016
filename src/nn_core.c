#include "nn_core.h"

/*	VECTOR */
vec2s16 vec2s16Make(s16 x, s16 y){
	vec2s16 r;
	r.x = x;
	r.y = y;
	return r;
}
vec2s32 vec2s32Make(s32 x, s32 y){
	vec2s32 r;
	r.x = x;
	r.y = y;
	return r;
}
vec2u16 vec2u16Make(u16 x, u16 y){
	vec2u16 r;
	r.x = x;
	r.y = y;
	return r;
}
vec2u32 vec2u32Make(u32 x, u32 y){
	vec2u32 r;
	r.x = x;
	r.y = y;
	return r;
}
vec2s16 vec2s16MakeZero(){
	vec2s16 r;
	r.x = 0;
	r.y = 0;
	return r;
}
vec2s32 vec2s32MakeZero(){
	vec2s32 r;
	r.x = 0;
	r.y = 0;
	return r;
}
vec2u16 vec2u16MakeZero(){
	vec2u16 r;
	r.x = 0;
	r.y = 0;
	return r;
}
vec2u32 vec2u32MakeZero(){
	vec2u32 r;
	r.x = 0;
	r.y = 0;
	return r;
}
Vect2D_s16 Vect2D_s16Make(s16 x, s16 y){
	Vect2D_s16 r;
	r.x = x;
	r.y = y;
	return r;

}
Vect2D_s32 Vect2D_s32Make(s32 x, s32 y){
	Vect2D_s32 r;
	r.x = x;
	r.y = y;
	return r;
}
Vect2D_u16 Vect2D_u16Make(u16 x, u16 y){
	Vect2D_u16 r;
	r.x = x;
	r.y = y;
	return r;
}
Vect2D_u32 Vect2D_u32Make(u32 x, u32 y){
	Vect2D_u32 r;
	r.x = x;
	r.y = y;
	return r;
}
Vect2D_s16 Vect2D_s16MakeZero(){
	Vect2D_s16 r;
	r.x = 0;
	r.y = 0;
	return r;
}
Vect2D_s32 Vect2D_s32MakeZero(){
	Vect2D_s32 r;
	r.x = 0;
	r.y = 0;
	return r;
}
Vect2D_u16 Vect2D_u16MakeZero(){
	Vect2D_u16 r;
	r.x = 0;
	r.y = 0;
	return r;
}
Vect2D_u32 Vect2D_u32MakeZero(){
	Vect2D_u32 r;
	r.x = 0;
	r.y = 0;
	return r;
}


/* UTILS */
scrolling scrollingMake(vec2s16 pos, vec2s16 posInc, u16 vblFrameSkip){
	scrolling r;
	r.pos = pos;
	r.posInc = posInc;
	r.vblFrameSkip = vblFrameSkip;
	return r;

}
scrolling ScrollingMakeZero(){
	scrolling r;
	r.pos.x = 0;
	r.pos.y = 0;
	r.posInc.x = 0;
	r.posInc.y = 0;
	r.vblFrameSkip = 0;
	return r;
}
void scrollingUpdate(scrolling *scrolling){

}
u16 konamiCodeUpdate(u16 *buttonSeq){
	u16 r = 0;
	u16 joyState = 0;
	joyState = JOY_readJoypad(JOY_1);
	if (JOY_readJoypad(JOY_1) == 0){ buttonSeq[11] = FALSE; }
	//Si on lit zero on est en etat release //isPress = FALSE
	switch (buttonSeq[0]) {
	case 0: //UP
		if (joyState == BUTTON_UP && buttonSeq[11] == FALSE){
			buttonSeq[0]++;
			buttonSeq[1] = TRUE;
			buttonSeq[11] = TRUE;
		}
		break;
	case 1: //UP
		if (joyState == BUTTON_UP && buttonSeq[11] == FALSE){
			buttonSeq[0]++;
			buttonSeq[2] = TRUE;
			buttonSeq[11] = TRUE;
		}
		break;
	case 2: //DOWN
		if (joyState == BUTTON_DOWN && buttonSeq[11] == FALSE){
			buttonSeq[0]++;
			buttonSeq[3] = TRUE;
			buttonSeq[11] = TRUE;
		}
		break;
	case 3: //DOWN
		if (joyState == BUTTON_DOWN && buttonSeq[11] == FALSE){
			buttonSeq[0]++;
			buttonSeq[4] = TRUE;
			buttonSeq[11] = TRUE;
		}
		break;
	case 4: //LEFT
		if (joyState == BUTTON_LEFT && buttonSeq[11] == FALSE){
			buttonSeq[0]++;
			buttonSeq[5] = TRUE;
			buttonSeq[11] = TRUE;
		}
		break;
	case 5: //RIGHT
		if (joyState == BUTTON_RIGHT && buttonSeq[11] == FALSE){
			buttonSeq[0]++;
			buttonSeq[6] = TRUE;
			buttonSeq[11] = TRUE;
		}
		break;
	case 6: //LEFT
		if (joyState == BUTTON_LEFT && buttonSeq[11] == FALSE){
			buttonSeq[0]++;
			buttonSeq[7] = TRUE;
			buttonSeq[11] = TRUE;
		}
		break;
	case 7: //RIGHT
		if (joyState == BUTTON_RIGHT && buttonSeq[11] == FALSE){
			buttonSeq[0]++;
			buttonSeq[8] = TRUE;
			buttonSeq[11] = TRUE;
		}
		break;
	case 8: //B
		if (joyState == BUTTON_B && buttonSeq[11] == FALSE){
			buttonSeq[0]++;
			buttonSeq[9] = TRUE;
			buttonSeq[11] = TRUE;
		}
		break;
	case 9: //A
		if (joyState == BUTTON_A && buttonSeq[11] == FALSE){
			buttonSeq[0]++;
			buttonSeq[10] = TRUE;
			buttonSeq[11] = TRUE;
			r = TRUE;
		}
		break;

	default:
		break;
	}
	return r;
}

void pause(u16 vblTempo);
