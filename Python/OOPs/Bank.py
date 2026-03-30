# Create account class with 2 attribues - balance & account no.
# Create methods for debit, credit, & printing the balance

class Account:
    def __init__(self, bal, accountNo):
        self.balance=bal
        self.accNo=accountNo
        # self.debit()
        # self.credit()
        # self.active_bal()

    def debit(self, amount):
        # amount=float(input("Enter the amount you wanna debit: "))
        self.balance-=amount
        print(f"Amount debited successfully...\nRemaining balance: {self.balance}")
    def credit(self, amount):
        # amount=float(input("Enter the amount you wanna credit: "))
        self.balance+=amount
        print(f"Amount credited successfully...\nCurrent balance: {self.balance}")
    def active_bal(self):
        print(f"Current balance: {self.balance}")

acc1=Account(10000, 12345)
print(f"Account no.: {acc1.accNo}\n\tAvailable balance: {acc1.balance}")
acc1.debit(1000)
acc1.credit(500)
acc1.credit(90000)