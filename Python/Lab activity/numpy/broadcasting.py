import numpy as np

'''
the smaller array of the two arrays compares itself to the bigger one and copies down the elements of the same row/column and increases its size to match the size of the bigger array
therefore, here below, 
'''

a=np.arange(6).reshape(2,3)
b=np.arange(6,12).reshape(2,3)

print(a)
print()

b=np.arange(3).reshape(1,3)

print(b)
print()

print(a+b)
print()

'''
while the smaller array can increase its size but
    ...to be continued
'''

a=np.arange(3).reshape(3,1)
b=np.arange(12).reshape(4,3)
print(a)
print()
print(b)
print()
print(a+b)