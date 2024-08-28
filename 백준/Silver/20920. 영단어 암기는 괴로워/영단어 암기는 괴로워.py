N, M = map(int, input().split())
d = dict()
for i in range(N):
    s = input()
    if len(s) >= M:
        if s in d:
            d[s] += 1
        else:
            d[s] = 1
d = list(d.items())
d = sorted(d, key=lambda x: [-x[1], -len(x[0]), x[0]])
for i in d:
    print(i[0])