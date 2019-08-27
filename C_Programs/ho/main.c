#include <stdio.h>
#include <stdlib.h>
int sum(int *,int);

int main()
{
int n,a[200];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",a[i]);
}
printf("%d",sum(a,n));

    return 0;
}
int sum(int *p,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(*(p+i));
    }
    return sum;
}
