H, M = map(int, input().split())
M += int(input())

if M >= 60:
    H += M // 60
    M = M % 60

if H > 23:
    H -= 24

print(H, M)