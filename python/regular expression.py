import re

pattern = input("Enter string to match:").strip()

value = input("Enter the string :")

if re.match(pattern, value):
    print("Match found")
else:
    print("No match found")

if re.search(pattern, value):
    print("Match found")
    print(re.search(pattern, value))
else:
    print("No match found")

if re.findall(pattern, value):
    print("Match found")
    print(re.findall(pattern, value))
else:
    print("No match found")

print(re.sub(pattern,input("replace with?:"),value))
