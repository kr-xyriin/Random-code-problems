class Point:
    def __init__(self, x, y):
        self.x_cod = x
        self.y_cod = y

    def __str__(self):
        return "<{}, {}>".format(self.x_cod, self.y_cod)

    def distance_btwn_points(self, other):
        return ((self.x_cod - other.x_cod)**2 + (self.y_cod - other.y_cod)**2)**0.5

    def distance_from_origin(self):
        return (self.x_cod**2 + self.y_cod**2)**0.5


class Line:
    def __init__(self, A, B, C):
        self.A = A
        self.B = B
        self.C = C

    def __str__(self):
        return "{}x + {}y + {} = 0".format(self.A, self.B, self.C)

    def point_on_line(self, point):
        if (self.A * point.x_cod + self.B * point.y_cod + self.C) == 0:
            return "Point lies on the line"
        else:
            return "Point does NOT lie on the line"

    def distance_from_point(self, point):
        return abs(self.A * point.x_cod + self.B * point.y_cod + self.C) / ((self.A**2 + self.B**2)**0.5)

'''
To check if a point lies on a line:
    substitue the values of coordinates

Distance of a point from a line:
    (|Ax + By + C|/(A**2 + B**2)**0.5
'''

p1 = Point(3, 4)
p2 = Point(5, 5)

print(p1.distance_btwn_points(p2))
print(p1.distance_from_origin())

l1 = Line(1, 1000, -2)
p3 = Point(4, 2)

print(l1.point_on_line(p3))
print(l1.distance_from_point(p3))