# 문제 개수, 패널티 총합
# 1순위 : 문제의 개수 순 (내림차순)
# 2순위 : 패널티 총합이 더 적은 순 (오릅차순)

N = int(input())
arr = []
for i in range(N):
    arr.append(list(map(int, input().split())))

arr.sort(key=lambda x: [-x[0], x[1]])

cnt = 0
for i in range(N):
    if arr[i][0] == arr[4][0] and arr[i][1] > arr[4][1]:
        cnt += 1

print(cnt)