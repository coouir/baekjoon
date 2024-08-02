from itertools import combinations as cb

N, M = map(int, input().split())
l = [i for i in range(1, N+1)]

for t in cb(l, M):
    print(' '.join(map(str, t)))