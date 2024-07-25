arr = []
for i in range(8):
    arr.append(list(input()))

ans = 0
for i in range(8):
    color = i%2
    for j in range(8):
        if color == 0 and arr[i][j] == 'F':
            ans += 1
        color = (color + 1) % 2
print(ans)