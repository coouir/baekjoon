n = int(input())
m = int(input())
fx, fy = 0, 0
arr = [[0]*n for _ in range(n)]

x, y = 0, 0
arr[0][0] = n*n

def in_range(x, y):
    return 0 <= x < n and 0 <= y < n
dxs, dys = [0, 1, 0, -1], [1, 0, -1, 0]

dir_num = 1

for i in range(1, n*n):
    nx, ny = x + dxs[dir_num], y + dys[dir_num]
    
    if not in_range(nx, ny) or arr[nx][ny] != 0:
        dir_num = (dir_num + 3) % 4
        
    x, y = x + dxs[dir_num], y + dys[dir_num]
    arr[x][y] = n*n - (i)
    if n*n - (i) == m:
        fx, fy = x, y

for i in range(n):
    for j in range(n):
        print(arr[i][j], end = ' ')
    print()
print(fx+1, fy+1)