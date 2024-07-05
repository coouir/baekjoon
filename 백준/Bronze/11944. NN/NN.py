N, M = map(int, input().split())

a = str(N)*N

if len(a) > len(a[:M]):
    print(a[:M])
else:
    print(a)
