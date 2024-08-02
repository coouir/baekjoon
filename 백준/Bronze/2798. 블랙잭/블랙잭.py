from itertools import combinations as cb

N, M = map(int, input().split())
l = list(map(int, input().split()))

r = []
for a, b, c in cb(l, 3):
    if a+b+c <= M:
        r.append(a+b+c)

print(max(r))