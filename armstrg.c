#include<stdio.h>
#include<math.h>
int main()
{
int i,n,rem,sum=0;
printf("enter the number\n");
scanf("%d",&n);
	while(n>0)
	{ 
	rem=n%10;
	sum=sum+(rem*rem*rem);
	n=n/10;
	}
printf("armstrong number is equal to:%d",sum);
return 0;
}
