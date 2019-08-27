from tkinter import *


class Mybuttons():

    def __init__(self,rootone):
        frame = Frame(root)
        frame.pack()

        self.button1 = Button(frame, text="Click", command=self.newmessage)
        self.button1.pack()
        self.button2 = Button(frame, text="exit", command=frame.quit)
        self.button2.pack()

    def newmessage(self):
        print("Hello")


root = Tk()

buttons = Mybuttons(root)

root.mainloop()
