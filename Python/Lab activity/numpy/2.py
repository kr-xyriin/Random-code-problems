import numpy as np
import random as ran

a=np.arange(24).reshape(6,4)
# print(a)
# print()
# print(a[[0,2,3,5]])
# print()
# print(a[:,[0,2,3]])

a=np.random.randint(1,100,24).reshape(6,4)
print(a)
print()
print((a>50) & (a%4==0))
print()
for i in np.nditer(a):
    if i>50 and i%4==0:
        print(i)
print()
print(~(a%7==0))