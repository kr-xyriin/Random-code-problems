from tkinter import *

win=Tk()    # initialize a window

win.geometry("700x420")
win.title("First program on GUI using tkinter")
iconlogo=PhotoImage(file=r"C:\Programming\Random-code-problems\Python\Tkinter\image.png")
win.iconphoto(True, iconlogo)
win.config(background="#D2BE29")

win.mainloop()  # run the window