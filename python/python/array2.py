#remove third position element inarray
from array  import array;
n=[-1,-2,344,55,-33,44,77];
print(len(n));
for i in n:
    print(i);

i=0
c=0;
num=int(input("element to remove from array"));
for i in range(0,len(n),1):
    if(n[i]==num):
        c=1;
    if(c==1):
        n[i]=n[i+1];
lenth=len(n)-1;
n.remove(n[lenth-1])
for i in range(0,lenth,1):
    print(n[i]);
