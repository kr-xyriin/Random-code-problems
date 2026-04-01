'''
Aggregation in OOPs | HAS_A_RELATIONSHIP
'''

class Customer:
    def __init__(self, name, age, address):
        self.name=name
        self.age=age
        self.address=address
    
    def edit_profile(self, new_name, new_city, new_pin, new_state):
        self.name=new_name
        self.address.change_address(new_city, new_pin, new_state)
    
    def intro(self):
        print(f"I am {self.name} and I am {self.age} years old")

class Address:
    def __init__(self, city, pincode, state):
        self.city=city
        self.pincode=pincode
        self.state=state
    
    def change_address(self, new_city, new_pin, new_state):
        self.city=new_city
        self.pincode=new_pin
        self.state=new_state

add=Address("Chandrapur", 442401, "Maharashtra")
cust=Customer("Kshitij", 26, add)
print(cust.address.pincode)

# c1=Customer("Kshitij", 26)
# c2=Customer("Nitish", 27)
# c3=Customer("Anshuman", 28)

# L=[c1,c2,c3]
# for data in L:
#     data.intro()