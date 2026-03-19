# Create a datatype for fraction

class Fraction:
    def __init__(self, n=0, d=1):
        self.nume = n
        self.deno = d

    def __str__(self):
        return "{}/{}".format(self.nume, self.deno)

    def __add__(self, other):
        new_num = self.nume * other.deno + other.nume * self.deno
        new_den = self.deno * other.deno
        return Fraction(new_num, new_den)

    def __sub__(self, other):
        new_num = self.nume * other.deno - other.nume * self.deno
        new_den = self.deno * other.deno
        return Fraction(new_num, new_den)

    def __mul__(self, other):
        new_num = self.nume * other.nume
        new_den = self.deno * other.deno
        return Fraction(new_num, new_den)

    def __truediv__(self, other):
        new_num = self.nume * other.deno
        new_den = self.deno * other.nume
        return Fraction(new_num, new_den)

    def __eq__(self, other):
        return self.nume * other.deno == self.deno * other.nume

    def to_float(self):
        return self.nume / self.deno

datatype = Fraction()