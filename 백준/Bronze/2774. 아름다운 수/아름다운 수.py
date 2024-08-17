T = int(input())

for i in range(T):
    arr = [0]*10
    n = input()
    for _ in n:
        arr[int(_)] = 1
    print(sum(arr))