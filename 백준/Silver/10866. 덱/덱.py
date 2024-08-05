from collections import deque
input = __import__('sys').stdin.readline

dq = deque()

N = int(input())
for i in range(N):
    t = list(input().split())
    if t[0] == "push_front":
        dq.appendleft(int(t[1]))
    elif t[0] == "push_back":
        dq.append(int(t[1]))
    elif t[0] == "pop_front":
        if len(dq) != 0:
            print(dq.popleft())
        else:
            print(-1)
    elif t[0] == "pop_back":
        if len(dq) != 0:
            print(dq.pop())
        else:
            print(-1)
    elif t[0] == "size":
        print(len(dq))
    elif t[0] == "empty":
        if len(dq) == 0:
            print(1)
        else:
            print(0)
    elif t[0] == "front":
        if len(dq) != 0:
            print(dq[0])
        else:
            print(-1)
    elif t[0] == "back":
        if len(dq) != 0:
            print(dq[-1])
        else:
            print(-1)