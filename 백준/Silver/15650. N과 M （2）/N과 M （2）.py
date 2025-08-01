def recur(depth, start):
    if M == depth:
        print(*arr)
        return
    
    for i in range(start, N):
        arr[depth] = i+1
        recur(depth+1, i+1)

N, M = map(int, input().split())
arr = [0 for i in range(M)]

recur(0, 0)