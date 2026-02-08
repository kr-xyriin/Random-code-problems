import random
a=random.randint(0,50)
attempts=0
print("Guess the number between 0-50")
while True:
    ans=int(input("Enter your guess: "))
    attempts+=1
    if ans>a:
        print("Your guess is greater than the number\n")
    elif ans<a:
        print("Your guess is lower than the number: ")
    else:
        print("You successfully guessed the number !!")
        print(f"Attempts taken: {attempts}")
        break