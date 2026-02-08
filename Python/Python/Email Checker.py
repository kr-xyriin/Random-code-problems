email=input("Enter email: ")
passwd=input("Enter password: ")
email_="aschauhan8941@gmail.com"
pass_="le"
if email==email_ and passwd==pass_:
    print("Noice")
else:
    if email==email_ and passwd!=pass_:
        passwd=input("Password entered is wrong!!\nEnter password again: ")
    else:
        print('''Tumse na ho payega...
              (Email is incorrect)''')