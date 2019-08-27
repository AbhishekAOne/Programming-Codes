#Oops (Object Oriented Programing system)
#it is process through which can modlerize the compicated progra and allocate them partition memory for each data member and member funcytion ,we
#can make new program by using these models

#class:-it is collection of data members and member function

#syntex

class student:
    def set(self,name,rollno):
        self.name=name;
        self.rollno=rollno;
    def show(self):
        print(self.name+"   "+self.rollno);
abc=student();
abc.set("ajay","100");
abc.show();