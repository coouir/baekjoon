input = __import__('sys').stdin.readline

S = set()

M = int(input())
for i in range(M):
    arr = list(input().split())
    if arr[0] == "add":
        S.add(int(arr[1]))
    elif arr[0] == "remove":
        S.discard(int(arr[1]))
    elif arr[0] == "check":
        if int(arr[1]) in S:
            print(1)
        else:
            print(0)
    elif arr[0] == "toggle":
        if int(arr[1]) in S:
            S.remove(int(arr[1]))
        else:
            S.add(int(arr[1]))
    elif arr[0] == "all":
        S = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}
    elif arr[0] == "empty":
        S = set()