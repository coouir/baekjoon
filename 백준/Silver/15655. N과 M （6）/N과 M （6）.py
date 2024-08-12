from itertools import combinations as cb

N, M = map(int, input().split())
arr = list(map(int, input().split()))

for t in cb(sorted(arr), M):
    print(' '.join(map(str, t)))