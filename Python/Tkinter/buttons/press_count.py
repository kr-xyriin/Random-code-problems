from tkinter import *

count=0
def click():
    global count
    count+=1
    clicks.config(text=f"Clicks: {count}")
    if count>=10:
        count=0

win=Tk()

win.title("Click counter")
winlogo=PhotoImage(file=r"C:\Programming\Random-code-problems\Python\Tkinter\logo.png")
win.iconphoto(True,winlogo)
win.config(bg="#000000")

label=Label(win,
    text="""----------------------
Click counter
----------------------""",
    font=("Consolas",24,"bold","italic"),
    fg="#689F38",
    bg="black"
)
label.pack()

button=Button(win)
button.config(text="Klick me!!")
button.config(font=("Forte",18))
button.config(fg="#4527A0")
button.config(bg="#F57C00")
button.config(activeforeground="#F57C00")
button.config(activebackground="#4527A0")
buttonimg=PhotoImage(file=r"C:\Programming\Random-code-problems\Python\Tkinter\buttons\button.png")
button.config(image=buttonimg)
button.config(compound="bottom")
button.config(state=ACTIVE)
button.config(command=click)

clicks=Label(win)
clicks.config(text=f"Clicks: {count}")
clicks.config(font=("Monospace",16))
clicks.config(fg="#80DEEA")
clicks.config(bg="black")
clicks.pack()

button.pack()

win.mainloop()