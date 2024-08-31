import sys
input = sys.stdin.readline

N, M = map(int, input().rstrip().split())

d1 = dict()
d2 = dict()
for i in range(1, N+1):
    x = input().rstrip()
    d1[i] = x
    d2[x] = i
for i in range(M):
    x = input().rstrip()
    if x.isdigit():
        print(d1[int(x)])
    else:
        print(d2[x])