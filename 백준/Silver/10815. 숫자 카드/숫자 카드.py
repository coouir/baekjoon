def binary_search(target, arr):
    start = 0
    end = len(arr)-1
    while start <= end:
        mid = (start+end)//2
        if arr[mid] == target:
            return 1
        elif arr[mid] > target:
            end = mid-1
        else:
            start = mid+1
    return 0

N = int(input())
NN = sorted(list(map(int, input().split())))

M = int(input())
MM = list(map(int, input().split()))

for i in MM:
    print(binary_search(i, NN), end=" ")