#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d\n%d",&a,&b);
    int result=1;
    float value;
    if(a>0 && b>0)
    {
        for(int i=0;i<b;i++)
        {
            result*=a;
        }
        printf("%d",result);
    }
    else if(a>0 && b<0)
    {
        for(int i=0;i<(b*-1);i++)
        {
            result*=a;

        }
        value=1/(float)result;
        printf("%.2f",value);

    }
    return 0;
}
