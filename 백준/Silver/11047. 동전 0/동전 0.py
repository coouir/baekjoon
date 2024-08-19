N, K = map(int, input().split())

arr = []
for i in range(N):
    arr.append(int(input()))

arr.sort(reverse=True)

cnt = 0
for c in arr:
    cnt += K//c
    K %= c
print(cnt)