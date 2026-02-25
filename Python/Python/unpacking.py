'''
This program is all about unpacking in python

the datatype must be an iterable
'''

'''Type 1
Sequence unpacking'''
# the number of variables must match the number of elements
a, b, c=[1,2,3]
print(a,b,c)

a, b, c=(2,3,4)
print(a,b,c)

# a,b,c,d=[1,2,3]
# print(a,b,c,d)

# list sequential unpacking
a,b,c='123'
print(a,b,c)

# sets sequential unpacking
set1={'red','green','blue'}
a,b,c=set1
print(a,b,c) # in case of sets, order of element does not matter

'''Type 2:
Extended unpacking
using asterisk (*)'''
first, second, third=1,2,3
print(first, second, third)

# extended unpacking (when iterable has more elements than the variables)
first, second, *rest=1,2,3,4,5
print(first, second, rest) # the starred variable always recieves a list

# extended unpacking (when iterable has less elements than the variables)
first, second, *third=1, 2
print(first, second, third); '''in this case,
the starred variable does not returns a value error and fucntions as is and recieves a list with 0 elements

if the above program is run with having the starred variable at the beginning or the starting index then the remaining variables will return a ValueError

for example:
first, *second, third=1,2
print(first, second, third) will return a ValueError for the 'third' variable because the * operator will unpack all the elements and collect them into a list and return the list to its assigning variable
'''

# extended unpacking (NESTED)
first, (nest1, *rest), last_second, *last=[1, (1,2,3,4), 'last second', 'rest1', 'rest2']
print(first, nest1, rest, last_second, last)
'''
the indexing of the nested elements and iterables inside that nested element should be same as the variables
'''

# extended unpacking (using ** operator for dictionary)
d1={'a':1, 'b':2, 'c':3}
d2={'b':3, 'd':4} # if the same key exists then the former key will be replaced bythe latter key
merged={**d1, **d2} # normal unpacking | pipe  operator (|) can also be used to achieve the same
print(merged)

## extended unpacking within fucntion cells
def dict(a,b,c):
    print(a,b,c)
info={'a':1, 'b':2, 'c':3}
'''
key names must be same as parameter names and no. of keys must also be equal to no. of parameters'''
dict(**info)


'''
NOTE:
Unpacking can be done with every iterable datatype along with custom objects as long as they are __iter__ OR __getitem__'''