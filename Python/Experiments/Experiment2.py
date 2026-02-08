def divisible():
    num=float(input("Enter a number to check its divisiblity by 3 and 5: "))
    if num%3==0 and num%5==0:
        print("Given number is divisible by 3 and 5")
    else:
        if num%3!=0:
            print("The number is not divisible by 3")
        else:
            print("The number is not divisible by 5")

def great():
    num1=float(input("Enter first number: "))
    num2=float(input("Enter second number: "))
    if num1>num2:
        print(f"{num1} is greater")
    elif num1<num2:
        print(f"{num2} is greater")
    else:
        print("Given numbers are equal")

def roots():
    print("Enter the values of a, b and c such that equation if of the form: [aX^2 + bY + c]")
    a=float(input("Enter a: "))
    b=float(input("Enter b: "))
    c=float(input("Enter c: "))
    d=b**2-4*a*c
    if d>=0:
        if d>0:
            print("Given equation has distinct real roots")
            r1=(-b+d**1/2)/2*a
            r2=(-b-d**1/2)/2*a
            print(f"Roots of the equation are: {r1} and {r2}")
        if d==0:
            print("Given equation has equal and real roots")
            r1=r2=-b/2*a
            print(f"Roots of the equation are: {r1} and {r2}")
    else:
        print("Given equation has imaginary roots")
        import cmath
        r1=(-b+cmath.sqrt(d))/2*a
        r2=(-b-cmath.sqrt(d))/2*a
        print(f"Roots of the equation are: {r1} and {r2}")

def leap(year):
    if year%4==0 and year%100!=0:
        return True
    elif year%400==0:
        return True
    else:
        return False

def next_date():
    day=int(input("Enter day: "))
    month=int(input("Enter month: "))
    year=int(input("Enter year: "))
    days_in_month = [31, 29 if leap(year) else 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    day += 1
    if day > days_in_month[month - 1]:
        day = 1
        month += 1
        if month > 12:
            month = 1
            year += 1
    print(f"New date [dd-mm-yyyy]: {day}-{month}-{year}")

def CGPA():
    subjects=[]
    max_sub=[]
    for marker in range(5):
        marks=float(input(f"Enter marks of subject {marker+1}: "))
        subjects.append(marks)
    marker=0
    for marker in range(5):
        max=float(input(f"Enter maximum for subject {marker+1}: "))
        max_sub.append(max)
    obtained=0
    max=0
    for counter in subjects:
        obtained+=counter
    for counter in max_sub:
        max+=counter
    percentage=(obtained/max)*100
    cgpa=percentage/10
    if cgpa >= 0 and cgpa <= 3.4:
        grade='F'
    elif cgpa >= 3.5 and cgpa <= 5.0:
        grade='C+'
    elif cgpa >= 5.1 and cgpa <= 6.0:
        grade='B'
    elif cgpa >= 6.1 and cgpa <= 7.0:
        grade='B+'
    elif cgpa >= 7.1 and cgpa <= 8.0:
        grade='A'
    elif cgpa >= 8.1 and cgpa <= 9.0:
        grade='A+'
    else:
        grade='O'
    print(f"Percentage: {percentage}\nCGPA: {cgpa}\nGrade: {grade}")

condition=True
while condition:
    print('''
|************************************|
|                                    |
|:::::::    Experiment - 2    :::::::|
|                                    |
|************************************|

1. Check whether the given number is divisible by 3 and 5 both.
2. Find the greatest among the two numbers.
3. Check whether the quadratic equation has real roots or imaginary roots. Display the roots.
4. Find whether a given year is a leap year or not.
5. Write a program which takes any date as input and display next date of the calendar
6. Print the grade sheet of a student for the given range of cgpa. Scan marks of five subjects and calculate the percentage.
7. Exit
''')
    choice=int(input("Enter your choice [1/2/3/4/5/6/7]: "))
    print()
    if choice==1:
        divisible()
        print("-----------------------------------------------------------------")
    elif choice==2:
        great()
        print("-----------------------------------------------------------------")
    elif choice==3:
        roots()
        print("-----------------------------------------------------------------")
    elif choice==4:
        num=int(input("Enter year: "))
        leap(num)
        if leap(num):
            print("Given year is a leap year")
        else:
            print("Given year is not a leap year")
        print("------------------------------------------------------------------")
    elif choice==5:
        next_date()
        print("------------------------------------------------------------------")
    elif choice==6:
        CGPA()
        print("------------------------------------------------------------------")
    elif choice==7:
        print('''\n
Exiting the program...         
Good Bye :)
''')
        condition=False
    else:
        print("Wrong choice entered, PLease try again!!")