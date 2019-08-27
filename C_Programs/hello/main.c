#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,LCM=0;
scanf("%d %d",&a,&b);
for(int i=2;i<=a;i++)
{
    for(int j=2;j<b;j++)
    {
        if((a%i)==0)
        {
            if((b%j)==0)
            {
                if(i==j)
                    LCM=i;
            }
        }
    }
}
printf("%d",LCM);
return 0;
}
