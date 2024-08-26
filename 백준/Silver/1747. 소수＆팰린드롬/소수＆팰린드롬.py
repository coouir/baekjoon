import math

N = int(input())

while True:
    check = True
    if N != 1:
        for i in range(2, int(math.sqrt(N))+1):
            if N%i == 0:
                check = False
                break
        if check:
            if str(N) == str(N)[::-1]:
                print(N)
                break
    N += 1