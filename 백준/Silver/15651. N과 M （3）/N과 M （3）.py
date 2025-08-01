def recur(depth):
    if depth == M:
        print(*arr)
        return
    
    for i in range(N):
        arr[depth] = i+1
        recur(depth + 1)

N, M = map(int, input().split())
arr = [0 for i in range(M)]

recur(0)