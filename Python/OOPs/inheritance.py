'''
these items are copied / inherited by the child class from parent class
    Non-private attributes
    contructors
    attributes
    methods
'''

class user:                 # Parent class
    def __init__(self):
        self.name='Aaditya'
    
    def login(self):
        print('Login')

class Student(user):        # Child class
    def enroll(self):
        print("Enroll into the course")

# u=user()
# s=Student()
# print(s.name)
# s.login()

class Phone:
    def __init__(self, price, brand, camera):
        print("Inside phone constructor")
        self.__price=price
        self.brand=brand
        self.camera=camera
    def show(self):
        print(self.__price)
    
class Smartphone(Phone):
    def check(self):
        print(self._Phone__price)

s=Smartphone(20000, "Samsung", 24)
# print(f"Price: {s.price}\nBrand: {s.brand}\nCamera: {s.camera}")
s.check()
s.show()
