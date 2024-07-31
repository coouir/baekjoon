import bisect

input = __import__('sys').stdin.readline
T = int(input())

for i in range(T):
    N, M = map(int, input().split())
    A = list(map(int, input().split())); A.sort()
    B = list(map(int, input().split())); B.sort()

    cnt = 0
    for a in A:
        cnt += (bisect.bisect(B, a-1))
    print(cnt)