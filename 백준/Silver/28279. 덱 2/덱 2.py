from collections import deque
input = __import__('sys').stdin.readline

q = deque()

N = int(input())
for i in range(N):
    arr = list(map(int, input().split()))
    if arr[0] == 1:
        q.appendleft(arr[1])
    elif arr[0] == 2:
        q.append(arr[1])
    elif arr[0] == 3:
        if len(q) != 0:
            print(q.popleft())
        else:
            print(-1)
    elif arr[0] == 4:
        if len(q) != 0:
            print(q.pop())
        else:
            print(-1)
    elif arr[0] == 5:
        print(len(q))
    elif arr[0] == 6:
        if len(q) == 0:
            print(1)
        else:
            print(0)
    elif arr[0] == 7:
        if len(q) != 0:
            print(q[0])
        else:
            print(-1)
    elif arr[0] == 8:
        if len(q) != 0:
            print(q[-1])
        else:
            print(-1)