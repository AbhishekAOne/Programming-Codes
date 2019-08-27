#include<stdio.h>
int main()
{ int remainder,fact;
scanf("%d",&remainder);
    for(int i=1;i<=remainder;i++)
{
    fact=fact*i;
}
printf("%d",fact);

}
