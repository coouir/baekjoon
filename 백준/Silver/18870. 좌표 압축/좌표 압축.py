N = int(input())

arr = list(map(int, input().split()))
arr_s = sorted(list(set(arr)))

mapper = {}
for i in range(len(arr_s)):
    mapper[arr_s[i]] = i

for i in range(N):
    arr[i] = mapper[arr[i]]

print(*arr)