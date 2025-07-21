M, N = map(int, input().split())
arr = list(map(int, input().split()))

answer = 0

s = 1
e = max(arr)
while s <= e:
    mid = (s + e) // 2
    
    cnt = 0
    for i in range(N):
        if arr[i] >= mid:
            cnt += arr[i] // mid

    if cnt >= M:
        answer = mid
        s = mid + 1
    else:
        e = mid - 1

print(answer)