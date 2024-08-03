N = int(input())
arr = list(map(int, input().split()))

cnt = 0

for num in arr:
    if num != 1:
        check = True
        for _ in range(2, num):
            if num%_ == 0:
                check = False
                break
        if check:
            cnt += 1

print(cnt)