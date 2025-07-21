N = int(input())
arr = list(map(int, input().split()))
M = int(input())

answer = -1

s = 0
e = max(arr)
while s <= e:
    mid = (s + e) // 2

    total = 0
    for i in range(N):
        if arr[i] <= mid:
            total += arr[i]
        else:
            total += mid
    
    if total <= M:
        answer = mid
        s = mid + 1
    else:
        e = mid - 1

print(answer)