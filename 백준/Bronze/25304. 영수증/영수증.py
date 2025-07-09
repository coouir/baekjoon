X = int(input())

s = 0
N = int(input())
for _ in range(N):
    a, b = map(int, input().split())
    s += a*b

if X == s:
    print("Yes")
else:
    print("No")