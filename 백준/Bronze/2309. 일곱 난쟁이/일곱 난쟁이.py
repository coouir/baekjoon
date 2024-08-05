from itertools import combinations as cb

input = __import__('sys').stdin.readline

arr = []
for _ in range(9):
    arr.append(int(input()))

for t in cb(arr, 7):
    if sum(t) == 100:
        l = list(t)
        l.sort()
        print('\n'.join(map(str, l)))
        break