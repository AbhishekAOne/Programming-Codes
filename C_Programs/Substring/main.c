#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    gets(a);
    char b[100];
    gets(b);
    int flag=0,c=0;
    for(int i=0;a[i]!='\0';i++)
    {
        for(int j=0;;j++)
        {
            if(b[j]==a[i])
            {
                flag=1;
                i++;
                if(b[j+1]=='\0' && flag==1)
                    break;
            }
            else
            {
                flag=0;
                c++;
                break;
            }

        }
        i=c;

        if(flag==1)
        {
            break;
        }
    }
    if(flag==1)
        {
            printf("Yes");
        }
    else
        {
            printf("No");
        }
    return 0;
}

