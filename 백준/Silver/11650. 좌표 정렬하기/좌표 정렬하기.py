N = int(input())
arr = []
for i in range(N):
    arr.append(list(map(int, input().split())))

arr = sorted(arr, key=lambda x: [x[0], x[1]])

for i in range(len(arr)):
    print(arr[i][0], arr[i][1])