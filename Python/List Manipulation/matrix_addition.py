a=[
    [1,2,3],
    [4,5,6],
    [7,8,9]
]
b=[
    [1,2,3],
    [4,5,6],
    [7,8,9]
]


flag=False

if len(a)==len(b):
    for upper in range(len(a)):
        if len(a[upper])==len(b[upper]):
            flag=True
        else:
            flag=False
            break

if flag==True:
    c=[]
    for upper in range(len(a)):
        temp=[]
        for lower in range(len(a[upper])):
            temp.append(a[upper][lower]+b[upper][lower])
        c.append(temp)
    print(c)
else:
    print("Matrices don't have same number of rows and columns")