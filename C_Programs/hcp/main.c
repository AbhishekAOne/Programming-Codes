#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,rem,sum=0,fact,k;
scanf("%d",&n);
k=n;
while(n!=0)
{
    rem=n%10;
    fact=1;
    for(int i=rem;i>0;rem--)
    {
        fact=fact*i;
    }
    sum+=fact;
    n=n/10;

}
if(sum==k)
    printf("strong number");
else
    printf("not strong umber");
return 0;
}
