#include "default_mem_defs.h"
#include "types.h"

byte inportb(uint16 port)
{
	byte ret;
	__asm__ __volatile__("inb %1,%0":"=a"(ret):"dN"(port));
	return ret;
}
void outportb(uint16 port,byte data)
{
	__asm__ __volatile__("outb %1,%0"::"dN"(port),"a"(data));
}
