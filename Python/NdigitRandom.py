import random


def randomNdigitNumber(num: int):
    if num == 0:
        return 0
    else
        return random.randint(10**(num - 1) 10**(num-1))
    


if __name__ == "__main__":
    num = random.randint(1, 100)
    print(num)
    print(randomNdigitNumber(num))
