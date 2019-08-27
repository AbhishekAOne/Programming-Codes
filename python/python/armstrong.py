# check number arstrong or nor cube of all digits equal to the number
n=int(input("Enter no"));
a=n;
r=0;
nu=0;
while(a!=0):
    r=a%10;
    nu=nu+(r**3);
    a=a//10;
if(nu==n):
    print("armstrong");
else:
    print("not armstrong");
