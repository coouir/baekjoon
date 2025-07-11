N, K = map(int, input().split())
arr = list(map(int, input().split())) + [0]

answer = 0
check = True
cnt = [0 for _ in range(100010)]
cnt[arr[0]] += 1
s = 0
e = 0
while e < N:
    # 정답 확인 코드
    if check:
        answer = max(answer, e-s+1)

    # 이동 코드
    if check:
        e += 1
        cnt[arr[e]] += 1

        if cnt[arr[e]] > K:
            check = False
    else:
        cnt[arr[s]] -= 1
        if cnt[arr[e]] <= K:
            check = True

        s += 1

print(answer)