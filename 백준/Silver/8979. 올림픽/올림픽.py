# 1순위 : 금메달 수
# 2순위 : 은메달 수
# 3순위 : 동메달 수

N, K = map(int, input().split())
arr = []

for i in range(N):
    arr.append(list(map(int, input().split())))

arr.sort(key=lambda x: [-x[1], -x[2], -x[3]])

for i in range(N):
    if arr[i][0] == K:
        r = i+1
        for j in range(i):
            if arr[i][1:] == arr[j][1:]:
                r -= 1
        print(r)
        break