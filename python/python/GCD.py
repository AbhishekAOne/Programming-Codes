#input 3 number and find HCF for loop

a=int(input("a"));
b=int(input("b"));
c=int(input("c"));
hcf=1;
i=1;
while(i<=a):
    if(a%i==0 and b%i==0 and c%i==0):
        hcf=i;
    i=i+1;

print(hcf);
