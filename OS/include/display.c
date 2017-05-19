#include "display.h"
#include "types.h"
#include "strings.h"

void print(char c)
{
	*(VID_MEM_START+cursor*2)=c;
	cursor++;
	if(x>=80)
	{
		x=0;
		y++;
	}
	else
		x++;
}

void printstr(char *str)
{
	int l=strlen(str);
	for(int i=0;i<l;i++)
	{
		switch(str[i])
		{
			default:
				if(str[i]!='\n' && str[i]!='\r')
				print(str[i]);
			break;
			case '\b':
				cursor--;
				*(VID_MEM_START+cursor*2)='\0';
				x--;
			break;

			case '\t':
				cursor+=4;
				x++;
			break;

			case '\n':
				cursor+=80;
				y++;
			break;
			case '\r':
				while(x>0)
				{
					cursor--;
					x--;
				}
			break; 
		}
	}
}

void gotoxy(int x,int y)
{
	cursor=80*x+y;
}
void clrscr()
{
	cursor=79*24;
	while(cursor>0)
	{
		*(VID_MEM_START+cursor)='\0';
		cursor-=2;
	}
}
