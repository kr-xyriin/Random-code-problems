from tkinter import *
win=Tk()

win.title("Learning labels in Tkinter")
#win.geometry("700x400")
mainlogo=PhotoImage(file=r"C:\Programming\Random-code-problems\Python\Tkinter\image.png")
win.iconphoto(True, mainlogo)
win.config(background="#000000")

labelphoto=PhotoImage(file=r"C:\Programming\Random-code-problems\Python\Tkinter\text.png")

label=Label(
    win,
    text="Yo!!, what's happnin'",
    font=("Cascadia Code",35,"italic"),
    fg="green",
    bg="black",
    relief="raised",
    bd=10,
    padx=5,
    pady=3,
    image=labelphoto,
    compound="bottom"
)
label.pack()

win.mainloop()