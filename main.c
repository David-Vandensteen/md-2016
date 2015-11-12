
#include <genesis.h>
#include "nn_core.h"
#include "gfx.h"
#include "music.h"
#include "RSE_startingScreen.h"
#include "visualPad.h"
#include <kdebug.h>

int main(){
	//TODO
	//sequencer
	//scene fadein, fadeout
	//cycle ID ou delta time SGDK /autoincrement
	RSE_startingScreen(16,16);
	//
	//sceneInit(340);
	//scenePlansPositionZero();
//	const u16 spriteQuantity = 4;
//	Sprite sprites[(u16)spriteQuantity];
//	visualPadInit(&sprites, 10, 10);
	KDebug_Alert("TEST");
	//RSE_startingScreen(10,3);// A TESTER

	while(1){
//		visualPadUpdate(&sprites);
//		SPR_update(&sprites, spriteQuantity);
		VDP_waitVSync();
	}
	return 0;
}
