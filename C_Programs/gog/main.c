#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,large;
scanf("%d %d %d",&a,&b,&c);
large=((a>b)&&(a>c))?printf("%d",a):((large=(b>c)&&(b>a))?printf("%d",b):printf("%d",c));



    return 0;
}
