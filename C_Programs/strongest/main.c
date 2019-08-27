#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,remainder,sum=0;
scanf("%d",&n);
while(n!=0)
{
remainder=n%10;
//printf("%d\n",remainder);
int fact=1;
for(int i=remainder;i>0;i--)
{
    fact=fact*i;
    //printf("%d\n",fact);
}
sum+=fact;
n=n/10;

}

printf("%d",sum);
return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,remainder,sum=0;
scanf("%d",&n);
while(n!=0)
{
remainder=n%10;
//printf("%d\n",remainder);
int fact=1;
for(int i=remainder;i>0;i--)
{
    fact=fact*i;
    //printf("%d\n",fact);
}
sum+=fact;
n=n/10;

}

printf("%d",sum);
return 0;
}
