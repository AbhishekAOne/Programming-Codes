#include <stdio.h>
#include <stdlib.h>
int exp(int*,int*);
int main()
{
    int a,b,p;
    scanf("%d %d",&a,&b);
    p=exp(&a,&b);
    printf("\n%d",p);
    return 0;
}
int exp(int *c,int *d)
{  int x=1;
    for(int i=1;i<=*d;i++)
    {
    x=x* *c;
    }
    return (x);
}
