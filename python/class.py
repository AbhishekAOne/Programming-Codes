class Students:
    def __init__(self, name, contact):
        self.name = name
        self.contact = contact

    def getdata(self):
        self.name = input("Enter your name : ")
        self.contact = input("Enter your contact info : ")

    def putdata(self):
        print("Your name is : "+self.name,"\nYour contact info is : "+self.contact)

S1 = Students("Hll",0)
S1.getdata()
S1.putdata()
