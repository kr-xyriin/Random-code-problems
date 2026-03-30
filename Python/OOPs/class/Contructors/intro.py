class Student:
    def __init__(self, name, marks):
        self.name=name
        self.marks=marks
        print("Adding new student to database")
s1=Student("Karan Kumar", 97)
print(s1.name, s1.marks)
print()
s2=Student("Arjun",42)
print(s2.name, s2.marks)