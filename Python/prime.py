n=int(input("Enter a number: "))
flag=True
temp=2
while temp<=n/2:
    if n%temp==0:
        flag=False
        break
    temp+=1
if flag==True:
    print("is Prime")
else:
    print("is not Prime")