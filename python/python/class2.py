



class bank:
    def set(self,ac,n,bal):
        self.accno=ac;
        self.name=n;
        self.balance=bal;
    def deposit(self,n):
        self.balance=self.balance+n;
    def withdraw(self,n):
        self.balance=self.balance-n;
    def show(self):
        print(self.accno);
        print(self.name);
        print(self.balance);
b1=bank();
b1.set(100,"abc",4000);
b1.show();
b1.deposit(1200);
b1.show();
b1.withdraw(13000)