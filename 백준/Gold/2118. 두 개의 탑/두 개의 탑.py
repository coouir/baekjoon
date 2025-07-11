N = int(input())
arr = [0] + [int(input()) for _ in range(N)]
total = sum(arr)

prefix = [0 for _ in range(N+2)]
for i in range(1, N+1):
    prefix[i] = arr[i] + prefix[i-1]

answer = 0
s = 1
e = 1
while s < N+1 and e < N+1:
    D = prefix[e] - prefix[s]
    # 정답 확인 코드
    answer = max(answer, min(D, total-D))

    # 이동 코드
    if D < total - D:
        e += 1
    else:
        s += 1

print(answer)
