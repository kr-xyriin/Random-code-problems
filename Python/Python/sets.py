# inititalize set:
numbers=[1,2,3,4,6,7,10,1]
set1=set(numbers)
set2={4,2,1,5,8,9,11}

print(set1|set2)
print(set1.union(set2))
print()
print(set1&set2)
print(set1.intersection(set2))
print()
print(set1-set2)
print(set1.difference(set2))
print()
print(set2-set1)
print(set2.difference(set1))
print()

'''
Symmeteric Difference:
union - intersection
-> elements in a or b but not in a|b
'''
print(set1^set2)
print(set1.symmetric_difference(set2))
print()
print(set2)
set2.remove(4)
print()
print(set2)