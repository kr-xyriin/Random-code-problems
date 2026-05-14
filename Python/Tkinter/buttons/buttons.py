from tkinter import *

def click():
    print("Yoyiii")

win=Tk()

win.title("Buttons in Tkinter")
# win.geometry("500x670")
win.config(bg="#000000")
logo=PhotoImage(file=r"C:\Programming\Random-code-problems\Python\Tkinter\logo.png")
win.iconphoto(True,logo)


labelimg=PhotoImage(file=r"C:\Programming\Random-code-problems\Python\Tkinter\labels.png")
label=Label(
    text="Buttons in python",
    font=("Comic Sans MS",28,"bold"),
    fg="yellow",
    bg="#101010",
    relief="raised",
    bd=5,
    # image=labelimg,
    # compound="bottom"
)
label.pack()

button=Button(win, text="klik me!!")
button.config(command=click)
button.config(font=("Consolas", 39, "italic"))
button.config(bg="#D7812A")
button.config(fg="black")
button.config(activebackground="red")
button.config(activeforeground="black")
buttonimg=PhotoImage(file=r"C:\Programming\Random-code-problems\Python\Tkinter\buttons\button.png")
button.config(image=buttonimg)
button.config(compound="bottom")
button.pack()

win.mainloop()