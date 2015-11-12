#include "nn_core.h"
/* GLOBALS VAR */
extern s16 _vbl_count;

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
	scrolling rScrolling;
	rScrolling.pos = pos;
	rScrolling.posInc = posInc;
	rScrolling.vblFrameSkip = vblFrameSkip;
	return rScrolling;

}
scrolling ScrollingMakeZero(){
	scrolling rScrolling;
	rScrolling.pos.x = 0;
	rScrolling.pos.y = 0;
	rScrolling.posInc.x = 0;
	rScrolling.posInc.y = 0;
	rScrolling.vblFrameSkip = 0;
	return rScrolling;
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

/* UTILS  */
void sceneInit(s16 spriteCacheSize){
	VDP_clearPlan(APLAN,0);
	VDP_clearPlan(BPLAN,0);
	MEM_init();
	VDP_init();
	VDP_setScreenHeight224();
	VDP_setScreenWidth320();
	if (spriteCacheSize > 0) {
		SPR_clear();
		SPR_init(spriteCacheSize);
	}
	_vbl_count = 0;
}
void scenePlansPositionZero(){
	VDP_setHorizontalScroll(PLAN_A,0);
	VDP_setVerticalScroll(PLAN_A, 0);
	VDP_setHorizontalScroll(PLAN_B,0);
	VDP_setVerticalScroll(PLAN_B, 0);
}
void pause(u16 vblTempo);



/* SPRITE */
spr sprMake(u16 idSpr, vec2s16 pos, vec2s16 posInc, u16 vblSkipTranslation){
	spr r;
	r.idSpr = idSpr;
	r.pos.x = pos.x;
	r.pos.y = pos.y;
	r.posInc.x = posInc.x;
	r.posInc.y = posInc.y;
	r.vblSkipTranslation = vblSkipTranslation;
	r.firstUpdate = 0;
	return r;
}
spr sprMakeZero(){
	spr r;
	r.idSpr = 0;
	r.pos = vec2s16MakeZero();
	r.posInc = vec2s16MakeZero();
	r.vblSkipTranslation = 0;
	r.firstUpdate = 0;
	return r;
}
spr sprMakeDefault(u16 idSpr){
	spr r = sprMakeZero();
	r.idSpr = idSpr;
	return r;
}

/*	SPRITE	*/
void sprUpdate(spr *spr){
	if (!spr->firstUpdate){
		//Memorisation des valeurs d origine dans les "slots" orig... de la structure
		spr->firstUpdate = 1;
		spr->origPos.x = spr->pos.x;
		spr->origPos.y = spr->pos.y;
		spr->origPosInc.x = spr->posInc.x;
		spr->origPosInc.y = spr->posInc.y;
	}
	if (spr->vblSkipTranslation == 0 || _vbl_count % spr->vblSkipTranslation == 0){
		if (spr->posInc.x != 0) spr->pos.x += spr->posInc.x;
		if (spr->posInc.y != 0) spr->pos.y += spr->posInc.y;
	}
}
