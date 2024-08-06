N = int(input())
arr = []
for i in range(N):
    arr.append(input())

for i in range(len(arr[0])):
    x = arr[0][i]
    check = True
    for j in range(1, N):
        if x != arr[j][i]:
            check = False
            break
    if check:
        print(x, end='')
    else:
        print('?', end='')
