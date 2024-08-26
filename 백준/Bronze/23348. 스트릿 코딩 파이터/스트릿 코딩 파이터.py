input = __import__("sys").stdin.readline

A, B, C = map(int, input().split())
N = int(input())

M = 0

for i in range(N):
    s = 0
    for j in range(3):
        a, b, c = map(int, input().split())
        s += (A*a) + (B*b) + (C*c)
    M = max(M, s)

print(M)