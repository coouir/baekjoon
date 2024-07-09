N, M = map(int, input().split())

A, B = set(), set()

for i in range(N):
    A.add(input())
for j in range(M):
    B.add(input())

C = sorted(list(A&B))

print(len(C))
for p in C:
    print(p)