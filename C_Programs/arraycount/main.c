#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int num,numcount=0;
    printf("Enter num to count frequency:");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
            numcount++;

    }
    printf("\nCount is:%d",numcount);
    return 0;
}
