import math
from itertools import combinations as cb

t = int(input())
for i in range(t):
    s = 0
    arr = list(map(int, input().split()))
    for t in cb(arr[1:], 2):
        s += math.gcd(*t)
    print(s)