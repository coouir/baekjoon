K = int(input())
for i in range(K):
    arr = list(map(int, input().split()))
    arr = sorted(arr[1:])
    d = arr[1]-arr[0]
    for j in range(2, len(arr)):
        d = max(arr[j]-arr[j-1], d)
    print("Class " + str(i+1))
    print("Max {}, Min {}, Largest gap {}".format(arr[-1], arr[0], d))