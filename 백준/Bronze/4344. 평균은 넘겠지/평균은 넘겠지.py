input = __import__('sys').stdin.readline

C = int(input())
for i in range(C):
    cnt = 0
    arr = list(map(int, input().split()))
    for j in arr[1:]:
        if j > sum(arr[1:])/arr[0]:
            cnt += 1
    r = round((cnt/len(arr[1:]))*100, 3)
    print("{:.3f}%".format(r))