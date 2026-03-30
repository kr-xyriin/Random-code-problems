# Create student class that takes name & marks of 3 subjects aas arguements in contructor.
# Then create a method to print

class Student:
    def __init__(self, name, marks): # marks is a list
        self.name=name
        self.marks=marks

    def avg(self):
        average=0
        for marks in self.marks:
            average+=marks
        print(f"Hi {s1.name}, your average marks are: {average}")
s1=Student("Tony Stark", [97, 43, 100])
s1.name="Ironman"
s1.avg()