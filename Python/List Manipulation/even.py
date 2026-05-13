a=[]
for i in range(10):
    temp=int(input())
    a.append(temp)
b=[even for even in a if even%2==0]
print(b)
