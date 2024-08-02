from itertools import combinations as cb

N, S = map(int, input().split())
arr = list(map(int, input().split()))
cnt = 0

for i in range(1, N+1):
    for t in cb(arr, i):
        if sum(t) == S:
            cnt += 1

print(cnt)