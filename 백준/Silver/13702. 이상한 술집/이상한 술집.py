N, K = map(int, input().split())
arr = [int(input()) for _ in range(N)]

answer = 0

s = 1
e = max(arr)
while s <= e:
    mid = (s + e) // 2
    
    cnt = 0
    for i in range(N):
        cnt += arr[i] // mid
    
    if cnt >= K:
        answer = mid
        s = mid + 1
    else:
        e = mid - 1

print(answer)