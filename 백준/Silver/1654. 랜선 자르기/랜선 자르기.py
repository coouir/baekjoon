K, N = map(int, input().split())
arr = [int(input()) for _ in range(K)]

answer = -1

s = 1
e = max(arr)
while s <= e:
    mid = (s+e) // 2

    cnt = 0
    for i in range(K):
        cnt += arr[i] // mid
    
    if cnt >= N:
        answer = mid
        s = mid + 1
    else:
        e = mid - 1

print(answer)