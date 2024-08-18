def dfs(start):
    if len(temp) == m:
        print(*temp)
        return
    for i in range(start, n):
        temp.append(arr[i])
        dfs(i)
        temp.pop()
n, m = map(int,input().split())
arr = sorted(list(map(int,input().split())))
temp = []

dfs(0)