#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,j;
   scanf("%d",&n);
   int ch[100];
   int i=0;
   while(n>0)
   {

          ch[i]=n%2;
           n=n/2;
           i++;


   }
   for(int j=i-1;j>=0;j--)
   {
       printf("%d",ch[j]);
   }
   return n;
}
