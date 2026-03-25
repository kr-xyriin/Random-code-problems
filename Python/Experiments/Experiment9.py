'''
Experiment 9: Classes and objects

1.Create a class of student (name, sap id, marks[phy,chem,maths] ). Create 3 objects by taking inputs from the user and display details of all students.

2. Add constructor in the above class to initialize student details of n students and implement following methods:
    a)	Display() student details
    b)	Find Marks_percentage() of each student
    c)	Display result() [Note: if marks in each subject >40% than Pass else Fail]
    d)	Write a Function to find average of the class
'''

'''
Experiment 9: Classes and objects

1.Create a class of student (name, sap id, marks[phy,chem,maths] ). Create 3 objects by taking inputs from the user and display details of all students.

2. Add constructor in the above class to initialize student details of n students and implement following methods:
    a)	Display() student details
    b)	Find Marks_percentage() of each student
    c)	Display result() [Note: if marks in each subject >40% than Pass else Fail]
    d)	Write a Function to find average of the class
'''

# 1 -

class Student:
    def take_input(self):
        self.name = input("Enter Name: ")
        self.sap_id = input("Enter SAP ID: ")
        self.marks = [
            float(input("Enter Physics marks: ")),
            float(input("Enter Chemistry marks: ")),
            float(input("Enter Maths marks: "))
        ]

    def display(self):
        print(f"Name: {self.name} | SAP ID: {self.sap_id}")
        print(f"Marks -> Physics: {self.marks[0]}, Chemistry: {self.marks[1]}, Maths: {self.marks[2]}\n")

students = []

print("--- Enter details for 3 students ---")
for i in range(3):
    print(f"\nStudent {i+1}:")
    s = Student()
    s.take_input()
    students.append(s)

print("\n--- Student Details ---")
for s in students:
    s.display()

# 2
class Student:
    def __init__(self, name, sap_id, phy, chem, math):
        self.name = name
        self.sap_id = sap_id
        self.marks = [phy, chem, math]

    def display(self):
        print(f"Name: {self.name} | SAP ID: {self.sap_id}")
        print(f"Marks -> Physics: {self.marks[0]}, Chemistry: {self.marks[1]}, Maths: {self.marks[2]}")

    def marks_percentage(self):
        total = sum(self.marks)
        return (total / 300.0) * 100.0

    def display_result(self):
        if self.marks[0] > 40 and self.marks[1] > 40 and self.marks[2] > 40:
            print("Result: PASS")
        else:
            print("Result: FAIL")

def calculate_class_average(student_list):
    if not student_list:
        return 0.0
    
    total_class_marks = 0
    for student in student_list:
        total_class_marks += sum(student.marks)
    
    return (total_class_marks / (len(student_list) * 300.0)) * 100.0

def main():
    n = int(input("Enter the number of students (n): "))
    students = []

    for i in range(n):
        print(f"\n--- Enter details for Student {i + 1} ---")
        name = input("Name: ")
        sap_id = input("SAP ID: ")
        p = float(input("Physics Marks: "))
        c = float(input("Chemistry Marks: "))
        m = float(input("Maths Marks: "))
        
        students.append(Student(name, sap_id, p, c, m))

    print("\n================ FINAL REPORT ================")
    for student in students:
        print("\n--------------------------------------------")
        student.display()
        print(f"Percentage: {student.marks_percentage():.2f}%")
        student.display_result()

    class_avg = calculate_class_average(students)
    print("\n============================================")
    print(f"Overall Class Average: {class_avg:.2f}%")
    print("============================================")

if __name__ == "__main__":
    main()