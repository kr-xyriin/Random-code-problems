class Student:
    def __init__(self, fullname):
        self.name=fullname
        print("Adding new student in database")

s1=Student("Karan Kumar")
print(s1.name)
print()
s2=Student("Arjun")
print(s2.name)
print()
# class Car:
#     color='Blue'
#     brand='Mercedes'

# car1=Car()
# print(car1.color)
# print(car1.brand)