# def is used to intitialize a function

def is_even(num):
    if num%2==0:
        print(f"{num} is even")
    else:
        print(f"{num} is odd")

for i in range(1, 10+1):
    is_even(i)