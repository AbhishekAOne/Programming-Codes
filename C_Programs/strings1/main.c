#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   char a[]="My";
   char temp[50];
   strncpy(temp,a,sizeof(temp)-1);
   printf("%s %s",a,temp);
   return 0;

}
