input = __import__('sys').stdin.readline

N, M = map(int, input().split())

N_set = set()

for i in range(N):
    N_set.add(input())

cnt = 0

for p in range(M):
    string = input()
    if string in N_set:
        cnt += 1

print(cnt)