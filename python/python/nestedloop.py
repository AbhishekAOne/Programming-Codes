for i in range(0,6,1):
    for j in range(5,i,-1):
        print(j,end='')
    print("\r")

print("\r");
#--------------------------------------------
for i in range(5,0,-1):
    for j in range(1,i+1,1):
        print(j,end='');
    print("\r");
print("\r")
#--------------------------------------------------------------
for i in range(6,0,-1):
    for j in range(i,6,1):
        print(j,end='');
    print("\r");

print("\r")
#-----------------------------------------------------------------
for i in range(1,6,1):
    for i in range(1,i+1,1):
        print("1",end='');
    print("");
print("");
#----------------------------------------------------
for i in range(1,6,1):
    for j in range(1,i+1,1):
        print(i,end="");
    print();

print();
#-----------------------------------------------------------------
k=1
for i in range(1,6,1):
    for j in range(1,i+1,1):
        print(k,end='');
        k+=1;
    print();
print();
#----------------------------------------------------------
k=1
for i in range(1,6,1):
    for j in range(1,i+1,1):
        print(k,end='');
        if(k==1):
            k=0;
        else:
            k=1;
    print();
print();

#----------------------------------------------------------------
k=1
for i in range(1,4,1):
    print("(",end='');
    for j in range(1,4,1):
        print(k,",",end='');
        k+=1
    print(")");
print();

#---------------------------------------------------
for i in range(1,6,1):
    for j in range(1,i+1,1):
        print(j, end='');
    for j in range(1,i+2,1):
        print("-",end='');
    for j in range(1,i+1,1):
        print(j, end='');
    print();
print();

#------------------------------------------------------

