C = int(input())
for _ in range(C):
    arr = list(map(int, input().split()))
    s = sum(arr[1:]) / arr[0]

    cnt = 0
    for i in range(1, len(arr)):
        if arr[i] > s:
            cnt += 1
    print(f"{round(cnt/arr[0] * 100, 3):.3f}%")