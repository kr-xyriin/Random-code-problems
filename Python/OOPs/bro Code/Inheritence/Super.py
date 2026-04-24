class Shape:
    def __init__(self, color, is_filled):
        self.color=color
        self.is_filled=is_filled

    def describe(self):
        print(f"It is {self.color} and {'filled' if self.is_filled else 'not filled'}")

class Circle(Shape):
    def __init__(self, color, is_filled, radius):
        super().__init__(color, is_filled)
        self.radius=radius
    
    def describe(self):
        print(f"Area is {3.14*self.radius**2}")     # method overwriting
        super().describe()

class Square(Shape):
    def __init__(self, color, is_filled, width):
        super().__init__(color, is_filled)
        self.width=width

class Triangle(Shape):
    def __init__(self, color, is_filled, width, height):
        super().__init__(color, is_filled)
        self.width=width
        self.height=height

circle=Circle(color="red", is_filled=True, radius=5)
print(circle.color)
print(circle.is_filled)
print(f"{circle.radius} cm")
circle.describe()
print()

square=Square(color="blue", is_filled=False, width=6)
print(square.color)
print(square.is_filled)
print(f"{square.width} cm")
square.describe()
print()

triangle=Triangle(is_filled=True, color="Yellow", width=7, height=8)
print(triangle.color)
print(triangle.is_filled)
print(f"{triangle.width} cm")
print(f"{triangle.height} cm")
triangle.describe()
print()
