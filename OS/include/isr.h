#ifndef ISR_H
#define ISR_H

#include"types.h"
#include"default_mem_defs.h"

void isr0();
void isr1();
void isr2();
void isr3();
void isr4();
void isr5();
void isr6();
void isr7();
void isr8();
void isr9();
void isr10();
void isr11();
void isr12();
void isr13();
void isr14();
void isr15();
void isr16();
void isr17();
void isr18();
void isr19();
void isr20();
void isr21();
void isr22();
void isr23();
void isr24();
void isr25();
void isr26();
void isr27();
void isr28();
void isr29();
void isr30();
void isr31();

static char exceptions[][32]={
	"Divide Exception",
	"Debug Error",
	"Non Maskable Interrupt",
	 "Breakpoint Exception",
	"Overflow",
	"Bount Range Exceeded",
	 "Invalid Opcode",
	"Device not present",
	"Double Fault",
	"Coprosessor Segment Overrun",
	"Invalid TTS",
	 "Segment not present",
	"Stack Segment fault",
	"General Protection Fault",
	"Page Fault",
	"Reserved",
	"x87 Floating Point Exception",
	"Alignment Check",
	"Machine Check",
	"SIMD Floating Point Exception",
	"Virtualization Exception",
	"Reserved",
	"Reserved",
	"Reserved",
	"Reserved",
	"Reserved",
	"Reserved",
	"Reserved",
	"Reserved",
	"Reserved",
	"Security Exception",
	"Reserved",
};

void isr_install();

#endif

