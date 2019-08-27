#INheritance:
 #when one class aquare class aquire property of another class withdraw redining known as inheritance

      class student:
          def set(self,n,r):
              self.name=n;
              self.rollno=r;
          def show(self):
              print(self.name);
              print(self.rollno);
      class result(student):
          def setr(self,m):
              self.marks=m;
          def show(self):
              print(self.marks);
      r1=result();
      r1.set("ajjay",100);
      r1.setr(120);
      r1.show();
