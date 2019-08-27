#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[100][100];
   int n,temp=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
     scanf("%d",&a[i][j]);

     for(int i=0;i<n;i++)
     {
         temp=a[i][i];
         a[i][i]=a[i][n-i-1];
         a[i][n-i-1]=temp;

     }
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
     printf("%d",a[i][j]);


   return 0;
}
