a=[1,2,3,4,5,6,7,8,9,10]
even=[]
odd=[]
for checker in a:
    if str(checker).isalpha():
        continue
    else:
        if checker%2==0:
            even.append(checker)
        else:
            odd.append(checker)
print(f"{even}\n{odd}")