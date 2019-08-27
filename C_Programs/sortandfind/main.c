#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,temp,flag=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]<a[j] && i!=j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]!=i)
                flag=1;
        }
        if(flag==1)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;


}
