import math
input = __import__('sys').stdin.readline

M, N = map(int, input().split())

for i in range(M, N+1):
    check = True
    if i == 1:
        continue
    for j in range(2, int(math.sqrt(i))+1):
        if i%j == 0:
            check = False
            break
    if check:
        print(i)