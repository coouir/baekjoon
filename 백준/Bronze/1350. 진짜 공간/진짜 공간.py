N = int(input())
F = list(map(int, input().split()))
C = int(input())
S = 0

for i in F:
    if i == 0:
        pass
    else:
        if i%C == 0:
            S += (i//C)*C
        else:
            S += (i//C + 1)*C

print(S)