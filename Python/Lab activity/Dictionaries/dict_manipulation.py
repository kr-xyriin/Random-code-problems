d=[(1,2),(3,4),(5,6)]
print(dict(d))

d=dict([('name','aaditya'),('python programming',98),('age',26)])
print(d)

# accessing dict
print(d['name'])

# deleting a key-value pair using .pop()
'''
d.pop()
'''
# for dictionary, .pop() expects ONE arguement
'''
d.pop('name')
print(d)
'''

# duplicate keys:
d1={'name':'aaditya', 'name':'asc'}
# it prints/returns the last duplicate of the key...
print(d1['name'])

# deleteing key-value pair using .remove()
d1.remove('name')
print(d1)