arr = []

m = 0
l = [0, 0]

for i in range(9):
    arr.append(list(map(int, input().split())))

for i in range(9):
    if max(arr[i]) >= m:
        m = max(arr[i])
        l[0] = i+1
        l[1] = arr[i].index(max(arr[i]))+1

print(m)
print(l[0], l[1])