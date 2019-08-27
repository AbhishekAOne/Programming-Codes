from tkinter import *

root = Tk()

newframe = Frame(root)
label1 = Label(newframe, text="Weather")
label2 = Label(root, text="Location")

entry1 = Entry(root)


label2.grid(row=1, column=0)
entry1.grid(row=1, column=1)

root.mainloop()
