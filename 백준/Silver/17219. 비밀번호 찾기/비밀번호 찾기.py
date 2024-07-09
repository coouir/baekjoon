N, M = map(int ,input().split())

s_p = {}

for i in range(N):
    link, password = input().split()
    s_p[link] = password

for j in range(M):
    print(s_p[input()])