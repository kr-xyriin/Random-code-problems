from tkinter import *

food=['Pizza','HotDog','Hamburger']

def order():
    if x.get()==0:
        print("You ordered a pizza")
    elif x.get()==1:
        print("You ordered a hotdog")
    elif x.get()==2:
        print("You ordered a hamburger")
    else:
        print("eh???")

win=Tk()

x=IntVar()

win.title("Radio Button")
win.config(bg="#182126")
win.geometry("400x700")

header=Label(text="""--------------------
Radiobuttons
--------------------
""",
    font=("Lucida Console",25),
    bg="#182126",
    fg="#00FF00",
)
header.pack()

for index in range(len(food)):
    radiobutton=Radiobutton(
        text=food[index],
        font=("Cascadia Code",20),
        variable=x,
        value=index,
        padx=10,
        bg="#182126",
        fg="yellow",
        activebackground="#3B9DA6",
        activeforeground="#E0F7FA",
        command=order
    )
    radiobutton.pack(anchor=W)

win.mainloop()