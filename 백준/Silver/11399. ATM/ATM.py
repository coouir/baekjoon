N = int(input())
arr = sorted(list(map(int, input().split())))

cnt = 0
for i in range(len(arr)):
    cnt += sum(arr[:i+1])

print(cnt)