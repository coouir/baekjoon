A, B, C = map(int, input().split())

answer = 0

N = int(input())
for i in range(N):
    s = 0
    for j in range(3):
        a, b, c = map(int, input().split())
        s += (A*a) + (B*b) + (C*c)
    
    answer = max(answer, s)

print(answer)