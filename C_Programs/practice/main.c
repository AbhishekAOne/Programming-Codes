#include<stdio.h>
int main()
{
    int a,n,sum=0,rem;
    scanf("%d",&a);
    n=a%10;
    sum=n;
    while(a!=0)
    {
     rem=a%10;
     a=a/10;
    }
    sum+=rem;
    printf("%d",sum);
    return 0;
}
