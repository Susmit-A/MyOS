#include"util.h"
void mem_copy(char *src,char *dest,int nbytes)
{
	for(int i=0;i<nbytes;i++)
		*(dest+i)=*(src+i);
}
void mem_set(uint8 *dest,uint8 val,uint32 len)
{
	uint8 *tmp=(uint8 *)dest;
	for(;len!=0;len--)
		*tmp++=val;
}
void atoi(int n,char *str)
{
	int sign;
	if((sign==n)<0)
		n=-n;
	int i=0;
	do{
		str[i++]=n%10+'0';
	}while((n/=10)>0);
	if(sign<0)
		str[i++]='-';
	str[i]='\0';
}
