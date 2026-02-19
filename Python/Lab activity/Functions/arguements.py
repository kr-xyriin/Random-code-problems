#types of arguements in functions in python

# positional arguements
def power(a,b):
    return a**b
print(power(1,2))

#default arguement
def power(a=1, b=1):
    return a**b
print(power()) # if no arguements are entered then it takes the DEFAULT values that were provided during fucntion defining
print(power(2,4)) # if arguemets are provided during function call then it proceeds with positional arguemnts ignoring the default arguements

