N, Q = map(int, input().split())

arrX = list(map(int, input().split()))
arrY = list(map(int, input().split()))

prefix1 = [0 for _ in range(N+1)]
prefix2 = [0 for _ in range(N+1)]
for i in range(1, N):
    d = ((arrX[i]-arrX[i-1])**2 + (arrY[i]-arrY[i-1])**2) ** 0.5
    if arrY[i] > arrY[i-1]:
        d *= 3
    elif arrY[i] == arrY[i-1]:
        d *= 2

    prefix1[i] = d + prefix1[i-1]

for i in range(1, N)[::-1]:
    d = ((arrX[i]-arrX[i-1])**2 + (arrY[i]-arrY[i-1])**2) ** 0.5
    if arrY[i] < arrY[i-1]:
        d *= 3
    elif arrY[i] == arrY[i-1]:
        d *= 2

    prefix2[i] = d + prefix2[i+1]

for q in range(Q):
    i, j = map(int, input().split())
    if i < j:
        print(prefix1[j-1] - prefix1[i-1])
    else:
        print(prefix2[j] - prefix2[i])

