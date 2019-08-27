#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100];
   int row,col,temp;
   scanf("%d\n%d",&row,&col);
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<col;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<col;j++)
       {
            for(int k=0;k<row;k++)
                for(int l=0;l<col;l++)
            {
            if(a[i][j]<a[k][l])
           {
               temp=a[k][l];
               a[k][l]=a[i][j];
               a[i][j]=temp;

           }
            }
       }
   }
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<col;j++)
       {
           printf("%d",a[i][j]);
       }
       printf("\n");
   }
   return 0;
}
