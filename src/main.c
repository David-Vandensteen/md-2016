#include <genesis.h>
#include "nn_core.h"
#include "gfx.h"
#include "music.h"
#include "RSE_startingScreen.h"
#include "visualPad.h"

int main(){
	RSE_startingScreen(16, 16);
	while (1){
		VDP_waitVSync();
	}
	return 0;
}
