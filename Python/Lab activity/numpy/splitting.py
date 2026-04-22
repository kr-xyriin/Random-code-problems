import numpy as np

# Horizontal / hstack
a4=np.arange(12).reshape(3,4)
print(a4)
print()
a5=np.arange(12,24).reshape(3,4)
print(a5)
print()
bigArr=np.hstack((a4,a5))
print(np.hsplit(bigArr, 2))