#ifndef STRINGS_H
#define STRINGS_H

int strlen(char *str)
{
	int i=0;
	for(i;str[i]!='\0';i++);
	return i;
}
int strcmp(char *str1,char *str2)
{
	if(strlen(str1)!=strlen(str2))
		return 0;
	for(int i=0;str1[i]!='\0';i++)
	{
		if(str1[i]!=str2[i])
			return 0;
	}
	return 1;
}
void strcat(char *dest,char *src)
{
	int i=0,j=0,ls;
	i=strlen(dest);
	ls=strlen(src);	
	for(j;j<=ls;j++)
	{
		dest[i]=src[j];
	}
}
void strcpy(char *dest,char *src)
{
	int l=strlen(src);
	for(int i=0;i<=l;i++)
		dest[i]=src[i];
}

#endif
