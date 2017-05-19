#ifndef DISPLAY_H
#define DISPLAY_H
#ifndef DEFAULT_MEM_DEFS_H
#include "default_mem_defs.h"
#endif
#ifdef STRINGS_H
#include "strings.h"
#endif

#define SW 80
#define SH 25

static int cursor=0,x=0,y=0;
void print(char);
void printstr(char *);
void gotoxy(int,int);
void clrscr();

#endif
