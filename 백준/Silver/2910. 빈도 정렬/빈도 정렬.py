N, C = map(int, input().split())
arr = list(map(int, input().split()))

d = dict()
for i in arr:
    if i in d:
        d[i] += 1
    else:
        d[i] = 1
arr = list(d.items())
arr = sorted(arr, key=lambda x: [-x[1]])
for i in range(len(arr)):
    print((str(arr[i][0])+" ")*arr[i][1], end='')
