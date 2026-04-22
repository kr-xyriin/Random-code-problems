import numpy as np
a1=np.arange(12).reshape(3,4)
# print(a1)
# print()
# for i in a1:
#     print(i)
a3=np.arange(27).reshape(3,3,3)
print(a3)
print()
for i in a3:
    print(i)
    print()
for i in np.nditer(a3):
    print(i)