N = int(input())
arr = list(map(int, input().split()))

s = 0
for i in range(len(arr)-1):
    s += abs(arr[i]-arr[i+1])
print(2*(N+sum(arr))+arr[0]+arr[-1]+s)