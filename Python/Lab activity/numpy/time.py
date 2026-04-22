import numpy as np
import time
a=[i for i in range(100000000)]
b=[i for i in range(100000000, 200000000)]
c=[]
start=time.time()
for i in range(len(a)):
    c.append(a[i]+b[i])
print(time.time()-start)

x=np.arange(100000000)
y=np.arange(100000000, 200000000)

