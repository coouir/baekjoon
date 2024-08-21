M = 1000 - int(input())
arr = [500, 100, 50, 10, 5, 1]
cnt = 0

for c in arr:
    cnt += M//c
    M %= c

print(cnt)