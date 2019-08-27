#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,num2,rem,rev=0;
   scanf("%d",&num);
   num2=num;
   while(num2!=0)
   {
       rem=num2%10;
       rev=rev*10+rem;
       num2=num2/10;
   }
   printf("%d",rev);
   if(rev>=num)
    printf("greater");
   else
    printf("smaller");
   return 0;
}
