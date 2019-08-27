class employee:
    def setemp(self,em,n,sal):
        self.empno=em;
        self.name=n;
        self.salary=sal;
    def show(self):
        print(self.empno);
        print(self.name);
        print(self.salary);
e1=employee();
e1.setemp(100,"ajay",20000);
e2=employee();
e2.setemp(101,"vijay",5000);
if(e1.salary>=)