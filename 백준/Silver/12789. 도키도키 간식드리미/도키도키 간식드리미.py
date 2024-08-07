from collections import deque

N = int(input())

dq = deque(map(int, input().split()))
stack = []

r = []
n = 1

while True:
    check = False
    if len(dq) != 0:
        if dq[0] == n:
            r.append(dq.popleft())
            n += 1
            check = True
            continue
    if len(stack) != 0:
        if stack[-1] == n:
            r.append(stack.pop())
            n += 1
            check = True
            continue

    if len(dq) != 0:
        if dq[0] != n:
            stack.append(dq.popleft())
            check = True
    
    
    if not check:
        break
    
    if len(dq) == 0 and len(stack) == 0:
        break

if len(r) == N:
    print("Nice")
else:
    print("Sad")