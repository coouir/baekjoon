from bisect import bisect_left, bisect_right

N, H = map(int, input().split())

arrU = []
arrD = []
for  i in range(N):
    if i%2 == 0:
        arrU.append(int(input()))
    else:
        arrD.append(int(input()))

arrU.sort()
arrD.sort()

prefixU = [0 for i in range(H+2)]
prefixD = [0 for i in range(H+2)]

for i in range(1, H+1):
    idx = bisect_left(arrU, i)
    prefixU[i] = (N//2 - idx) + prefixU[i-1]

for i in range(1, H+1)[::-1]:
    idx = bisect_left(arrD,  H - i + 1)
    prefixD[i] = (N//2 - idx) + prefixD[i+1]

m = 1 << 30
arr = []
for i in range(1, H+1):
    m = min(m, prefixU[i] - prefixU[i-1] + prefixD[i] - prefixD[i+1])
    arr.append(prefixU[i] - prefixU[i-1] + prefixD[i] - prefixD[i+1])

cnt = 0
for i in range(0, H):
    if arr[i] == m:
        cnt += 1

print(m, cnt)