#include"isr.h"
#include"idt.h"
#include"display.h"
#include"util.h"

//#include"keyboard.h"

void isr_install()
{
	set_idt_gate(0, (uint32)isr0);
	set_idt_gate(1, (uint32)isr1);
	set_idt_gate(2, (uint32)isr2);
	set_idt_gate(3, (uint32)isr3);
	set_idt_gate(4, (uint32)isr4);
	set_idt_gate(5, (uint32)isr5);
	set_idt_gate(6, (uint32)isr6);
	set_idt_gate(7, (uint32)isr7);
	set_idt_gate(8, (uint32)isr8);
	//outportb(33,0xFD);	
	set_idt_gate(9, (uint32)isr9);
	set_idt_gate(10, (uint32)isr10);
	set_idt_gate(11, (uint32)isr11);
	set_idt_gate(12, (uint32)isr12);
	set_idt_gate(13, (uint32)isr13);
	set_idt_gate(14, (uint32)isr14);
	set_idt_gate(15, (uint32)isr15);
	set_idt_gate(16, (uint32)isr16);
	set_idt_gate(17, (uint32)isr17);
	set_idt_gate(18, (uint32)isr18);
	set_idt_gate(19, (uint32)isr19);
	set_idt_gate(20, (uint32)isr20);
	set_idt_gate(21, (uint32)isr21);
	set_idt_gate(22, (uint32)isr22);
	set_idt_gate(23, (uint32)isr23);
	set_idt_gate(24, (uint32)isr24);
	set_idt_gate(25, (uint32)isr25);
	set_idt_gate(26, (uint32)isr26);
	set_idt_gate(27, (uint32)isr27);
	set_idt_gate(28, (uint32)isr28);
	set_idt_gate(29, (uint32)isr29);
	set_idt_gate(30, (uint32)isr30);
	set_idt_gate(31, (uint32)isr31);
	
	set_idt();
}

void isr0()
{
	printstr(exceptions[0]);
	asm("hlt");
}
void isr1()
{
	printstr(exceptions[1]);
	asm("hlt");
}
void isr2()
{
	printstr(exceptions[2]);
	asm("hlt");
}
void isr3()
{
	printstr(exceptions[3]);
	asm("hlt");
}
void isr4()
{
	printstr(exceptions[4]);
	asm("hlt");
}
void isr5()
{
	printstr(exceptions[5]);
	asm("hlt");
}
void isr6()
{
	printstr(exceptions[6]);
	asm("hlt");
}
void isr7()
{
	printstr(exceptions[7]);
	asm("hlt");
}
void isr8()
{
	printstr(exceptions[8]);
	asm("hlt");
}
void isr9()
{
	//INT 9 is defined as "coprocessor segment overrun" by default. This routine overrides it it call INT 0x21 (keyboard) instead.
	__asm__ __volatile__("int $0x21");	
	asm("hlt");
}
void isr10()
{
	printstr(exceptions[10]);
	asm("hlt");
}
void isr11()
{
	printstr(exceptions[11]);
	asm("hlt");
}
void isr12()
{
	printstr(exceptions[12]);
	asm("hlt");
}
void isr13()
{
	//printstr(exceptions[13]);
	intr32(0x10,&REGS);
	asm("hlt");
}
void isr14()
{
	printstr(exceptions[14]);
	asm("hlt");
}
void isr15()
{
	printstr(exceptions[15]);
	asm("hlt");
}
void isr16()
{
	printstr(exceptions[16]);
	asm("hlt");
}
void isr17()
{
	printstr(exceptions[17]);
	asm("hlt");
}
void isr18()
{
	printstr(exceptions[18]);
	asm("hlt");
}
void isr19()
{
	printstr(exceptions[19]);
	asm("hlt");
}
void isr20()
{
	printstr(exceptions[20]);
	asm("hlt");
}
void isr21()
{
	printstr(exceptions[21]);
	asm("hlt");
}
void isr22()
{
	printstr(exceptions[22]);
	asm("hlt");
}
void isr23()
{
	printstr(exceptions[23]);
	asm("hlt");
}
void isr24()
{
	printstr(exceptions[24]);
	asm("hlt");
}
void isr25()
{
	printstr(exceptions[25]);
	asm("hlt");
}
void isr26()
{
	printstr(exceptions[26]);
	asm("hlt");
}
void isr27()
{
	printstr(exceptions[27]);
	asm("hlt");
}
void isr28()
{
	printstr(exceptions[28]);
	asm("hlt");
}
void isr29()
{
	printstr(exceptions[29]);
	asm("hlt");
}
void isr30()
{
	printstr(exceptions[30]);
	asm("hlt");
}
void isr31()
{
	printstr(exceptions[31]);
	asm("hlt");
}
