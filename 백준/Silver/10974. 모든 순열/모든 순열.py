from itertools import permutations as pm

N = int(input())
arr = [i for i in range(1, N+1)]

for t in pm(arr, N):
    print(' '.join(map(str, t)))

