N = int(input())
nList = list(map(int, input().split()))

cnt = 0

for i in range(N):
    if i+1 != nList[i]:
        cnt += 1

print(cnt)