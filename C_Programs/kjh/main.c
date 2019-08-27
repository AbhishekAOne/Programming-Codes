#include <stdio.h>
#include <stdlib.h>

void main()
{
register int n=10;
 printf("%d\n",n);
 {register int n;
     printf("%d\n",n);

 }
 printf("%d",n);
}
