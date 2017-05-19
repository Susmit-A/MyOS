#ifndef DEFAULT_MEM_DEFH_H
#define DEFAULT_MEM_DEFH_H
#ifndef TYPES_H
#include "types.h"
#endif


#define NULL (void *)0
typedef struct __attribute__ ((packed)) {
    unsigned short di, si, bp, sp, bx, dx, cx, ax;
    unsigned short gs, fs, es, ds, eflags;
} regs16_t;
 
static regs16_t REGS;
// tell compiler our int32 function is external
extern void intr32(unsigned char intnum, regs16_t *regs);

static byte *VID_MEM_START=(byte *)0xb8000;
//static byte *VID_MEM_START=(byte *)0xa0000; //vesa
byte inportb(uint16);
void outportb(uint16,byte);

#endif


