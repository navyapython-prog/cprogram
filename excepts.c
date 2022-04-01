#include<stdio.h>
int main()
{
int i,j;
char str[50];
printf("enter a string\n\n");
gets(str);
for(i=0;str[i]!='\0';++i)
	{
		if((str[i]!='s')&&(str[i]!='S'))
		{
			printf("%c",str[i]);
		}
	}
return 0;
}
