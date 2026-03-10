numbers=[1,2,3,4,5,6]
#        0,1,2,3,4,5
text=['one', 'two', 'three', 'four', 'five', 'six']
expty=[]
print(numbers[0])
print()
print(numbers[-1])
print()
print(numbers[::-1])
print()
print(numbers[1:3])
print()
print(numbers[4:1:-1])
print()
print(numbers[-1:1:-1])
print()

numbers.append(5)
print(numbers)

numbers.remove(1)
print(numbers)

numbers.extend(text)
print(numbers)

numbers.insert(0, 1)
'''
.insert(index, value)
'''
print(numbers)

numbers.pop(6)
print(numbers)

empty=numbers.copy()
print(empty)

empty.clear()
print(empty)

del empty
try:
    if empty:
        print(empty)
except:
    NameError