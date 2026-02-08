'''def leap():
    if year%4==0 and year%100!=0:
        return True
    elif year%400==0:
        return True
    else:
        return False

year=int(input("Enter year: "))
if leap():
    print("The year is a leap year")
else:
    print("The year is not a leap year")
'''
cond=True
while cond:
    choice=int(input(": "))
    if choice==7:
        cond=False
    else:
        print("Try again!!")