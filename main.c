#include "badusb.h"
#include "keymap.h"
void main(){
	Key_Init();
	prepare_key(KB_C);
	prepare_key(KB_A);
	prepare_key(KB_Q);
	prepare_ctl(KB_ALT);
	prepare_ctl(KB_CTRL);
	press_all();
	free_all();
	while(1);
}