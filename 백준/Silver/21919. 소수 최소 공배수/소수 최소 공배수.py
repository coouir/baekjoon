import math

n = 1

N = int(input())
arr = list(map(int, input().split()))
for i in arr:
    check = True
    if i == 1:
        continue
    for j in range(2, int(math.sqrt(i))+1):
        if i%j == 0:
            check = False
            break
    if check:
        n = math.lcm(n, i)

if n != 1:
    print(n)
else:
    print(-1)