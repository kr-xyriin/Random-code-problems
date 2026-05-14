from tkinter import *

def submit():
    username=entry.get()
    print(username)

win=Tk()

win.title("User input using GUI")
winlogo=PhotoImage(file=r"C:\Programming\Random-code-problems\Python\Tkinter\logo.png")
win.config(bg="black")

title_label=Label(win)
title_label.config(
    text="""-----------------------
GUI user input
-----------------------
""",
    font=("Comic Sans MS",28,"bold"),
    fg="#80DEEA",
    bg="black"
)

title_label.pack()

entry=Entry()
entry.config(
    font=("Consolas",18),
    fg="#FFCA28",
    bg="#6A1B9A",
    # show="*",
    width=20
)
entry.pack()

submit=Button(
    win,
    text="submit",
    font=("Lucida Console",15),
    fg="black",
    bg="#4DD0E1",
    command=submit
)

submit.pack()

win.mainloop()