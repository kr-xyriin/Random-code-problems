x=1
def f():
    x=2
    def g():
        global x
        x=3
    g()
    return x
print(f(), x)