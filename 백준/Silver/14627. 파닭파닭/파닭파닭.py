S, C = map(int, input().split())
arr = [int(input()) for _ in range(S)]
total = sum(arr)

answer = 0

s = 1
e = max(arr)
while s <= e:
    mid = (s + e) // 2

    cnt = 0
    for i in range(S):
        cnt += arr[i] // mid
    
    if cnt >= C:
        answer = total - C*mid
        s = mid + 1
    else:
        e = mid - 1

print(answer)