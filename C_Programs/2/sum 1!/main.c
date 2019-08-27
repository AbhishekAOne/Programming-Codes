#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int fact=1;

    for(int i=1;i<=n;i++)
    {
        fact=1;
        for(int j=i;j>0;j--)
        {
            fact=fact*j;

        }
            sum+=(fact/i);
    }
   printf("%d",sum);
}
