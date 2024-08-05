from collections import deque

T = int(input())

for i in range(T):
    N, M = map(int, input().split())
    Q = deque(map(int, input().split()))
    
    cnt = 1
    while len(Q) > 0:
        if M == 0:
            if Q[0] >= max(Q):
                print(cnt)
                break
            else:
                Q.append(Q.popleft())
                M = len(Q)-1
        else:
            if Q[0] >= max(Q):
                cnt += 1
                Q.popleft()
            else:
                Q.append(Q.popleft())
            M -= 1