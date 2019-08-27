#n=1238 find sum of digits
#n=1826 find reverse


i=1283;
a=i;
r=0;
sum=0;
while(a!=0):
    r=a%10;sum=sum+r;a=a//10;
print(sum);
n=1826;
r=0;
rev=0;
a=n;
while(a!=0):
    r=a%10;rev=rev*10+r;a=a//10;
print(rev);

