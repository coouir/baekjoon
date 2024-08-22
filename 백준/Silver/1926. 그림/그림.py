def f():
    check1[i][j] = val
    q.append((i,j))
    while q:
        x, y = q.popleft()
        for k in range(4):
            nx, ny = x + dx[k], y + dy[k]
            if 0 <= nx < n and 0 <= ny < m:
                if arr[nx][ny] and not check1[nx][ny]:
                    check1[nx][ny] = val
                    q.append((nx, ny))

def g(x, y):
    global res
    for i in range(4):
        nx, ny = x + dx[i], y + dy[i]
        if 0 <= nx < n and 0 <= ny < m:
            if arr[nx][ny] and not check2[nx][ny]:
                res += 1
                check2[nx][ny] = 1
                g(nx, ny)

import sys
sys.setrecursionlimit(250000)
from collections import deque
dx, dy = [-1, 1, 0, 0], [0, 0, -1, 1]

n, m = map(int, input().split())
arr = []
for i in range(n):
    arr.append(list(map(int, input().split())))

check1 = [[0]*m for _ in range(n)]
check2 = [[0]*m for _ in range(n)]

val = 1
ans = 0

q = deque()
for i in range(n):
    for j in range(m):
        if check1[i][j] == 0 and arr[i][j] == 1:
            f()
            val += 1
        if check2[i][j] == 0 and arr[i][j] == 1:
            res = 1
            check2[i][j] = 1
            g(i, j)
            ans = max(ans, res)

print(val -1)
print(ans)