#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[100][100];
   int row,col;
   scanf("%d\n%d",&row,&col);
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<col;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   int sum=0;
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<col;j++)
       {
           sum=sum+a[i][j];
       }
   }
   printf("Sum is:%d",sum);
   return 0;
}
