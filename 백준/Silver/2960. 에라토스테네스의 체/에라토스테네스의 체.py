import math

cnt = 0
# 2 3 4 5 6 7
N, K = map(int, input().split())
arr = [i for i in range(2, N+1)]
arr2 = []
for i in range(len(arr)):
    check = True
    for j in range(2, int(math.sqrt(arr[i]))+1):
        if arr[i]%j == 0:
            check = False
            break

    if check:
        arr2.append(arr[i])
        cnt += 1
        if cnt == K:
            print(arr[i])

        for j in arr[i+1:]:
            if j%arr[i] == 0 and j not in arr2:
                arr2.append(j)
                cnt += 1
                if cnt == K:
                    print(j)