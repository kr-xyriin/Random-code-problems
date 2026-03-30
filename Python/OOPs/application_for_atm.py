'''
__init__  -> contructor: It forces the variables to declare and initialize by default before the object

    -> whenever creating a new function or a method, it needs to be declared inside __init__ with prefix 'self.'

    -> whenever using a variable or a method/function from a contructor, it should always be used with the prefix 'self.'

    -> whenever defining a function, it should always contain the attribute 'self'

'''

class atm():
    def __init__(self):
        self.pin=0 
        self.balance=0
        self.menu()
    def menu(self): # method / function
        user_input=input('''
        Hello, how would you like to proceed?
              1. Enter 1 to create pin
              2. Enter 2 to deposit
              3. Enter 3 to withdraw
              4. Enter 4 to check balance
              5. Enter 5 to exit
''')
        if user_input=="1":
            self.create_pin() # prefix self used in function call
            self.menu()
        elif user_input=="2":
            self.deposit()
            self.menu()
        elif user_input=="3":
            self.withdraw()
            self.menu()
        elif user_input=="4":
            self.bank_balance()
            self.menu()
        else:
            print("Bye Bye")

    def create_pin(self):
        self.pin=input("Enter your pin [Minimum 4 digits]: ")
        if len(self.pin)<4:
            print("Pin i s too short!!")
            self.create_pin()
        else:
            print("Pin set successfully\n")

    def deposit(self):
        temp=input("Enter your pin: ")
        if temp==self.pin:
            amount=int(input("Enter the amount: "))
            self.balance = amount+self.balance
            print("Deposit successful\n")
        else:
            print("Invalid pin !!")
    
    def withdraw(self):
        temp=input("Enter your pin: ")
        if temp==self.pin:
            print(f"Balance: {self.balance}")
            amount=int(input("Enter amount: "))
            if amount<=self.balance:
                self.balance=self.balance-amount
                print("Withdraw successful")
            else:
                print("Insufficient balance")
        else:
            print("Invalid pin!!\n")
    
    def bank_balance(self):
        temp=input("Enter your pin: ")
        if temp==self.pin:
            print(f"Current balance: {self.balance}\n")
        else:
            print("Wrong pin entered !!")


# Creating an object
sbi=atm()