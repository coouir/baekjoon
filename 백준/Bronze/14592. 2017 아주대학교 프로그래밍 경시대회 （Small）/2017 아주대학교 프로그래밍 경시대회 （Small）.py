N = int(input())
arr = []

for i in range(N):
    arr.append([i+1] + list(map(int, input().split())))

arr.sort(key=lambda x: [-x[1], x[2], x[3]])

print(arr[0][0])