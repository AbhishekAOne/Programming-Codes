#include <stdio.h>
#include <stdlib.h>
int lcm(int a,int b,int i)
{   int c;
           if(!b)
            {
            int c=b;
            }
        if(a%b==0 && c%b==0)
            {
                return b;
            }
        else
        {
            b--;
            lcm(a,b,i);
        }


}
int main()
{
    int a,b;
    int greater=a>b?a:b;
    scanf("%d %d",&a,&b);
    printf("LCM is:%d",lcm(a,b,greater));
    return 0;


}
