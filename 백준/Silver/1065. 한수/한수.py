N = int(input())

cnt = 0
for i in range(1, N+1):
    if 1 <= i <= 9:
        cnt += 1
        continue

    d = int(str(i)[1])-int(str(i)[0])
    check = True
    for j in range(len(str(i))-1):
        if int(str(i)[j+1])-int(str(i)[j]) != d:
            check = False
            break
    if check:
        cnt += 1

print(cnt)