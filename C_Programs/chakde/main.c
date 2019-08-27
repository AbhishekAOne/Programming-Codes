#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    printf("Enter the string:");
    gets(a);
    char g="A",b="Z";
    int cvowels=0,cspace=0,cpt=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a' ||a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u' ||a[i]=='A' ||a[i]=='E' ||a[i]=='I' ||a[i]=='O' ||a[i]=='U')
        {
            cvowels++;
        }
        else if(a[i]==' ')
        {
            cspace++;
        }
        if(a[i]>='A' && a[i]<='Z')
            cpt++;
    }
    printf("Space:%d\nWords:%d",cspace,cvowels+1);
    printf("\nCapital:%d",cpt);
    return 0;
}
