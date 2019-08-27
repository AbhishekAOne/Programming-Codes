#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[100];
    int n,temp,j,value;
    scanf("%d",&n);
    for(int i=0 ;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            for(j=i;j<n;j++)
                {
                    if(a[j]!=0)
                    {
                     value=j;
                     break;
                    }
                }
            temp=a[i];
            a[i]=a[value];
            a[value]=temp;

        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
