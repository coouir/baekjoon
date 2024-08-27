from itertools import combinations as cb
input = __import__('sys').stdin.readline

while True:
    arr = list(map(int, input().split()))
    if arr[0] == 0:
        break
    else:
        for t in cb(arr[1:], 6):
            print(*t)
        print()