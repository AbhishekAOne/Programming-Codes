#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,temp;
    scanf("%d %d",&a,&b);
    printf("\n a=%d b=%d ",a,b);
    temp=a;
    a=b;
    b=temp;
     printf("\n a=%d b=%d ",a,b);
     return 0;
}
