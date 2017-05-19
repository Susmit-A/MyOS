#include "include/display.h"
#include "include/isr.h"
#include "include/idt.h"
#include "include/keyboard.h"
#include "include/vesa.h"

main()
{
	VESA_INFO *vin;
	//int i=5/0;
	//clrscr();
	isr_install();
	install_kb();
	asm("sti");
	REGS.ax=0x4f00;
	REGS.di=low_16((int)vin);
	REGS.es=high_16((int)vin);
	//intr32(0x10,&REGS);
	//char *a=(byte *)(vin->VidPtr);
	//VID_MEM_START=a;
	//REGS.ax=0x4f02;
	//REGS.bx=0x4115;
	//intr32(0x10,&REGS);
	//*(VID_MEM_START)='A';
	//*(VID_MEM_START)=0x07;
	//if(REGS.ax==0x004f)
	//{
		//REGS.ax=0x03;
		//REGS.bx=0;
		//intr32(0x10,&REGS);
		//printstr("Success");
	//}	
	//else
	//{
		//REGS.ax=0x03;
		//REGS.bx=0;
		//intr32(0x10,&REGS);
		//printstr("Fail");
	//}
	//	printstr("Fail");
	//clrscr();
	//for(int i=0;i*32<1000;i++)
	//	*(a+i)=1;
	//printstr("Hello World\n\r");
	while(1)
		asm("hlt");
}
