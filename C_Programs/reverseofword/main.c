#include <stdio.h>
#include <stdlib.h>

int main()
{
char a[100];
char b[100];
gets(a);
int cspace=0,c=0,j=0,k=0;
for(int i=0;a[i];i++)
{
    if(a[i]==' ')
        cspace++;
}
int count=cspace;
for(int i=0;cspace>1;i++)
{
    if(a[i]==' ')
    {
        c++;
        if(c==cspace)
        {
            j=i+1;
            while(a[j]!='\0' || a[j]!=' ')
            {
                b[k]=a[j];
                k++;
                j++;
            }
            b[k]=" ";
            k++;
            cspace--;
            for(int i=0;b[i]!=' ';i++)
{
    printf("%d",b[i]);
}
        }
        i=0;
        c=0;
    }

}
for(int i=0;b[i]!='\0';i++)
{
    printf("%d",b[i]);
}
return 0;
}
