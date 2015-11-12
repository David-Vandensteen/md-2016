#ifndef NN_CORE_H
#define NN_CORE_H
#include <genesis.h>

/***
MEMO MEGADRIVE:
VRAM            :               64 KBytes (64ko) (512 kbit)
VRAM Range addr :               0000 - FFFF  (65535)
Screen Res      :               320 x 224
Estimated Max	 : 				 128 000
pixels in VRAM

RAM 			 :				 Add -Wpadded to GCC & check warning compilation
Alignement

Ne pas utiliser la compression gfx pour les sprites animes

Bien utiliser la sequence dans le sample sprite sur l acces VDP et gestion des interruptions
Sinon risque de fail sur Hardware
Ex:
u16 vramIndex = TILE_USERINDEX;
SYS_disableInts();
VDP_init();
VDP_setScreenWidth320();
SPR_init(340);
VDP_setPaletteColors(0, palette_black, 64);
VDP_drawImageEx(APLAN, &bgas_image, TILE_ATTR_FULL(PAL1, FALSE, FALSE, FALSE,vramIndex), 0, 0, FALSE, TRUE);
vramIndex+= bgas_image.tileset->numTile;

VDP_drawImageEx(BPLAN, &tribute_image, TILE_ATTR_FULL(PAL0, TRUE, FALSE, FALSE,vramIndex), 7, 0, FALSE, TRUE);
vramIndex+= tribute_image.tileset->numTile;
SYS_enableInts();

***/

/* GLOBALS VAR CONST */
s16 _vbl_count;

/* STRUCT */
typedef struct vec2s16 vec2s16;
struct vec2s16{
	s16 x;
	s16 y;
};
typedef struct vec2s32 vec2s32;
struct vec2s32{
	s32 x;
	s32 y;
};
typedef struct vec2u16 vec2u16;
struct vec2u16{
	u16 x;
	u16 y;
};
typedef struct vec2u32 vec2u32;
struct vec2u32{
	u32 x;
	u32 y;
};

 /* STRUCT */
typedef struct scrolling scrolling;
struct scrolling{
	vec2s16 pos;
	vec2s16 posInc;
	s16 vblFrameSkip;
};

typedef struct spr spr;
struct spr{
	u16 idSpr;
	vec2s16 pos;
	vec2s16 posInc;
	s16 vblSkipTranslation;

	//INTERNAL
	u16 firstUpdate;
	vec2s16 origPos;
	vec2s16 origPosInc;
};

/*	VECTOR */
vec2s16 vec2s16Make(s16 x, s16 y);
vec2s32 vec2s32Make(s32 x, s32 y);
vec2u16 vec2u16Make(u16 x, u16 y);
vec2u32 vec2u32Make(u32 x, u32 y);
vec2s16 vec2s16MakeZero();
vec2s32 vec2s32MakeZero();
vec2u16 vec2u16MakeZero();
vec2u32 vec2u32MakeZero();
Vect2D_s16 Vect2D_s16Make(s16 x, s16 y);
Vect2D_s32 Vect2D_s32Make(s32 x, s32 y);
Vect2D_u16 Vect2D_u16Make(u16 x, u16 y);
Vect2D_u32 Vect2D_u32Make(u32 x, u32 y);
Vect2D_s16 Vect2D_s16MakeZero();
Vect2D_s32 Vect2D_s32MakeZero();
Vect2D_u16 Vect2D_u16MakeZero();
Vect2D_u32 Vect2D_u32MakeZero();


/* SPRITE */
spr sprMake(u16 idSpr, vec2s16 pos, vec2s16 posInc, u16 vblSkipTranslation);

void sprUpdate(spr *spr);
spr sprMakeZero();
spr sprMakeDefault(u16 idSpr);



/* UTILS */
scrolling scrollingMake(vec2s16 pos, vec2s16 posInc, u16 vblFrameSkip);
scrolling ScrollingMakeZero();
void scrollingUpdate(scrolling *scrolling);
void pause(u16 vblTempo);


/* UTILS */
void sceneInit(s16 spriteCacheSize);
void scenePlansPositionZero();


/* UTILS KONAMI CODE */
u16 konamiCodeUpdate(u16 *buttonSeq); //return TRUE when code is complete
#define KONAMICODEINIT		u16 konButtonSeqState[12] = {0,0,0,0,0,0,0,0,0,0,0,0}
#define KONAMICODEUPDATE	konamiCodeUpdate(&konButtonSeqState)
#endif
