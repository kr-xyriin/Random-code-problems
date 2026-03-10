person={'name':'Allison', 'age': 52}
empty1=dict()
empty2={}
print(person['name'])
person['city']='jaipur'
print(person)
for name in person:
    print(f"{name}: {person[name]}")

print(person.get())