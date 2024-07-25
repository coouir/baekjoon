string = input()

N = len(string)
R = 1

arr = []
while True:
    if N%R == 0:
        C = N//R
        if R <= C:
            arr.append([R, C])
        else:
            break
    R += 1

R, C = arr[-1][0], arr[-1][1]
l = []
for a in range(R):
    l.append([0] * C)

cnt = 0
for i in range(C):
    for j in range(R):
        l[j][i] = string[cnt]
        cnt += 1

for i in range(R):
    for j in range(C):
        print(l[i][j], end='')
