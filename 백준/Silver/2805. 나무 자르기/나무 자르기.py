N, M = map(int, input().split())
arr = list(map(int, input().split()))

answer = -1

s = 0
e = max(arr) - 1
while s <= e:
    mid = (s + e) // 2

    total = 0
    for i in range(N):
        if arr[i] - mid > 0:
            total += arr[i] - mid
    
    if total >= M:
        answer = mid
        s = mid + 1
    else:
        e = mid - 1

print(answer)