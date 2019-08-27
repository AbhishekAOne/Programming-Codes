height = int(input("Enter height(in meters:"))
weight = int(input("Enter weight(in kg):"))

def bmi(a,b):
    print("your bmi is :",(a/pow(height,2)))

bmi(weight,height)
