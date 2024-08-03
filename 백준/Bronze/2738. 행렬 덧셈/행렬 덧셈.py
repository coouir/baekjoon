N, M = map(int, input().split())

arr_N = []
arr_M = []

for i in range(N):
    arr_N.append(list(map(int, input().split())))

for i in range(N):
    arr_M.append(list(map(int, input().split())))

for i in range(N):
    for j in range(M):
        print(arr_N[i][j]+arr_M[i][j], end=' ')
    print()