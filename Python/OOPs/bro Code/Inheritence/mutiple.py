class Animal:
    def __init__(self, name):
        self.name=name

    def eat(self):
        print(f"{self.name} is eat")
    
    def sleep(self):
        print(f"{self.name} is sleeping")

class Prey(Animal):                        #   Multilevel inheritance
    def flee(self):
        print(f"{self.name} is fleeing")

class Predator(Animal):
    def hunt(self):
        print(f"{self.name} is hunting")

class Rabbit(Prey):
    pass

class Hawk(Predator):
    pass

class Fish(Prey, Predator):                #   Multiple inheritance
    pass

rabbit=Rabbit("Bugs")
hawk=Hawk("Tony")
fish=Fish("Meemaw")

rabbit.flee()
rabbit.eat()
rabbit.sleep()
print()

hawk.hunt()
hawk.eat()
hawk.sleep()
print()

fish.eat()
fish.sleep()
fish.hunt()
fish.flee()
print()

