# a=[]
# for i in range(40+1):
#     a.append(i if i%4==0)
# print(a)

i=[]
[i for i in range(40+1) if i%4==0]
print(i)