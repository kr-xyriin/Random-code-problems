from tkinter import *

def display():
    if (x.get())==1:
        print("I like Python")
    else:
        print("I don't like python")

win=Tk()

x=IntVar()
win.title("Checkboxes in tkinter")
win.config(bg="#182126")
win.geometry("560x400")

header=Label(text="""--------------------
Checkboxes
--------------------
""",
    font=("Lucida Console",25),
    bg="#182126",
    fg="#00FF00",
)
header.pack()

checker=Checkbutton(
    win,
    text="Python",
    font=("Comic Sans MS",18),
    variable=x,
    onvalue=1,
    offvalue=0,
    command=display
)
checker.pack()

win.mainloop()