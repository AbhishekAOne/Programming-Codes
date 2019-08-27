a = int(input("Enter a value:"))
b = int(input("Enter a value:"))

def divide(a,b):
    try:
        print(a/b)
    except ZeroDivisionError:
        print("denominator is zero")

divide(a,b)