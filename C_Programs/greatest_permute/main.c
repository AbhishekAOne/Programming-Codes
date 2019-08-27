#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[100];
   int n,value,rem,temp,count=0;
   scanf("%d",&n);
   value=n;
   for(int i=0 ;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>10)
        {
            while(a[i]!=0)
            {
                if(a[i]<10)
                {
                    break;
                }
              rem=a[i]%10;
              a[value]=rem;
              value++;
              a[i]=a[i]/10;
            }
        }
    }
    for(int i=0;i<value;i++)
    {
        if(a[i]<0)
        {
            a[i]=0;
            count++;
        }
    }
    for(int i=0;i<value;i++)
    {
        for(int j=0;j<value;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0;i<value-count;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
