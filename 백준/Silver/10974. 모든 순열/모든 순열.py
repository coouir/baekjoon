from itertools import permutations as pm

N = int(input())

l = []
for _ in range(1, N+1):
    l.append(_)

for t in pm(l, N):
    print(' '.join(map(str, t)))

