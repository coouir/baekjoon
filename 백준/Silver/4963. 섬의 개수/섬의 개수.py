def flood_fill():
    check[i][j] = val
    q.append((i,j))
    while q:
        x, y = q.popleft()
        for k in range(8):
            nx, ny = x + dx[k], y + dy[k]
            if 0 <= nx < h and 0 <= ny < w:
                if arr[nx][ny] and not check[nx][ny]:
                    check[nx][ny] = val
                    q.append((nx, ny))

from collections import deque
dx, dy = [-1, -1, -1, 0, 1, 1, 1, 0], [-1, 0, 1, 1, 1, 0, -1, -1]

while True:
    w, h = map(int, input().split())
    if w == 0 and h == 0:
        break
    else:
        arr = []
        for i in range(h):
            arr.append(list(map(int, input().split())))
        check = [[0]*w for _ in range(h)]
        val = 1

        q = deque()
        for i in range(h):
            for j in range(w):
                if check[i][j] == 0 and arr[i][j] == 1:
                    flood_fill()
                    val += 1
        print(val - 1)