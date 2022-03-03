number = int(input("enter number: "))
divisor = int(input("enter divisior"))

for i in range(1, number):
    if i % divisor == 0:
        print(i, "Is Even :", number % 2 == 0)

    else:
        pass
