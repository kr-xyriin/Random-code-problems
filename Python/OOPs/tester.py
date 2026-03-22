class Solution():
    def __init__(self):
        self.number=0
        self.printNumber()
    def printNumber(self):
        self.number=int(input())
        if self.number>=-1000 and self.number<=1000:
            print(self.number)
        else:
            self.printNumber()
printer=Solution()