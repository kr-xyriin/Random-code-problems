class Student:
    #   CLASS variable
    class_year=2025
    num_students=0

    def __init__(self, name, age):
        self.name=name
        self.age=age
        Student.num_students+=1

student1=Student("SpongeBob", 13)
student2=Student("Patrick", 35)
student3=Student("Swidward", 55)
student4=Student("Sandy", 27)

print(f"My graduating class of {Student.class_year} has {Student.num_students} students")
print(f"{student1.name}")
print(f"{student2.name}")
print(f"{student3.name}")
print(f"{student4.name}")