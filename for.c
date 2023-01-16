#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
      for(i=0;i<10;i++)
      if(a%2==0)printf("even\n");
      else printf("odd\n");
      if(b%2==0)printf("even\n");
      else printf("odd\n");
    return 0;
}

