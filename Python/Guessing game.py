from random import randint

for x in range(1,6):
    guess=int(input())
    number=randint(1,5)

    if number==guess:
        print("You win")
    else:
        print("You lost. The number was: ",number)