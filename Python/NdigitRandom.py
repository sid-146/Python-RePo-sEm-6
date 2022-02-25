import random


def randomNdigitNumber(num: int):
    return random.randint(num, num)


if __name__ == "__main__":
    num = random.randint(1, 100)
    print(num)
    print(randomNdigitNumber(num))
