N = int(input())
arr = []

for i in range(N):
    string = input()
    if string not in arr:
        arr.append(string)

arr = sorted(arr, key=lambda x: [len(x), x])
print('\n'.join(arr))