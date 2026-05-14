from tkinter import *

def Submit():
    username=entry.get()
    print(username)

def Delete():
    entry.delete(0,END)

def Backspace():
    entry.delete(len(entry.get())-1,END)

win=Tk()

win.title("Entry widget in tkinter")
win.config(bg="#455A64")

header=Label(
    text=("""-----------------------------
Submit | Delete | Backspace
-----------------------------"""),
    font=("Lucida Console",25,"bold"),
    fg="#00FF00",
    bg="#455A64"
)
header.pack()

entry=Entry()
entry.config(
    font=("Comic Sans MS",19),
    fg="white",
    bg="black"
)
entry.pack()

submit=Button(
    win,
    text="Submit",
    font=("Cascadia Code",14),
    bg="#00838F",
    fg="white",
    command=Submit
)
submit.pack()

delete=Button(
    win,
    text="Delete",
    font=("Cascadia Code",14),
    bg="#00838F",
    fg="white",
    command=Delete
)
delete.pack()

backspace=Button(
    win,
    text="Backspace",
    font=("Cascadia Code",14),
    bg="#00838F",
    fg="white",
    command=Backspace
)
backspace.pack()

win.mainloop()