class Student:
    def __init__(self, name, marks):
        self.name=name
        self.marks=marks
    
    def Welcome(self):
        print(f"Wecome student: {self.name}")
    def get_marks(self):
        return self.marks

'''
Methods are the functions that belong to objects
'''
s1=Student("Karan", 97)
s1.Welcome()
print(s1.get_marks())