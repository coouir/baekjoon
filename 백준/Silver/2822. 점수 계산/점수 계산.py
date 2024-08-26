arr = []
for i in range(8):
    arr.append(int(input()))

X = sorted(arr, reverse=True)[:5]
print(sum(X))

for i in range(8):
    if arr[i] in X:
        print(i+1, end=' ')