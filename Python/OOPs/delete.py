# Deleting an object and its properties in a class

class Student:
    def __init__(self, name):
        self.name=name

s1=Student("Shraddha")
print(s1.name)
del s1.name
print(s1.name)