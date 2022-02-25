import random

list = []

num = random.randint(10, 15)

for i in range(num):
    list.append(random.randint(100, 1000000))

sortedlist = list.sort()

print(list[num - 1])
