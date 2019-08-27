#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[3][3],b[3][3];
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
        scanf("%d",&b[i][j]);

    }
   }
   for(int k=0;k<3;k++)
   {
    for(int l=0;l<3;l++)
    {
        if(l<2)
        printf("%d ",a[k][l]+b[k][l]);
        else if(l==2)
        printf("%d\n",a[k][l]+b[k][l]);

    }
   }
   return 0;
}
