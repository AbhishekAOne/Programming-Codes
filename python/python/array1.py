#Arrat
from array import array;
n=[-1,-2,344,55,-33,44,55];
print(len(n));
i=0;
n.append(200);
for i in n:
    print(i);
n.remove(44);
for i in n:
    print(i);
i=0;
for i in range(i,4,1):
    print(n[i]);
max=n[0];
min=n[0];
i=0;
l=len(n);
for i in range(0,l,1):
    if(n[i]<min):
        min=n[i];
    if(n[i]>max):
        max=n[i];

print("max=",max);
print("min=",min);


