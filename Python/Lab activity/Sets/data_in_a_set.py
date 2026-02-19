# Data in a set should be pf immutable data type while set itself is mutable
# Data in a set is unordered
# Data cannot be duplicate

s1={1,2,3,4}
print(s1)

# adding to a set
s1.add(8)
print(s1)

# addding more than one element
# any datatype can be given as an arguement
s1.update([6,7,8])
print(s1)
s1.update((8,9,10))
print(s1)

# deleting an element

s1.remove(1)
print(s1)

s1.pop()
# deletes a random element but takes no arguement
# returns the popped element
print(s1)

# deleting set
del s1
print(s1)