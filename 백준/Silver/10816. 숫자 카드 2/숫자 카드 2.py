N = int(input())
arrN = sorted(list(map(int, input().split())))
M = int(input())
arrM = list(map(int, input().split()))

d = dict()
for i in arrN:
    if i in d:
        d[i] += 1
    else:
        d[i] = 1

for i in arrM:
    if i in d:
        print(d[i], end=' ')
    else:
        print(0, end=' ')