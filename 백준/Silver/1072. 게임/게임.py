X, Y = map(int, input().split())

answer = -1

s = 0
e = X
while s <= e:
    mid = (s+e) // 2

    if int((Y+mid) * 100 / (X+mid)) != int(Y * 100 / X):
        answer = mid
        e = mid - 1
    else:
        s = mid + 1

print(answer)
    