n = int(input())
arr = list(map(int, input().split())) + [0]
k = int(input())

cnt = 0
s, e = 0, 0
total = arr[0]
while e < n:
    # 정답 확인 코드
    if total > k:
        cnt += (n - e)

    # 이동 코드
    if total <= k:
        e += 1
        total += arr[e]
    else:
        total -= arr[s]
        s += 1

print(cnt)