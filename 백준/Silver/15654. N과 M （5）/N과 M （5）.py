def recur(depth):

    if depth == M:
        print(*ans)
        return
    
    for i in range(N):
        if visited[i]:
            continue

        visited[i] = True
        ans[depth] = arr[i]
        recur(depth + 1)
        visited[i] = False


N, M = map(int, input().split())
arr = list(map(int, input().split()))
arr.sort()

visited = [False for i in range(N)]
ans = [0 for i in range(M)]

recur(0)