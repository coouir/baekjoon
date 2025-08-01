def recur(depth):
    if depth == M:
        print(*arr)
        return 
    
    for i in range(N):
        if visited[i+1]:
            continue

        visited[i+1] = True
        arr[depth] = i+1
        recur(depth+1)
        visited[i+1] = False

N, M = map(int, input().split())
arr = [0 for i in range(M)]
visited = [False for i in range(N+1)]

recur(0)