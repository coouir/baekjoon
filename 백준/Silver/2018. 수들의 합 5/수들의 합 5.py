N = int(input())

cnt = 0

s = 0
e = 0
total = 1
while e < N:
    # 정답 확인 코드
    if total == N:
        cnt += 1

    # 이동 코드
    if total < N:
        e += 1
        total += e + 1
    else:
        total -= s + 1
        s += 1

print(cnt)