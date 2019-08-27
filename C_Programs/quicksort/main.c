#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[100],b[100];
int n,posar,posr=0,temp;
scanf("%d",&n);
for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Second");
    scanf("%d",&posar);
for(int i=0;i<posar;i++)
    {
        scanf("%d",&b[i]);
    }
for(int i=0;i<posar;i++)
{
    for(int j=0;j<n;j++)
    {
        if(b[i]!=a[j])
        {
            for(int k=posr;k<n;k++)
            {
                if(b[i]==a[j] && a[j]==a[k])
                {
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                    posr++;
                }
            }
        }
    }
}
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    return 0;

}
