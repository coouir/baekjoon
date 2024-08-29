d = dict()

N = int(input())
for i in range(N):
    n, e = input().split('.')
    if e in d:
        d[e] += 1
    else:
        d[e] = 1

arr = list(d.items())
arr.sort(key=lambda x: [x[0]])
for i in range(len(arr)):
    print(arr[i][0], arr[i][1])