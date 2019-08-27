#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,temp=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n-j;k++)
        {
            if(a[k]>a[k+1])
            {
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
    for(int l=0;l<n;l++)
    {
        printf("%d ",a[l]);
    }
    return 0;
}
