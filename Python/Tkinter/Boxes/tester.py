import tkinter as tk
from tkinter import simpledialog
 
root = tk.Tk()
root.title('Dialog Demo')
 
def ask_name():
    name = simpledialog.askstring('Input', 'Enter your name:')
    if name:
        label.config(text=f'Hello, {name}!')
 
def ask_age():
    age = simpledialog.askinteger('Input', 'Enter your age:',
                                   minvalue=1, maxvalue=120)
    if age:
        label.config(text=f'Age: {age}')
 
def ask_score():
    score = simpledialog.askfloat('Input', 'Enter your score:',
                                   minvalue=0.0, maxvalue=100.0)
    if score:
        label.config(text=f'Score: {score:.2f}')
 
tk.Button(root, text='Ask Name',  command=ask_name).pack(pady=5)
tk.Button(root, text='Ask Age',   command=ask_age).pack(pady=5)
tk.Button(root, text='Ask Score', command=ask_score).pack(pady=5)
label = tk.Label(root, text='', font=('Arial', 13))
label.pack(pady=10)
root.mainloop()
