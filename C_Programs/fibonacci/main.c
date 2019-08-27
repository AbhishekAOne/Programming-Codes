#include <stdio.h>
#include <stdlib.h>

int main()
{   int j=1;
    int i[10];
    i[0]=0;
    i[1]=1;
    printf("%d %d ",i[0],i[1]);

    for(j=2;j<10;j++)
    {
        i[j] = i[j-2]+i[j-1];
        printf("%d ",i[j]);
    }
    return 0;
}
