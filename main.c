/*To create Pascal's Triangle - Dr. P. N. Singh*/

#include <stdio.h>
int main()
{
 int i,j,c;
 printf("The Pascal's triangle\n");
 for(i = 0; i<11; i++)
  {
    for(j = 1; j<20-i; j++)
      printf("  "); /* to print two blanks */

    for(j=0; j<i; j++)
    {
       if(i==0 || j==0)
	  c=1;
       else
	  c=c*(i-j)/j;
       printf("%4d",c);
    }
    printf("\n");
  }
 return (0);
}
