N = int(input())

s = 0
for i in range(N):
    C, K = map(int, input().split())
    s += C*K
print(s)