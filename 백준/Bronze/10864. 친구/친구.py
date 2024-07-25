N, M = map(int, input().split()) #N:도현이네 반 학생의 수

arr = []

for i in range(M):
    arr.append(list(map(int, input().split())))

for i in range(1, N+1):
    cnt = 0
    for p in range(M):
        if i in arr[p]:
            cnt += 1
    print(cnt)