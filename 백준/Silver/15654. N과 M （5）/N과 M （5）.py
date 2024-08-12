from itertools import permutations as pm

N, M = map(int, input().split())
arr = list(map(int, input().split()))

for t in pm(sorted(arr), M):
    print(' '.join(map(str, t)))