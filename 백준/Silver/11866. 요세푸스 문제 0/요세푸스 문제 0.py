N, K = map(int, input().split())
arr = [i for i in range(1, N+1)]
r = []
i = 0
while (len(arr) != 0):
    i += K-1 
    while i >= len(arr):
        i -= len(arr)
    r.append(arr[i])
    del arr[i]

print('<'+', '.join(map(str, r))+'>')