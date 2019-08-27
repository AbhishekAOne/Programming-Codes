def show(n):
    if(n<=5):
        show(n+1)
        print(n);

show(1);
print();
print();

def show1(m):
    if(m<=5):
        print(m);
        show(m+1);

show1(1);
print();

