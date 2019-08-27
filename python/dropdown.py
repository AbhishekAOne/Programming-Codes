from tkinter import *


def funtion1():
    print("Menu Clicked")


root = Tk()

mymenu = Menu(root)
root.config(menu=mymenu)

submenu = Menu(mymenu)

mymenu.add_cascade(label="File", menu=submenu)

submenu.add_command(label="Project", oommand=funtion1)
submenu.add_command(label="Save", command=funtion1)

root.mainloop()
