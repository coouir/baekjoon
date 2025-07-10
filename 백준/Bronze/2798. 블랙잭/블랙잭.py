N, M = map(int, input().split())
arr = list(map(int, input().split()))

answer = 0
for i in range(N):
    for j in range(i+1, N):
        for k in range(j+1, N):
            s = arr[i] + arr[j] + arr[k]
            if s > M:
                continue
            
            answer = max(answer, s)

print(answer)
