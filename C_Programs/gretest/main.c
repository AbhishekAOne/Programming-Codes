#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int n,max1,max2,pos1,pos2;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max1=a[0],pos1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max1)
        {
            max1=a[i];
            pos1=i;
        }
    }
    if(pos1+1<n)
    max2=a[pos1+1],pos2=pos1+1;
    else if(pos1+1==n)
       max2=a[pos1-1],pos2=pos1-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max2 && i!=pos1)
        {
            max2=a[i];
            pos2=i;
        }
    }
    printf("pos1:%d pos2:%d\nmax1:%d max2:%d mul:%d",pos1,pos2,max1,max2,max1*max2);



   return 0;
}
