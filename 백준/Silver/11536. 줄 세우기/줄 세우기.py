arr = []

N = int(input())
for i in range(N):
    arr.append(input())

if arr == sorted(arr):
    print("INCREASING")
elif arr == sorted(arr, reverse=True):
    print("DECREASING")
else:
    print("NEITHER")