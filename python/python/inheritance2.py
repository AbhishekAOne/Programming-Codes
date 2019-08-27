class course:
    def set(self,cn,cd,f):
        self.cname=cn;
        self.code=cd;
        self.fee=f;
    def show(self):
        print(self.cname);
        print(self.code);
        print(self.fee);
class student(course):
    def set1(self,r):
        self.rollno=r;
    def show(self):
        print(self.rollno);
        super().show();
class institute(student):
    def set2(self,iname):
        self.iname=iname;
        se
