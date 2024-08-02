from itertools import permutations as pm

N, M = map(int, input().split())
arr = [i for i in range(1, N+1)]

for t in pm(arr, M):
    print(' '.join(map(str, t)))