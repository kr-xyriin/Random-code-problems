class Student:
    college_name="UPES"
    name="anonymous"
    def __init__(self, name, marks):
        self.name=name
        self.marks=marks
        print()
        print("Adding new student to database")

s1=Student("Karan", 89)
print(s1.name, s1.marks)

s2=Student("Arjun", 32)
print(s2.name, s2.marks)

print(s2.college_name)

'''
Here, [college name] is the default attribute o/r it is the class attribute
and, [self.name | self.marks] is the object attribute where self refers/points to the current object
'''
print(Student.college_name)
print(Student.name)
print(s2.name)