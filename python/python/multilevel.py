class Course:
    def __init__(self,id,name,fee):
        self.identity+id
        self.name=name
        self.fee=fee
    def __str__(self):
        return self.identity+","+self.name+","+self.fee
class Student(Course):
    def _init_(self,id,name,fee,rollno):
        super()._init_(id,name,fee)
        self.rollnumber=rollno
    def _str__(self):
        return super()._str_()+","+self.rollnmber

class Instute(Student):
    def _init_(self,id,name,fee,rollno,inst_name,inst_income):
        super()._init_(id,name,fee,rollno)
        self.institutename=inst_name

