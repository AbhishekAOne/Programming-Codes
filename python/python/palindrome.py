# check the number palindrome or not reverse=real no
n=int(input("Enter no"));
a=n;
r=0;
num=0;
while(a!=0):
    r=a%10;
    num=num*10+r;
    a=a//10;
if(num==n):
    print("palindrome");
else:
    print("not palindrome");