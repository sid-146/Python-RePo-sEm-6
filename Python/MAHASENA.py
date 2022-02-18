l = int(input())
evenChk, oddChk = 0, 0

for i in range(0, l):
    number = int(input())

    if number % 2 == 0:
        evenChk += 1
    else:
        oddChk += 1
    
if evenChk > oddChk:
    print("READY FOR BATTLE ")
else:
    print("NOT READY")