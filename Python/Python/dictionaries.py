person={'name':'Allison', 'age': 52}
empty1=dict()
empty2={}
print(person['name'])
person['city']='jaipur'
print(person)
for name in person:
    print(f"{name}: {person[name]}")

print(person.keys())
print()
print(person.values())
print()
print(person.items())
print()
person.update({'name':'Argent'})
print()
print(person)
print()
person.pop('name')
print()
print(person)
print()
print(person.get('age'))
print()
for items in person.items():
    print(items)
print()