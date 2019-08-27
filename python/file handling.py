txtfile = open("demo.txt",'r')
content = txtfile.read()
txtfile.close()

txtfile = open("demo.txt",'a')
txtfile.write("Hello")
print(content)
txtfile.close()