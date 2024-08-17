def go(arr):
    if len(arr) == m:
        print(' '.join(map(str,arr)))
        return
    for i in range(n):
        go(arr+[a[i]])

n, m = map(int,input().split())
a = sorted(list(map(int, input().split())))
go([])