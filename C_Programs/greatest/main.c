#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[100];
    int n;
    scanf("%d",&n);
    for(int i=0 ;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
                count++;

        }
        b[i]=count;
    }
     for(int i=0 ;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
