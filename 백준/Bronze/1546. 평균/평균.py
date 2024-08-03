N = int(input())
arr = list(map(int, input().split()))

m = max(arr)

for i in range(len(arr)):
    arr[i] = round(arr[i]/m*100, 2)

print(sum(arr)/len(arr))