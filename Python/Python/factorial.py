'''Default arguemet:
In this type of arguement the value may/ may not e provided during the fucntion call
if not provided then the function uses the DEFAULT value of the parameter'''
def fact(num=5):
    if num==0:
        return 1
    return num*fact(num-1)

print(f"Factorial: {fact(num=10)}")

'''
Positional arguement:
In this type of arguement the vale of the paramter is directly provided during the function call and the position of te parameter should match that of keyword
'''
def fact(num):
    if num==0:
        return 1
    return num*fact(num-1)

print(f"Factorial: {fact(num=10)}")

'''
Keyword arguement:
In this type of arguement the value of the arameter is given in the function call and name of the parameter should match the name of the keyword arguement
'''
def fact(num):
    if num==0:
        return 1
    return num*fact(num-1)

print(f"Factorial: {fact(num=10)}")