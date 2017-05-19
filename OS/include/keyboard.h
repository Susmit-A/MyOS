#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "types.h"
#include "idt.h"

//static char *keybuf='\0';
//static uint16 bufsize=0;
static unsigned char keymap[128]=
{
	0,27,'1','2','3','4','5','6','7','8','9',
	'0','-','=','\b','\t','q','w','e','r','t','y','u','i','o','p',
	'[',']','\n',0,'a','s','d','f','g','h','j','k','l',';','\'','`',
	0,'\\','z','x','c','v','b','n','m',',','.','/',0,'*',0,' ',0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,'-',0,0,0,'+',0,0,0,0,0,0,0,0,0
};
void keyboard_handler()
{
	//asm("cli");
	outportb(0x20,0x20);
	if(inportb(0x64) & 0x01)
	{
		char x=(uint8)inportb(0x60);
		if((int)x>=128 || (int)x<0)
		{
			asm("sti");
			return; 
		}
		//*(keybuf+bufsize)=(uint8)inportb(0x60);
		print(keymap[x]);
		//bufsize++;
	}
	asm("sti");
}
void install_kb()
{
		//*(keymap+i)=(char)i;
	outportb(0x21,0xFD);
	set_idt_gate(0x21, (uint32)keyboard_handler);
	set_idt();
}

#endif
