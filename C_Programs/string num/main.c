#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n;
  long long int num,store;
 scanf("%d",&n);
 scanf("%lld\n",&num);
 store=num;
 for(int i=0;i<n-1;i++)
 {
     scanf("%lld",&num);
     store=store*10+num;
 }

 printf("%lld",store);
 return 0;
}
