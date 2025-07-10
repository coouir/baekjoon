N, K = map(int, input().split())
arr = list(map(int, input().split())) + [0]

answer, l, cnt = 0, 0, 0
if arr[0]%2 == 1:
    cnt += 1
else:
    l += 1
s = 0
e = 0


while e < N:
    # 정답 확인 코드
    if cnt <= K:
        answer = max(answer, l)

    # 이동 코드
    if cnt > K:
        if arr[s]%2 == 1:
            cnt -= 1
        else:
            l -= 1
        s += 1
    else:
        e += 1
        if arr[e]%2 == 1:
            cnt += 1
        else:
            l += 1

print(answer)