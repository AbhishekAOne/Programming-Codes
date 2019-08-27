def fact(n):
    i=1
    fact=1;
    while(i<=n):
        fact=fact*i;
        i+=1;
    print("factorial of ",n," is ",fact);

fact(5)